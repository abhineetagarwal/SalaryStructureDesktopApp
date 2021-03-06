#pragma once

#include "core.h"

namespace SalaryStructureDesktopApp {

	using namespace System;
	using namespace System::IO;
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
		bool isMonthlyOrYearly; //Choose Amount type. Either Monthly(true) or Yearly(false).
		bool isAmountTypeClicked; //To ensure Amount Type is choosen.
		bool isCalculateViaTypeClicked; //To ensure Grade Type is choosen.
		bool isGradeTypeClicked; //To ensure Calculation Type is choosen.
		short calculateViaType; //Choose the calculation type. Either via Gross or CTC or Net Pay
		short gradeType; //Choose the grade type. Either Grade One or Grade Two or Grade Three Employee
	
	private: System::ComponentModel::Container ^components;	/// <summary>/// Required designer variable./// </summary>
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
    private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::TextBox^  textBox1;	
	private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;	
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;    
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>/// Clean up any resources being used.	/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
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
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(55, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Amount Type:";
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
			this->label4->Location = System::Drawing::Point(6, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Grade Type:";
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
			this->radioButton4->Location = System::Drawing::Point(6, 35);
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
			this->radioButton5->Location = System::Drawing::Point(6, 58);
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
			this->label5->Location = System::Drawing::Point(6, 227);
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
			this->button1->Location = System::Drawing::Point(39, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Generate Component";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button2);
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
			this->groupBox1->Location = System::Drawing::Point(5, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(408, 296);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Aditya Birla Salary Structure Component";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label6->Location = System::Drawing::Point(277, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 12);
			this->label6->TabIndex = 20;
			this->label6->Text = L"[Enter Non-Decimal Numbers]";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(227, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Open File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Location = System::Drawing::Point(118, 215);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(195, 34);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox3->Location = System::Drawing::Point(89, 123);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 85);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label9->Location = System::Drawing::Point(105, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 12);
			this->label9->TabIndex = 13;
			this->label9->Text = L"- Assistant Supervisor, Supervisor";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label8->Location = System::Drawing::Point(95, 37);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(126, 12);
			this->label8->TabIndex = 12;
			this->label8->Text = L"- Junior Executive, Executive";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label7->Location = System::Drawing::Point(95, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 12);
			this->label7->TabIndex = 11;
			this->label7->Text = L"- Senior Executive, Assistant Manager";
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
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 306);
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
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text,"[^0-9]")){
				textBox2->Text->Remove(textBox2->Text->Length - 1);
				textBox2->Text = L"";
			 }
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {			
			 Stream^ myStream;
			 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 if((myStream = openFileDialog1->OpenFile()) != nullptr)
				 {
					 String^ myFileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
					 //MessageBox::Show(myFileName);
					 System::Diagnostics::Process::Start(myFileName);
					 myStream->Close();
				 }
			 }		 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {	
			 if((textBox1->Text != "") && (textBox2->Text != "") && isAmountTypeClicked && isGradeTypeClicked && isCalculateViaTypeClicked)
			 {	
				 //The name of the employee whose salary structure need to be created				 
				 char * execName = static_cast<char*>(Marshal::StringToHGlobalAnsi(textBox1->Text).ToPointer());			 
			 
				//The amount for which salary structure need to be done.
				UDT execAmount = (UDT)Int32::Parse(textBox2->Text);	

				if(doUIStuff(execAmount)){
					createSalaryComponent(execName,execAmount);
					MessageBox::Show(L"The salary structure is done.",L"Salary Structure", MessageBoxButtons::OK,MessageBoxIcon::Information);
				}
			 }
			 else
			 {
				 MessageBox::Show(L"Please fill all the items and ensure all the radio buttons are choosen and then only proceed.",L"Salary Structure - Incomplete Data", MessageBoxButtons::OK,MessageBoxIcon::Error);
			 }
			 resetUIData();
		 }
private: System::Boolean doUIStuff(UDT execAmount){	 
			 if(calculateViaType == CALCULATE_VIA_GROSS || calculateViaType == CALCULATE_VIA_CTC)
			 {
				 if((execAmount < CTC_LIMIT_GRADE_ONE && execAmount > CTC_LIMIT_ANY_GRADE) && (gradeType == GRADE_ONE) && (calculateViaType == CALCULATE_VIA_CTC))
				 {
					MessageBox::Show(L"For Grade One Employee, CTC should be greater than  or equal to 17,610/-. If you want to calculate on ESI basis, enter the amount less than or equal to 17,071/-",L"Salary Structure - Invalid CTC", MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }
				 else if((execAmount < CTC_LIMIT_GRADE_TWO && execAmount > CTC_LIMIT_ANY_GRADE) && (gradeType == GRADE_TWO) && (calculateViaType == CALCULATE_VIA_CTC))
				 {
					MessageBox::Show(L"For Grade Two Employee, CTC should be greater than or equal to 17,160/-. If you want to calculate on ESI basis, enter the amount less than or equal to 17,071/-",L"Salary Structure - Invalid CTC", MessageBoxButtons::OK,MessageBoxIcon::Error);
				 }
				 else
				 {
					 if((execAmount <= CTC_LIMIT_ANY_GRADE) && (gradeType == GRADE_ONE) && (calculateViaType == CALCULATE_VIA_CTC))
					 {
						MessageBox::Show(L"For Grade One Employee, CTC should be greater than  or equal to 17,610/-. But the entered amount is less than or equal to 17,071/-. Hence calculation will be done on ESI basis.",L"Salary Structure On ESI Basis", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
					 else if((execAmount <= CTC_LIMIT_ANY_GRADE) && (gradeType == GRADE_TWO) && (calculateViaType == CALCULATE_VIA_CTC))
					 {
						MessageBox::Show(L"For Grade Two Employee, CTC should be greater than  or equal to 17,160/-. But the entered amount is less than or equal to 17,071/-. Hence calculation will be done on ESI basis.",L"Salary Structure On ESI Basis", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
					 else if((execAmount < CTC_LIMIT_GRADE_THREE) && (gradeType == GRADE_THREE) && (calculateViaType == CALCULATE_VIA_CTC))
					 {
						MessageBox::Show(L"For Grade Three Employee, CTC should be greater than or equal to 16,860/-. But the entered amount is less than 16,860/-. Hence calculation will be done on ESI basis.",L"Salary Structure On ESI Basis", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
					 return true;//returns success only if the execAmount is valid in any one cases.
				 }
			 }
			 else
			 {
				 MessageBox::Show(L"Currently the calculation is done only via Gross or CTC. Please choose only Gross or CTC component.",L"Salary Structure", MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
			 return false;
		 }
private: System::Void createSalaryComponent(char* execName, UDT execAmount){
			 EMPINPUTDETAILS empInputDetails(execName,execAmount,calculateViaType,gradeType,isMonthlyOrYearly);
			 CSalaryCore *coreObj = new CSalaryCore(&empInputDetails);
			 coreObj->doStructuringOfSalary();
			 coreObj->printSalaryComponent();
			 delete coreObj;
		 }
private: System::Void resetUIData(){
			 textBox1->Text = L""; //Executive Name
			 textBox2->Text = L""; //Executive Amount
			 
			 radioButton1->Checked = false; //Amount Type - Monthly
			 radioButton2->Checked = false; //Amount Type - Yearly
			 
			 radioButton3->Checked = false; //Grade Type - 1, MRI - 1250/-
			 radioButton4->Checked = false; //Grade Type - 2, MRI - 800/-
			 radioButton5->Checked = false; //Grade Type - 3, MRI - 500/-
			 
			 radioButton6->Checked = false; //Calculation Type - Gross
			 radioButton7->Checked = false; //Calculation Type - CTC
			 radioButton8->Checked = false; //Calculation Type - Net Pay
			 
			 //Resetting the check button.
			 isAmountTypeClicked = false; //To ensure Amount Type is choosen.
			 isGradeTypeClicked = false; //To ensure Grade Type is choosen.
			 isCalculateViaTypeClicked = false; //To ensure Calculation Type is choosen.
		 }
};
}

