#pragma once
#pragma once
#include "MyForm.h"
#include <Windows.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(21, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(103, 20);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(143, 31);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(103, 20);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(268, 31);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 20);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(16, 31);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(103, 20);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(16, 124);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(103, 20);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(16, 216);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(103, 20);
			this->radioButton6->TabIndex = 7;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"radioButton6";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(16, 320);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(103, 20);
			this->radioButton7->TabIndex = 8;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"radioButton7";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton7_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(208, 230);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(422, 398);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(138, 113);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(415, 72);
			this->panel1->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->radioButton7);
			this->panel2->Controls->Add(this->radioButton6);
			this->panel2->Controls->Add(this->radioButton5);
			this->panel2->Controls->Add(this->radioButton4);
			this->panel2->Location = System::Drawing::Point(10, 274);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(161, 392);
			this->panel2->TabIndex = 11;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 708);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тут щось написано";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton6->Checked == true)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("33n.png");
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == true)
		{
			MyForm1::BackColor = Color::YellowGreen;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked == true)
		{
			MyForm1::BackColor = Color::Red;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked == true)
		{
			MyForm1::BackColor = Color::Yellow;
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton4->Checked == true)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("11n.png");
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		}
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton5->Checked == true)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("22n.png");
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		}
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton7->Checked == true)
		{
			pictureBox1->Image = System::Drawing::Bitmap::FromFile("44n.png");
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		}
	}
	private: System::Void MyForm1_FormClosing_1(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (System::Windows::Forms::MessageBox::Show
		("Закрити вікно?", "Вікно буде закрите",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::Yes)
		{
			Application::ExitThread();
		}
		else {
			e->Cancel = true;
		}
	}

	private: System::Void MyForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (System::Windows::Forms::MessageBox::Show("Закрити вікно?", "Вікно буде закрите",
			System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::Yes) {
			Application::ExitThread();
		}
		else {
			e->Cancel = true;
		}
	}
	
};
}