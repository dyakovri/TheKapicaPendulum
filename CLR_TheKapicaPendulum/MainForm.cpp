#include "Pendulum.cpp"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLRTheKapicaPendulum::MainForm form;
	Application::Run(%form);
}

namespace CLRTheKapicaPendulum {

 System::Void MainForm::StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
	StartButton->Enabled = false;
	StopButton->Enabled = true;

	double m = (double)edit_m->Value;
	double l = (double)edit_l->Value;
	double n = (double)edit_n->Value;
	double a = (double)edit_a->Value;

	p = new Pendulum(m, n, a, l);

	double x_max = (double)edit_x_max->Value;
	double y_max = (double)edit_y_max->Value;

	chart1->ChartAreas[0]->AxisX->Maximum = +x_max;
	chart1->ChartAreas[0]->AxisX->Minimum = -x_max;
	chart1->ChartAreas[0]->AxisY->Maximum = +y_max;
	chart1->ChartAreas[0]->AxisY->Minimum = -y_max;
	chart1->Series[0]->Points->Clear();

	timer->Start();
}

 System::Void MainForm::StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
	StartButton->Enabled = true;
	StopButton->Enabled = false;
	this->timer->Stop();
	chart1->Series[0]->Points->Clear();
}

 System::Void MainForm::CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

 System::Void MainForm::timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	p->Step();
	chart1->Series[0]->Points->AddXY(p->get_x(), p->get_y());
}
}