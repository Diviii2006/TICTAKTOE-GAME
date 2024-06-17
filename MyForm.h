#pragma once

namespace TICTAKTOEGAME {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	protected:

	protected:



















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1344, 110);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(14, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(711, 91);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Tik Tac Toe Game";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 128);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1344, 601);
			this->panel2->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Location = System::Drawing::Point(660, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(664, 591);
			this->panel4->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(343, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(255, 91);
			this->label4->TabIndex = 1;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(283, 72);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(343, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 91);
			this->label3->TabIndex = 1;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 72);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Player X";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(13, 301);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(633, 122);
			this->button12->TabIndex = 0;
			this->button12->Text = L"New Game";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(13, 429);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(633, 129);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(651, 591);
			this->panel3->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(414, 363);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(215, 178);
			this->button9->TabIndex = 0;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(414, 182);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(215, 178);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(414, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(215, 178);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(198, 363);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(215, 178);
			this->button8->TabIndex = 0;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(-18, 363);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(215, 178);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(198, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(215, 178);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(-18, 182);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(215, 178);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(198, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 178);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 96, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(-18, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 178);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Tik Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma region correct this code:
		Boolean checker;
		int plusone;
#pragma endregion
		void storeresult()
		{

		}
		void Enable_False()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}
		void score()
		{
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();

			}
			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
			{
				button2->BackColor = System::Drawing::Color::Pink;
				button5->BackColor = System::Drawing::Color::Pink;
				button8->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text); // Assigning a value to the variable

				//plusone = int::Parse(label4->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::Pink;
				button6->BackColor = System::Drawing::Color::Pink;
				button9->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text); // Assigning a value to the variable

				//plusone = int::Parse(label4->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}

			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
			{
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
			{
				button7->BackColor = System::Drawing::Color::PowderBlue;
				button8->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label3->Text);
				//plusons = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Pink;
				button2->BackColor = System::Drawing::Color::Pink;
				button3->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text);
				//plusons = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Pink;
				button4->BackColor = System::Drawing::Color::Pink;
				button7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text);
				//plusons = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Pink;
				button5->BackColor = System::Drawing::Color::Pink;
				button9->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text);
				//plusons = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}

			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
			{
				button4->BackColor = System::Drawing::Color::Pink;
				button5->BackColor = System::Drawing::Color::Pink;
				button6->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text);
				//plusons = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
			{
				button7->BackColor = System::Drawing::Color::Pink;
				button8->BackColor = System::Drawing::Color::Pink;
				button9->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text);
				//plusons = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Pink;
				button5->BackColor = System::Drawing::Color::Pink;
				button7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text); // Assigning a value to the variable

				//plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);

				//Enable_False();
			}
			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
			{
				button2->BackColor = System::Drawing::Color::Pink;
				button5->BackColor = System::Drawing::Color::Pink;
				button8->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text); // Assigning a value to the variable

				//plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				//Enable_False();
			}
			if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Pink;
				button6->BackColor = System::Drawing::Color::Pink;
				button9->BackColor = System::Drawing::Color::Pink;
				String^ pl = "Player O";
				MessageBox::Show("The Winner is'" + pl + "'", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				int plusone; // Declaration of the variable
				plusone = int::Parse(label4->Text); // Assigning a value to the variable
				//plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);

				//Enable_False();
			}

		};
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button1->Text = "X";
			checker = true;
		}
		else
		{
			button1->Text = "O";
			checker = false;
		}
		score();
		//button1->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button2->Text = "X";
			checker = true;
		}
		else
		{
			button2->Text = "O";
			checker = false;
		}
		score();
		//button2->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button3->Text = "X";
			checker = true;
		}
		else
		{
			button3->Text = "O";
			checker = false;
		}
		score();
		//button3->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button4->Text = "X";
			checker = true;
		}
		else
		{
			button4->Text = "O";
			checker = false;
		}
		score();
		//button4->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button5->Text = "X";
			checker = true;
		}
		else
		{
			button5->Text = "O";
			checker = false;
		}
		score();
		//button5->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button6->Text = "X";
			checker = true;
		}
		else
		{
			button6->Text = "O";

			checker = false;
		}
		score();
		//button6->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button7->Text = "X";
			checker = true;
		}
		else
		{
			button7->Text = "O";
			checker = false;
		}
		score();
		//button7->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button8->Text = "X";
			checker = true;
		}
		else
		{
			button8->Text = "O";
			checker = false;
		}
		score();
		//button8->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false)
		{
			button9->Text = "X";
			checker = true;
		}
		else
		{
			button9->Text = "O";
			checker = false;
		}
		score();
		//button9->Enabled = false;
		void score();
		{
			// Winning conditions

			// (Previous winning conditions code...)

			// Check for a tie
			if (button1->Text != "" && button2->Text != "" && button3->Text != "" &&
				button4->Text != "" && button5->Text != "" && button6->Text != "" &&
				button7->Text != "" && button8->Text != "" && button9->Text != "")
			{
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;

		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";
		button12->Enabled = true;

		button1->BackColor = System::Drawing::Color::WhiteSmoke;
		button2->BackColor = System::Drawing::Color::WhiteSmoke;
		button3->BackColor = System::Drawing::Color::WhiteSmoke;
		button4->BackColor = System::Drawing::Color::WhiteSmoke;
		button5->BackColor = System::Drawing::Color::WhiteSmoke;
		button6->BackColor = System::Drawing::Color::WhiteSmoke;
		button7->BackColor = System::Drawing::Color::WhiteSmoke;
		button8->BackColor = System::Drawing::Color::WhiteSmoke;
		button9->BackColor = System::Drawing::Color::WhiteSmoke;
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	label3->Text = "0";
	label4->Text = "0";


	button1->BackColor = System::Drawing::Color::WhiteSmoke;
	button2->BackColor = System::Drawing::Color::WhiteSmoke;
	button3->BackColor = System::Drawing::Color::WhiteSmoke;
	button4->BackColor = System::Drawing::Color::WhiteSmoke;
	button5->BackColor = System::Drawing::Color::WhiteSmoke;
	button6->BackColor = System::Drawing::Color::WhiteSmoke;
	button7->BackColor = System::Drawing::Color::WhiteSmoke;
	button8->BackColor = System::Drawing::Color::WhiteSmoke;
	button9->BackColor = System::Drawing::Color::WhiteSmoke;
}


	   // C++ code for checking if the tic tac toe game is tied
	   

	   // Method to handle button click event


};
}