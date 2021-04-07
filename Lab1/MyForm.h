#pragma once
#include <array>
#include "MyForm2.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(20, 182);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(447, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сдвинуть элементы";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(146, 145);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(17, 145);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите k";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox2->Location = System::Drawing::Point(21, 53);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(446, 70);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 9);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(326, 27);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите элементы массива";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(194, 268);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(484, 310);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Массив";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int check_shift_position(int array_size, int k) {
			if (array_size < k)
				return k % array_size;
			return k;
		}
		array<int>^ shift_array(array<int>^ A, int e1, int m) {
			array<int>^ shifted_array = gcnew array<int>(e1);
			//m = Math::Abs(m);
			if (m >= 0) {
				// Сдвинуть элементы  [m + 1..n] в начало;
				for (int i = m, k = 0; i < e1; i++, k++)
					shifted_array[k] = A[i];
				// Сдвинуть элементы  [0..m] в конец;
				for (int i = 0, k = e1 - m; i < m; i++, k++)
					shifted_array[k] = A[i];
			}
			else {
				// Сдвинуть элементы  [m + 1..n] в начало;
				for (int i = e1 + m, k = 0; i < e1; i++, k++)
					shifted_array[k] = A[i];
				// Сдвинуть элементы  [0..m] в конец;
				for (int i = 0, k = -m; i < e1 + m; i++, k++)
					shifted_array[k] = A[i];
			}
			return shifted_array;
		}

	private:
		static array<int>^ A = gcnew array<int>(50);
		static int k = 0;
		static int e1 = 0;

	private: System::Void textBox2_KeyPress(System::Object^ sender, 
		System::Windows::Forms::KeyPressEventArgs^ e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8)
			|| (e->KeyChar == ' ') || (e->KeyChar == '-') || Char::IsControl(e->KeyChar)) return;
		//Остальные символы запрещены
		e->Handled = true;
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, 
		System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9') 
			|| (e->KeyChar == '-') || (e->KeyChar == 8)) return;
		//остальные символы запрещены
		e->Handled = true;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ form = gcnew MyForm2();
		array<String^>^ as;
		array<Char>^ ar;
		ar = gcnew array<Char>(1);
		ar[0] = ' ';
		if ((textBox2->Text->Length != 0) && (textBox1->Text->Length != 0)) {
			k = Convert::ToInt32(textBox1->Text);
			if (k > 0) form->label1->Text = "Циклический сдвиг вправо на " + k;
			else if (k < 0) form->label1->Text = "Циклический сдвиг влево на " + (-1 * k);
			else form->label1->Text = "Сдвига не было";
			e1 = 0;

			// Получение первого вектора из строки
			as = textBox2->Text->Split(ar);
			for (int i = 0; i < as->Length; i++) {
				A[i] = Convert::ToInt32(as[i]);
				e1++;
			}
			if (k < 0) k = check_shift_position(e1, Math::Abs(k));
			else {
				k = check_shift_position(e1, Math::Abs(k));
				k = (-k);
			}
			A = shift_array(A, e1, k);
			for (int i = 0; i < e1; i++)
				as[i] = Convert::ToString(A[i]);
			if (k == 0) {
				form->label2->Text = "Наш массив:\n";
				for (int i = 0; i < e1; i++)
					form->label2->Text = form->label2->Text + as[i] + " ";
			}
			else {
				form->label2->Text = "Новый массив:\n";
				for (int i = 0; i < e1; i++)
					form->label2->Text = form->label2->Text + as[i] + " ";
			}
			form->Show();
		}
		else
			MessageBox::Show("Вы ввели не все данные!\n",
				"Массив",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}