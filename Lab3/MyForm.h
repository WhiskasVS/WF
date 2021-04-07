#pragma once
#include <cmath>

double PI = 3.14;
double EXP = 2.71828182845904523536;

namespace Graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(191, 487);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"y = -0.5 e^x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(745, 487);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"r = ae^bt";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 98);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(440, 340);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(959, 98);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(580, 440);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(575, 98);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(440, 340);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox3_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(382, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(295, 28);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Графики на плоскости";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(1115, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(303, 28);
			this->label5->TabIndex = 7;
			this->label5->Text = L"График в пространстве";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(1225, 487);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 23);
			this->label6->TabIndex = 8;
			this->label6->Text = L"z = xy^2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1568, 562);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Графики";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int l, b, h, w;

	//===================================== График функции y = -0.5 e^x ========================================

	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		h = pictureBox1->Height;
		w = pictureBox1->Width;

		e->Graphics->DrawLine(Pens::White, 0, h / 3, w, h / 3);
		e->Graphics->DrawLine(Pens::White, w / 2, 0, w / 2, h);

		e->Graphics->DrawLine(Pens::White, w - 15, h / 3 + 5, w, h / 3);
		e->Graphics->DrawLine(Pens::White, w - 15, h / 3 - 5, w, h / 3);
		e->Graphics->DrawLine(Pens::White, w / 2 - 5, 15, w / 2, 0);
		e->Graphics->DrawLine(Pens::White, w / 2 + 5, 15, w / 2, 0);

		e->Graphics->DrawString("X", this->Font, Brushes::Red, w - 15, h / 3 - 15);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, w / 2 - 15, 5);

		double x1, x2, y1, y2, x, y, mx, my, dx;
		x1 = -2;
		x2 = 2;
		dx = 0.001;
		y1 = -0.5 * pow(EXP, x1);
		y2 = -0.5 * pow(EXP, x2);
		x = x1;
		while (x <= x2) {
			y = -0.5 * pow(EXP, x);
			if (y < y1) y1 = y;
			if (y > y2) y2 = y;
			x += dx;
		}
		my = 0.5 * h / (y2 - y1);
		mx = w / (x2 - x1);
		x = x1;
		y1 = -0.5 * pow(EXP, x);
		x += dx;
		while (x <= x2) {
			y = -0.5 * pow(EXP, x);
			e->Graphics->DrawLine(Pens::LightSeaGreen, (int)(x1 * mx + w / 2), (int)(h / 3 - y1 * my), (int)(x * mx + w / 2), (int)(h / 3 - y * my));
			x1 = x;
			y1 = y;
			x += dx;
		}
	}

	//======================================= График функции r = ae^bt ==========================================

	private: System::Void pictureBox3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		h = pictureBox1->Height;
		w = pictureBox1->Width;

		e->Graphics->DrawLine(Pens::White, 0, h / 2, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 2, 0, w / 2, h);

		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 + 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w - 15, h / 2 - 5, w, h / 2);
		e->Graphics->DrawLine(Pens::White, w / 2 - 5, 15, w / 2, 0);
		e->Graphics->DrawLine(Pens::White, w / 2 + 5, 15, w / 2, 0);

		e->Graphics->DrawString("X", this->Font, Brushes::Red, w - 15, h / 2 - 15);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, w / 2 - 15, 5);

		double x1, x2, y1, y2, x, y, mx, my, dt;
		x1 = -30;
		x2 = 30;
		dt = 0.001;
		y1 = -30;
		y2 = 30;
		my = h / (y2 - y1);
		mx = w / (x2 - x1);
		double t = 0, a = 0.06, b = 0.15;
		x1 = a * Math::Pow(EXP, b*t)*Math::Cos(t);
		y1 = a * Math::Pow(EXP, b*t)*Math::Sin(t);
		t += dt;
		while (t <= 13 * PI) {
			x = a * Math::Pow(EXP, b*t)*Math::Cos(t);
			y = a * Math::Pow(EXP, b*t)*Math::Sin(t);
			e->Graphics->DrawLine(Pens::HotPink, (int)(x1*mx + w / 2), (int)(h / 2 - y1 * my), (int)(x*mx + w / 2), (int)(h / 2 - y * my));
			t += dt;
			x1 = x;
			y1 = y;
		}
	}
	
	private:
		static double x0 = 4, Y0 = -0.5, z0 = 3, alf = 4.3, bet = 4.92, A = -6.5, a = -6.5;
		static double Xmin = -1.5, Xmax = 1.5, Ymin = -1.5, Ymax = 1.5;
		static int Width = 200, Height = 200;
		static double h1 = 0.1, h0 = 0.25;
		static array<Point>^ ob = gcnew array<Point>(4);

	private: void IJ(double x, double y, double z, array<int>^ ar) {
		double Xn, Yn, Zn;

		//Осуществляем перенос системы координат в т.(x0,Y0,z0)
		Xn = (x - x0) * Math::Cos(alf) - (y - Y0) * Math::Sin(alf);
		Yn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Cos(bet) - (z - z0) * Math::Sin(bet);
		Zn = ((x - x0) * Math::Sin(alf) + (y - Y0) * Math::Cos(alf)) * Math::Sin(bet) + (z - z0) * Math::Cos(bet);

		//Делаем проекцию на плоскость
		Xn /= Zn / A + 1;
		Yn /= Zn / a + 1;

		//Масштабируем оси x и y
		ar[0] = Width * (Xn - Xmin) / (Xmax - Xmin);
		ar[1] = Height * (Yn - Ymax) / (Ymin - Ymax);
	}

	private: double F1(double x1, double y1) {
		return (x1*y1*y1);
	}
			
	//====================================== График функции z = xy^2 ===========================================

	private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		int i3, j3;
		int i1, j1, i2, j2;
		array<int>^ a1;
		array<int>^ a2;
		a1 = gcnew array<int>(2);
		a2 = gcnew array<int>(2);
		IJ(0, 0, 0, a1);

		//Рисуем и подписываем ось x
		IJ(4, 0, 0, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("X", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//Рисуем и подписываем ось y
		IJ(0, 4, 0, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Y", this->Font, Brushes::Red, a2[0] + 3, a2[1]);

		//Рисуем и подписываем ось z
		IJ(0, 0, 4.3, a2);
		e->Graphics->DrawLine(Pens::White, a1[0], a1[1], a2[0], a2[1]);
		e->Graphics->DrawString("Z", this->Font, Brushes::Red, a2[0] + 3, a2[1] - 3);


		for (j3 = 0; j3 < 25; j3++) {
			for (i3 = 0; i3 < 30; i3++) {
				IJ(h0 + h1 * i3, h0 + h1 * j3, F1(h0 + h1 * i3, h0 + h1 * j3), a1);
				ob[0].X = a1[0];
				ob[0].Y = a1[1];
				IJ(h0 + h1 * i3, h0 + h1 * (j3 + 1), F1(h0 + h1 * i3, h0 + h1 * (j3 + 1)), a1);
				ob[1].X = a1[0];
				ob[1].Y = a1[1];
				IJ(h0 + h1 * (i3 + 1), h0 + h1 * (j3 + 1), F1(h0 + h1 * (i3 + 1), h0 + h1 * (j3 + 1)), a1);
				ob[2].X = a1[0];
				ob[2].Y = a1[1];
				IJ(h0 + h1 * (i3 + 1), h0 + h1 * j3, F1(h0 + h1 * (i3 + 1), h0 + h1 * j3), a1);
				ob[3].X = a1[0];
				ob[3].Y = a1[1];
				e->Graphics->DrawPolygon(Pens::Yellow, ob);
			}
		}
	}
};
}