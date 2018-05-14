#pragma once

namespace CLRTheKapicaPendulum
{
	using namespace System;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	public ref class Graph
	{
	private:
		static constexpr int grFields = 0;

		PictureBox ^pb;
		Graphics ^gr;

		Point grCenter;
		int gridStepX = 0, gridStepY = 0;
		double grScaleX = 0, grScaleY = 0;
		String ^xAxisName = "", ^yAxisName = "";

	public:
		Graph(PictureBox ^pb);
		void Clear();
		void Setup(String ^xAxisName, double xAxisMaxVal, String ^yAxisName, double yAxisMaxVal);
		void MakeGrid();
		void AddString(int x, int y, String ^s);
		void AddString(int x, int y, String ^s, Color c);
		bool AddDot(int x, int y, Color c);
		bool AddGraphDot(double x, double y);
		bool AddGraphDot(double x, double y, Color c);
	};
}
