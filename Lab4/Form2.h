#pragma once

namespace Sapper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	protected:


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(440, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"—апер: правила и общие сведени€";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(437, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1. „исло в €чейке показывает, сколько мин ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label3->Location = System::Drawing::Point(8, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(476, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"поможет пон€ть вам, где наход€тс€ безопасные ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label4->Location = System::Drawing::Point(8, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(463, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2. ≈сли р€дом с открытой €чейкой есть пуста€ ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label5->Location = System::Drawing::Point(9, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(443, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3. ≈сли вы открыли €чейку с миной, то игра ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label6->Location = System::Drawing::Point(9, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(477, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"4. „тобы пометить €чейку, в которой находитс€ ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label7->Location = System::Drawing::Point(9, 335);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(448, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"5. »гра продолжаетс€ до тех пор, пока вы не ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label8->Location = System::Drawing::Point(9, 358);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(375, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"найдете все заминированные €чейки.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label9->Location = System::Drawing::Point(9, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(462, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"бомба, нажмите на нее правой кнопкой мыши.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label10->Location = System::Drawing::Point(9, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(122, 23);
			this->label10->TabIndex = 9;
			this->label10->Text = L"проиграна..";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label11->Location = System::Drawing::Point(9, 192);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(405, 23);
			this->label11->TabIndex = 10;
			this->label11->Text = L"€чейка, то она откроетс€ автоматически.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label12->Location = System::Drawing::Point(8, 90);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(416, 23);
			this->label12->TabIndex = 11;
			this->label12->Text = L"скрыто вокруг данной €чейки.  Ёто число ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->label13->Location = System::Drawing::Point(9, 136);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(314, 23);
			this->label13->TabIndex = 12;
			this->label13->Text = L"€чейки, а где наход€тс€ бомбы.";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(540, 418);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form2";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ѕравила";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}