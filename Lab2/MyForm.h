#pragma once

using namespace std;
namespace Matrix {

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
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(842, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->очиститьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->файлToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(67, 25);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFile_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFile_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как...";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFileAs_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->BackColor = System::Drawing::Color::White;
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(223, 26);
			this->очиститьToolStripMenuItem->Text = L"Очистить";
			this->очиститьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(17, 97);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 250);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(17, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Переставить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(361, 28);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите элементы матрицы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 359);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите индекс элемента";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox3->Location = System::Drawing::Point(375, 360);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 28);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(473, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(583, 28);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Результат перестановки:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 401);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(571, 28);
			this->label5->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(478, 97);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 250);
			this->textBox2->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(842, 500);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Матрица";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFile_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			fn = openFileDialog1->FileName;
			Text = fn;
			try {
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);
				textBox1->Text = sr->ReadToEnd();
				sr->Close();
			}
			catch (System::IO::FileLoadException ^ e) {
				MessageBox::Show("Ошибка ввода:\n" + e->Message,
					"Матрица",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void saveFile_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fn;
		fn = Text;
		if (fn == "Untitled") {
			saveFileAs_Click(sender, e);
			return;
		}
		try {
			System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn);
			System::IO::StreamWriter^ sw = fi->CreateText();
			sw->Write(textBox2->Text);
			sw->Close();
		}
		catch (System::IO::IOException ^ e) {
			MessageBox::Show(e->ToString(),
				"Матрица",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void saveFileAs_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		String^ fn;
		dr = saveFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			fn = saveFileDialog1->FileName;
			Text = fn;
			try {
				System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn);
				System::IO::StreamWriter^ sw = fi->CreateText();
				sw->Write(textBox2->Text);
				sw->Close();
			}
			catch (System::IO::IOException ^ e) {
				MessageBox::Show(e->ToString(),
					"Vectors",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		label5->Text = "";
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender,
		System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8)
			|| (e->KeyChar == ' ') || (e->KeyChar == '-') || Char::IsControl(e->KeyChar))
			return;
		//остальные символы запрещены
		e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender,
		System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')
			|| (e->KeyChar == '-') || (e->KeyChar == 8)) return;
		//Остальные символы запрещены
		e->Handled = true;
	}
	public:
		void Swap(array<int, 2>^& matrix, int minrow, int minculm, int ourrow, int ourculmn) {
			int bufrow, bufculm;
			for (int i = 0; i < textBox1->Lines[0]->Split(' ')->Length; i++) {
				bufrow = matrix[minrow, i];
				matrix[minrow, i] = matrix[ourrow, i];
				matrix[ourrow, i] = bufrow;
			}
			for (int i = 0; i < textBox1->Lines->Length; i++) {
				bufculm = matrix[i, minculm];
				matrix[i, minculm] = matrix[i, ourculmn];
				matrix[i, ourculmn] = bufculm;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0 || textBox3->Text->Length < 3)
			MessageBox::Show("Вы ввели не все данные!\n",
				"Матрица",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		else if (textBox3->Lines[0]->Split(' ')->Length > 2)
			MessageBox::Show("Неверные данные!\nИндекс элемента должен состоять из 2 чисел.\n",
				"Матрица",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		else {
			String^s = "";
			array<String^>^ as;
			array<String^>^ ass;
			array<Char>^ ar = gcnew array<Char>(1);
			ar[0] = ' ';
			int n, m;
			n = textBox1->Lines->Length;
			for (int i = 1; i < n; i++)
				if (textBox1->Lines[i]->Split(ar)->Length != textBox1->Lines[i - 1]->Split(ar)->Length) {
					MessageBox::Show("Неверные данные!\nКаждая строка матрицы должна содержать одинаковое количество элементов.\n",
						"Матрица",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}
			m = textBox1->Lines[0]->Split(ar)->Length;
			array<int, 2>^ M = gcnew array<int, 2>(n, m);
			for (int i = 0; i < n; i++) {
				as = textBox1->Lines[i]->Split(ar);
				for (int j = 0; j < m; j++)
					M[i, j] = Convert::ToInt32(as[j]);
			}
			int imin = 0, jmin = 0, min = M[0, 0];
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++)
					if (M[i, j] < min) {
						min = M[i, j];
						imin = i;
						jmin = j;
					}
			int iour, jour;
			ass = textBox3->Text->Split(ar);
			iour = Convert::ToInt32(ass[0]) - 1;
			jour = Convert::ToInt32(ass[1]) - 1;
			if (iour >= n || iour < 0 || jour >= m || jour < 0) {
				MessageBox::Show("Неверные данные!\nВ исходной матрице нет элемента с таким индексом.\n",
					"Матрица",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				return;
			}
			Swap(M, imin, jmin, iour, jour);
			label5->Text = "Индекс минимального элемента: [" + (imin + 1) + "][" + (jmin + 1) + "]";
			textBox2->Text = "";
			as = gcnew array<String^>(n);
			for (int i = 0; i < n; i++) {
				s = "";
				for (int j = 0; j < m; j++)
					s += M[i, j].ToString() + " ";
				as[i] = s;
			}
			textBox2->Lines = as;
		}
	}
};
}
