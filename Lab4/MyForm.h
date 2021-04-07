#pragma once
#include "Form2.h"

namespace Sapper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	// конструктор
	public:
		MyForm(void)
		{
			InitializeComponent();
			// ¬ неотображаемые элементы массива, соответствующие
			// клеткам границы игрового пол€, запишем число -3.
			// Ёто значение используетс€ процедурой open()
			// дл€ завершени€ рекурсивного процесса открыти€
			// соседних пустых клеток
			for (int row = 0; row <= MR + 1; row++)
			{
				Pole[row, 0] = -3;
				Pole[row, MC + 1] = -3;
			}
			for (int col = 0; col <= MC + 1; col++)
			{
				Pole[0, col] = -3;
				Pole[MR + 1, col] = -3;
			}
			// устанавливаем размер формы в соответствии
			// с размером игрового пол€
			this->ClientSize = System::Drawing::Size(W*MC + 185,
				H*MR + menuStrip1->Height + 1);
			newGame(); // нова€ игра
			// графическа€ поверхность
			g = panel1->CreateGraphics();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  нова€»граToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  правилаToolStripMenuItem;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->нова€»граToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правилаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->нова€»граToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(591, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// нова€»граToolStripMenuItem
			// 
			this->нова€»граToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->нова€»граToolStripMenuItem->Name = L"нова€»граToolStripMenuItem";
			this->нова€»граToolStripMenuItem->Size = System::Drawing::Size(132, 27);
			this->нова€»граToolStripMenuItem->Text = L"Ќова€ игра";
			this->нова€»граToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::нова€»граToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->правилаToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(104, 27);
			this->справкаToolStripMenuItem->Text = L"—правка";
			// 
			// правилаToolStripMenuItem
			// 
			this->правилаToolStripMenuItem->Name = L"правилаToolStripMenuItem";
			this->правилаToolStripMenuItem->Size = System::Drawing::Size(171, 28);
			this->правилаToolStripMenuItem->Text = L"ѕравила";
			this->правилаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::правилаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(171, 28);
			this->выходToolStripMenuItem->Text = L"¬ыход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 417);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightPink;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(407, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(184, 417);
			this->panel2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 28);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::LightPink;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(137, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L" ќсталось:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L" ¬сего бомб:     10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 448);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"—апер";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		static int
			MR = 10, // количество клеток по вертикали
			MC = 10, // количество клеток по горизонтали
			NM = 10, // количество мин
			W = 40, // ширина клетки
			H = 40; // высота клетки
			// игровое (минное) поле
		static array<int, 2>^ Pole = gcnew array<int, 2>(MR + 2, MC + 2);
		// значение элемента массива:
		// 0..8 Ч количество мин в соседних клетках;
		// 9 Ч в клетке мина;
		// 100..109 Ч клетка открыта;
		// 200..209 Ч в клетку поставлен флаг
		int nMin; // количество найденных мин
		int nFlag; // количество поставленных флагов
		// статус игры
		int status;
		// 0 Ч начало игры,
		// 1 Ч игра,
		// 2 Ч результат
		// графическа€ поверхность формы
		System::Drawing::Graphics^ g;
		// нова€ игра
		void newGame() {
			int row, col; // индексы клетки
			int n = 0; // количество поставленных мин
			int k; // количество мин в соседних клетках
			// очистим поле
			for (row = 1; row <= MR; row++)
				for (col = 1; col <= MC; col++)
					Pole[row, col] = 0;
			label4->Text = "";
			label3->Text = "10";
			// генератор случайных чисел
			Random^ rnd = gcnew Random();
			// расставим мины
			do {
				row = rnd->Next(MR) + 1;
				col = rnd->Next(MC) + 1;
				if (Pole[row, col] != 9) {
					Pole[row, col] = 9;
					n++;
				}
			} while (n != NM);
			// дл€ каждой клетки вычислим количество
			// мин в соседних клетках
			for (row = 1; row <= MR; row++)
				for (col = 1; col <= MC; col++)
					if (Pole[row, col] != 9) {
						k = 0;
						if (Pole[row - 1, col - 1] == 9) k++;
						if (Pole[row - 1, col] == 9) k++;
						if (Pole[row - 1, col + 1] == 9) k++;
						if (Pole[row, col - 1] == 9) k++;
						if (Pole[row, col + 1] == 9) k++;
						if (Pole[row + 1, col - 1] == 9) k++;
						if (Pole[row + 1, col] == 9) k++;
						if (Pole[row + 1, col + 1] == 9) k++;
						Pole[row, col] = k;
					}
			status = 0; // начало игры
			nMin = 0; // нет обнаруженных мин
			nFlag = 0; // нет поставленных флагов
		}
		// рисует поле
		void showPole(Graphics^ g, int status) {
			for (int row = 1; row <= MR; row++)
				for (int col = 1; col <= MC; col++)
					this->Kletka(g, row, col, status);
		}
		// рисует клетку
		void Kletka(Graphics^ g, int row, int col, int status) {
			int x, y; // координаты левого верхнего угла клетки
			x = (col - 1) * W + 1;
			y = (row - 1)* H + 1;
			// неоткрытые клетки Ч черные
			if (Pole[row, col] < 100)
				g->FillRectangle(SystemBrushes::ActiveCaptionText, x - 1, y - 1, W, H);
			// открытые или помеченные клетки
			if (Pole[row, col] >= 100) {
				// открываем клетку, открытые Ч розовые
				if (Pole[row, col] != 109)
					g->FillRectangle(Brushes::LightPink, x - 1, y - 1, W, H);
				else
					// на этой мине подорвались!
					g->FillRectangle(Brushes::Red, x - 1, y - 1, W, H);
				// если в соседних клетках есть мины,
				// указываем их количество
				if ((Pole[row, col] >= 101) && (Pole[row, col] <= 108))
					g->DrawString((Pole[row, col] - 100).ToString(),
						gcnew System::Drawing::Font("Century", 14,
							System::Drawing::FontStyle::Regular),
						Brushes::Black, (float)x + 3, (float)y + 2);
			}
			// в клетке поставлен флаг
			if (Pole[row, col] >= 200)
				this->flag(g, x, y);
			// рисуем границу клетки
			g->DrawRectangle(Pens::White, x - 1, y - 1, W, H);
			// если игра завершена (status = 2),
			// показываем мины
			if ((status == 2) && ((Pole[row, col] % 10) == 9))
				this->mina(g, x, y);
		}
		// открывает текущую и все соседние с ней клетки, в которых нет мин
		void open(int row, int col) {
			// координаты области вывода
			int x = (col - 1)* W + 1,
				y = (row - 1)* H + 1;
			if (Pole[row, col] == 0) {
				Pole[row, col] = 100;
				// отобразить содержимое клетки
				this->Kletka(g, row, col, status);
				// открыть примыкающие клетки
				// слева, справа, сверху, снизу
				this->open(row, col - 1);
				this->open(row - 1, col);
				this->open(row, col + 1);
				this->open(row + 1, col);
				// примыкающие диагонально
				this->open(row - 1, col - 1);
				this->open(row - 1, col + 1);
				this->open(row + 1, col - 1);
				this->open(row + 1, col + 1);
			}
			else
				if ((Pole[row, col] < 100) && (Pole[row, col] != -3)) {
					Pole[row, col] += 100;
					// отобразить содержимое клетки
					this->Kletka(g, row, col, status);
				}
		}
		// рисует флаг
		void flag(Graphics^ g, int x, int y) {
			array<Point>^ p = gcnew array<Point>(3);
			array<Point>^ m = gcnew array<Point>(5);
			// флажок
			p[0].X = x + 4; p[0].Y = y + 4;
			p[1].X = x + 30; p[1].Y = y + 12;
			p[2].X = x + 4; p[2].Y = y + 20;
			g->FillPolygon(Brushes::Red, p);
			// древко
			g->DrawLine(Pens::Black, x + 4, y + 4, x + 4, y + 35);
			// буква M на флажке
			m[0].X = x + 8; m[0].Y = y + 14;
			m[1].X = x + 8; m[1].Y = y + 8;
			m[2].X = x + 10; m[2].Y = y + 10;
			m[3].X = x + 12; m[3].Y = y + 8;
			m[4].X = x + 12; m[4].Y = y + 14;
			g->DrawLines(Pens::White, m);
		}
		// рисует мину
		void mina(Graphics^ g, int x, int y) {
			// корпус
			g->FillRectangle(Brushes::Green, x + 16, y + 26, 8, 4);
			g->FillRectangle(Brushes::Green, x + 8, y + 30, 24, 4);
			g->DrawPie(Pens::Black, x + 6, y + 28, 28, 16, 0, -180);
			g->FillPie(Brushes::Green, x + 6, y + 28, 28, 16, 0, -180);
			// полоса на корпусе
			g->DrawLine(Pens::Black, x + 12, y + 32, x + 28, y + 32);
			// вертикальный "ус"
			g->DrawLine(Pens::Black, x + 20, y + 22, x + 20, y + 26);
			// боковые "усы"
			g->DrawLine(Pens::Black, x + 8, y + 30, x + 6, y + 28);
			g->DrawLine(Pens::Black, x + 32, y + 30, x + 34, y + 28);
		}
	// обработка событи€ Paint
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		showPole(g, status);
	}
	// щелчок в клетке игрового пол€
	private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (status == 2)
			// игра завершена
			return;
		if (status == 0)
			// первый щелчок
			status = 1;
		// преобразуем координаты мыши в индексы
		// клетки пол€, в которой был сделан щелчок;
		// (e.X, e.Y) Ч координаты точки формы,
		// в которой была нажата кнопка мыши
		int row, col;
		row = e->Y / H + 1;
		col = e->X / W + 1;
		// координаты области вывода
		int x = (col - 1)* W + 1,
			y = (row - 1)* H + 1;
		// щелчок левой кнопки мыши
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			// открыта клетка, в которой есть мина
			if (Pole[row, col] == 9) {
				Pole[row, col] += 100;
				// игра закончена
				status = 2;
				// перерисовать форму
				this->panel1->Invalidate();
				label4->Text = " ¬ы проиграли...";
			}
			else
				if (Pole[row, col] < 9)
					// открыть клетку
					this->open(row, col);
		}
		// щелчок правой кнопки мыши
		if (e->Button == System::Windows::Forms::MouseButtons::Right) {
			// в клетке нет флага, ставим его
			if (Pole[row, col] <= 9) {
				nFlag += 1;
				if (Pole[row, col] == 9)
					nMin += 1;
				Pole[row, col] += 200;
				label3->Text = Convert::ToString(NM - nFlag);
				if ((nMin == NM) && (nFlag == NM)) {
					// игра закончена
					status = 2;
					// перерисовываем все игровое поле
					this->panel1->Invalidate();
					label4->Text = " ѕобеда!";
				}
				else
					// перерисовываем только клетку
					this->Kletka(g, row, col, status);
			}
			else
				// в клетке был поставлен флаг,
				// повторный щелчок правой кнопки мыши
				// убирает его и закрывает клетку
				if (Pole[row, col] >= 200) {
					nFlag -= 1;
					Pole[row, col] -= 200;
					label3->Text = Convert::ToString(NM - nFlag);
					// перерисовываем клетку
					this->Kletka(g, row, col, status);
				}
		}
	}
	// команда Ќова€ игра
	private: System::Void нова€»граToolStripMenuItem_Click (System::Object^ sender, System::EventArgs^ e) {
		newGame();
		showPole(g, status);
	}
	// ¬ыбор в меню —правка команды ѕравила
	private: System::Void правилаToolStripMenuItem_Click (System::Object^ sender, System::EventArgs^ e) {
		Form2^ form = gcnew Form2();
		form->Show();
		//Help::ShowHelp
		//(this, helpProvider1->HelpNamespace, "Sapper.html");
	}
	private: System::Void выходToolStripMenuItem_Click (System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}