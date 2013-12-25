#pragma once

#include "core.h"

namespace SalaryStructureDesktopApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		bool isAmountTypeClicked; //To ensure Amount Type is choosen.
		bool isCalculateViaTypeClicked; //To ensure Grade Type is choosen.
		bool isGradeTypeClicked; //To ensure Calculation Type is choosen.
		short calculateViaType; //Choose the calculation type. Either via Gross or CTC or Net Pay
		short gradeType; //Choose the grade type. Either Grade One or Grade Two or Grade Three Employee
		bool isMonthlyOrYearly; //Choose Amount type. Either Monthly(true) or Yearly(false).
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Amount Type:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(6, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Monthly";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(81, 12);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Yearly";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Grade Type:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(6, 12);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(86, 17);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Grade One";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(98, 12);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(87, 17);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Grade Two";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(191, 12);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(96, 17);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Grade Three";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 174);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Calculation Type:";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(6, 10);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(57, 17);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Gross";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(69, 10);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(49, 17);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"CTC";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(124, 10);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(70, 17);
			this->radioButton8->TabIndex = 14;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Net Pay";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(105, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Generate Component";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(386, 254);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Aditya Birla Salary Structure Component";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Location = System::Drawing::Point(118, 165);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(195, 34);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox3->Location = System::Drawing::Point(89, 123);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(290, 36);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Location = System::Drawing::Point(97, 81);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(149, 36);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 278);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Salary Structure Application";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isAmountTypeClicked = true;
			 isMonthlyOrYearly = true;
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isAmountTypeClicked = true;
			 isMonthlyOrYearly = false;
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isGradeTypeClicked = true;
			 gradeType = GRADE_ONE;
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isGradeTypeClicked = true;
			 gradeType = GRADE_TWO;
		 }
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isGradeTypeClicked = true;
			 gradeType = GRADE_THREE;
		 }
private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isCalculateViaTypeClicked = true;
			 calculateViaType = CALCULATE_VIA_GROSS;
		 }
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isCalculateViaTypeClicked = true;
			 calculateViaType = CALCULATE_VIA_CTC;
		 }
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 isCalculateViaTypeClicked = true;
			 calculateViaType = CALCULATE_VIA_NETPAY;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(isAmountTypeClicked && isGradeTypeClicked && isCalculateViaTypeClicked){
				 if(calculateViaType == CALCULATE_VIA_GROSS || calculateViaType == CALCULATE_VIA_CTC){
					 char *execName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer());
   					 UDT execAmount = (UDT)Int32::Parse(textBox2->Text);
					 EMPINPUTDETAILS empInputDetails(execName,execAmount,calculateViaType,gradeType,isMonthlyOrYearly);
					 CSalaryCore *coreObj = new CSalaryCore(&empInputDetails);
					 coreObj->doStructuringOfSalary();
					 coreObj->printSalaryComponent();
					 delete coreObj;
					 MessageBox::Show(L"The salary structure is done.",L"Salary Structure", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				 }
				 else{
					 MessageBox::Show(L"Currently the calculation is done only via Gross or CTC. Please choose only Gross or CTC component.",L"Salary Structure", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
				 }
			 }
			 else{
				 MessageBox::Show(L"Please ensure all the radio buttons are choosen and then only proceed.",L"Salary Structure", MessageBoxButtons::OKCancel,MessageBoxIcon::Asterisk);
			 }
			 textBox1->Text = L"";
			 textBox2->Text = L"";
			 isAmountTypeClicked = false; //To ensure Amount Type is choosen.
			 radioButton1->Checked = false; //Amount Type - Monthly
			 radioButton2->Checked = false; //Amount Type - Yearly
			 isGradeTypeClicked = false; //To ensure Grade Type is choosen.
			 radioButton3->Checked = false; //Grade Type - 1, MRI - 1250/-
			 radioButton4->Checked = false; //Grade Type - 2, MRI - 800/-
			 radioButton5->Checked = false; //Grade Type - 3, MRI - 500/-
			 isCalculateViaTypeClicked = false; //To ensure Calculation Type is choosen.
			 radioButton6->Checked = false; //Calculation Type - Gross
			 radioButton7->Checked = false; //Calculation Type - CTC
			 radioButton8->Checked = false; //Calculation Type - Net Pay
		 }
};
}

