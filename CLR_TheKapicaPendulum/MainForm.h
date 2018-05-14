#pragma once

namespace CLRTheKapicaPendulum {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
			edit_m->Value = (Decimal) 7.0;
			edit_l->Value = (Decimal) 5.0;
			edit_n->Value = (Decimal) 50.0;
			edit_a->Value = (Decimal) 3.0;
		
			edit_x_max->Value = (Decimal) 50.0;
			edit_y_max->Value = (Decimal) 50.0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  edit_a;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  edit_n;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  edit_l;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  edit_m;

	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Button^  StopButton;
	private: System::Windows::Forms::Button^  CloseButton;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  edit_y_max;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  edit_x_max;
	private: System::Windows::Forms::Timer^  timer;

	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->edit_a = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->edit_n = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->edit_l = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->edit_y_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->edit_x_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_n))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y_max))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_x_max))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(214, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(441, 441);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->edit_a);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->edit_n);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->edit_l);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->edit_m);
			this->groupBox1->Location = System::Drawing::Point(8, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 212);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры задачи";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Амплитуда вынужденных a, град.";
			// 
			// edit_a
			// 
			this->edit_a->DecimalPlaces = 2;
			this->edit_a->Location = System::Drawing::Point(6, 182);
			this->edit_a->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_a->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_a->Name = L"edit_a";
			this->edit_a->Size = System::Drawing::Size(188, 20);
			this->edit_a->TabIndex = 6;
			this->edit_a->ThousandsSeparator = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Частота вынужденных n, Гц";
			// 
			// edit_n
			// 
			this->edit_n->DecimalPlaces = 2;
			this->edit_n->Location = System::Drawing::Point(6, 134);
			this->edit_n->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_n->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_n->Name = L"edit_n";
			this->edit_n->Size = System::Drawing::Size(188, 20);
			this->edit_n->TabIndex = 4;
			this->edit_n->ThousandsSeparator = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Длина стержня l, м";
			// 
			// edit_l
			// 
			this->edit_l->DecimalPlaces = 2;
			this->edit_l->Location = System::Drawing::Point(6, 86);
			this->edit_l->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_l->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_l->Name = L"edit_l";
			this->edit_l->Size = System::Drawing::Size(188, 20);
			this->edit_l->TabIndex = 2;
			this->edit_l->ThousandsSeparator = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Масса подвеса m, кг";
			// 
			// edit_m
			// 
			this->edit_m->DecimalPlaces = 2;
			this->edit_m->Location = System::Drawing::Point(6, 38);
			this->edit_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_m->Name = L"edit_m";
			this->edit_m->Size = System::Drawing::Size(188, 20);
			this->edit_m->TabIndex = 0;
			this->edit_m->ThousandsSeparator = true;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(8, 372);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(200, 23);
			this->StartButton->TabIndex = 2;
			this->StartButton->Text = L"Начать";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MainForm::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Enabled = false;
			this->StopButton->Location = System::Drawing::Point(8, 401);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(200, 23);
			this->StopButton->TabIndex = 3;
			this->StopButton->Text = L"Остановить и очистить";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &MainForm::StopButton_Click);
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(8, 430);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(200, 23);
			this->CloseButton->TabIndex = 4;
			this->CloseButton->Text = L"Закрыть";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &MainForm::CloseButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->edit_y_max);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->edit_x_max);
			this->groupBox2->Location = System::Drawing::Point(8, 226);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 118);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Настроики графика";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"y_max";
			// 
			// edit_y_max
			// 
			this->edit_y_max->DecimalPlaces = 2;
			this->edit_y_max->Location = System::Drawing::Point(6, 89);
			this->edit_y_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_y_max->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_y_max->Name = L"edit_y_max";
			this->edit_y_max->Size = System::Drawing::Size(188, 20);
			this->edit_y_max->TabIndex = 10;
			this->edit_y_max->ThousandsSeparator = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"x_max";
			// 
			// edit_x_max
			// 
			this->edit_x_max->DecimalPlaces = 2;
			this->edit_x_max->Location = System::Drawing::Point(6, 41);
			this->edit_x_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_x_max->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_x_max->Name = L"edit_x_max";
			this->edit_x_max->Size = System::Drawing::Size(188, 20);
			this->edit_x_max->TabIndex = 8;
			this->edit_x_max->ThousandsSeparator = true;
			// 
			// timer
			// 
			this->timer->Interval = 10;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 461);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->CloseButton);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(680, 500);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(680, 500);
			this->Name = L"MainForm";
			this->Padding = System::Windows::Forms::Padding(5);
			this->ShowIcon = false;
			this->Text = L"Маятник Капицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_n))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y_max))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_x_max))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		private:
			Pendulum *p;
			Graph ^gr;


		private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
			StartButton->Enabled = false;
			StopButton->Enabled = true;

			double m = (double)edit_m->Value;
			double l = (double)edit_l->Value;
			double n = (double)edit_n->Value;
			double a = (double)edit_a->Value;

			p = new Pendulum(m,n,a,l);

			double x_max = (double)edit_x_max->Value;
			double y_max = (double)edit_y_max->Value;

			gr = gcnew Graph(pictureBox1);
			gr->Setup("X", x_max, "Y", y_max);
			gr->Clear();
			gr->MakeGrid();

			timer->Start();
		}

		private: System::Void StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
			StartButton->Enabled = true;
			StopButton->Enabled = false;
			this->timer->Stop();
			gr->Clear();
		}

		private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}

		private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			p->Step();
			gr->AddGraphDot(p->get_x(), p->get_y());
		}
	};
}
