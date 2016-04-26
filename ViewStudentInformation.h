#pragma once

namespace endsemesterproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewStudentInformation
	/// </summary>
	public ref class ViewStudentInformation : public System::Windows::Forms::Form
	{
	public:
		ViewStudentInformation(void)
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
		~ViewStudentInformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox5;
	protected:
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  Attendance_GroupBox;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  TestName_ComboBox;
	private: System::Windows::Forms::Label^  CourseName_Label;
	private: System::Windows::Forms::Label^  StudentName_Label;
	private: System::Windows::Forms::Label^  StudentID_Label;
	private: System::Windows::Forms::Label^  SerialNo_Label;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::VScrollBar^  vScrollBar1;

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
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Attendance_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TestName_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CourseName_Label = (gcnew System::Windows::Forms::Label());
			this->StudentName_Label = (gcnew System::Windows::Forms::Label());
			this->StudentID_Label = (gcnew System::Windows::Forms::Label());
			this->SerialNo_Label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->Attendance_GroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(425, 225);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(88, 21);
			this->comboBox5->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(314, 230);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 16);
			this->label14->TabIndex = 39;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(167, 230);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(125, 16);
			this->label15->TabIndex = 38;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(97, 230);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 16);
			this->label16->TabIndex = 37;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(30, 230);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 16);
			this->label17->TabIndex = 36;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(425, 186);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(88, 21);
			this->comboBox3->TabIndex = 35;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(314, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 16);
			this->label6->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(167, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 16);
			this->label7->TabIndex = 33;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(97, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 16);
			this->label8->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(30, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 16);
			this->label9->TabIndex = 31;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(426, 147);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(88, 21);
			this->comboBox2->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(315, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(168, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 16);
			this->label4->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(98, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 16);
			this->label3->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 26;
			// 
			// Attendance_GroupBox
			// 
			this->Attendance_GroupBox->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->Attendance_GroupBox->Controls->Add(this->label10);
			this->Attendance_GroupBox->Controls->Add(this->dateTimePicker1);
			this->Attendance_GroupBox->Controls->Add(this->TestName_ComboBox);
			this->Attendance_GroupBox->Controls->Add(this->CourseName_Label);
			this->Attendance_GroupBox->Controls->Add(this->StudentName_Label);
			this->Attendance_GroupBox->Controls->Add(this->StudentID_Label);
			this->Attendance_GroupBox->Controls->Add(this->SerialNo_Label);
			this->Attendance_GroupBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Attendance_GroupBox->Location = System::Drawing::Point(30, 45);
			this->Attendance_GroupBox->Name = L"Attendance_GroupBox";
			this->Attendance_GroupBox->Size = System::Drawing::Size(729, 79);
			this->Attendance_GroupBox->TabIndex = 25;
			this->Attendance_GroupBox->TabStop = false;
			this->Attendance_GroupBox->Text = L"groupBox1";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(501, 9);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(222, 26);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// TestName_ComboBox
			// 
			this->TestName_ComboBox->FormattingEnabled = true;
			this->TestName_ComboBox->Location = System::Drawing::Point(395, 43);
			this->TestName_ComboBox->Name = L"TestName_ComboBox";
			this->TestName_ComboBox->Size = System::Drawing::Size(88, 28);
			this->TestName_ComboBox->TabIndex = 4;
			// 
			// CourseName_Label
			// 
			this->CourseName_Label->AutoSize = true;
			this->CourseName_Label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CourseName_Label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseName_Label->Location = System::Drawing::Point(271, 48);
			this->CourseName_Label->Name = L"CourseName_Label";
			this->CourseName_Label->Size = System::Drawing::Size(87, 16);
			this->CourseName_Label->TabIndex = 3;
			this->CourseName_Label->Text = L"Course Name";
			// 
			// StudentName_Label
			// 
			this->StudentName_Label->AutoSize = true;
			this->StudentName_Label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->StudentName_Label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentName_Label->Location = System::Drawing::Point(157, 48);
			this->StudentName_Label->Name = L"StudentName_Label";
			this->StudentName_Label->Size = System::Drawing::Size(91, 16);
			this->StudentName_Label->TabIndex = 2;
			this->StudentName_Label->Text = L"Student Name";
			// 
			// StudentID_Label
			// 
			this->StudentID_Label->AutoSize = true;
			this->StudentID_Label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->StudentID_Label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StudentID_Label->Location = System::Drawing::Point(64, 48);
			this->StudentID_Label->Name = L"StudentID_Label";
			this->StudentID_Label->Size = System::Drawing::Size(73, 16);
			this->StudentID_Label->TabIndex = 1;
			this->StudentID_Label->Text = L"Student ID.";
			// 
			// SerialNo_Label
			// 
			this->SerialNo_Label->AutoSize = true;
			this->SerialNo_Label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SerialNo_Label->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SerialNo_Label->Location = System::Drawing::Point(6, 48);
			this->SerialNo_Label->Name = L"SerialNo_Label";
			this->SerialNo_Label->Size = System::Drawing::Size(52, 16);
			this->SerialNo_Label->TabIndex = 0;
			this->SerialNo_Label->Text = L"Serial #";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(281, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Student Information";
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(2, 486);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(786, 16);
			this->hScrollBar1->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(558, 48);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 16);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Total";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(582, 152);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 16);
			this->label11->TabIndex = 42;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(582, 191);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 16);
			this->label12->TabIndex = 43;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(582, 230);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 16);
			this->label13->TabIndex = 44;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(582, 349);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 16);
			this->label18->TabIndex = 62;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(582, 310);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 16);
			this->label19->TabIndex = 61;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(582, 271);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 16);
			this->label20->TabIndex = 60;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(425, 344);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(88, 21);
			this->comboBox1->TabIndex = 59;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(314, 349);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 16);
			this->label21->TabIndex = 58;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(167, 349);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(125, 16);
			this->label22->TabIndex = 57;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(97, 349);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(52, 16);
			this->label23->TabIndex = 56;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(30, 349);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(52, 16);
			this->label24->TabIndex = 55;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(425, 305);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(88, 21);
			this->comboBox4->TabIndex = 54;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(314, 310);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(52, 16);
			this->label25->TabIndex = 53;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(167, 310);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(125, 16);
			this->label26->TabIndex = 52;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(97, 310);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(52, 16);
			this->label27->TabIndex = 51;
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(30, 310);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 16);
			this->label28->TabIndex = 50;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(426, 266);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(88, 21);
			this->comboBox6->TabIndex = 49;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(315, 271);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(52, 16);
			this->label29->TabIndex = 48;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(168, 271);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(125, 16);
			this->label30->TabIndex = 47;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(98, 271);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(52, 16);
			this->label31->TabIndex = 46;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(31, 271);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(52, 16);
			this->label32->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label33->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(581, 467);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(52, 16);
			this->label33->TabIndex = 80;
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label34->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(581, 428);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(52, 16);
			this->label34->TabIndex = 79;
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label35->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(581, 389);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(52, 16);
			this->label35->TabIndex = 78;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(424, 462);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(88, 21);
			this->comboBox7->TabIndex = 77;
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label36->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(313, 467);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 16);
			this->label36->TabIndex = 76;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(166, 467);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(125, 16);
			this->label37->TabIndex = 75;
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label38->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(96, 467);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(52, 16);
			this->label38->TabIndex = 74;
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label39->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(29, 467);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(52, 16);
			this->label39->TabIndex = 73;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(424, 423);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(88, 21);
			this->comboBox8->TabIndex = 72;
			// 
			// label40
			// 
			this->label40->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label40->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(313, 428);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(52, 16);
			this->label40->TabIndex = 71;
			// 
			// label41
			// 
			this->label41->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label41->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(166, 428);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(125, 16);
			this->label41->TabIndex = 70;
			// 
			// label42
			// 
			this->label42->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label42->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(96, 428);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(52, 16);
			this->label42->TabIndex = 69;
			// 
			// label43
			// 
			this->label43->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label43->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(29, 428);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(52, 16);
			this->label43->TabIndex = 68;
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(425, 384);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(88, 21);
			this->comboBox9->TabIndex = 67;
			// 
			// label44
			// 
			this->label44->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label44->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(314, 389);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(52, 16);
			this->label44->TabIndex = 66;
			// 
			// label45
			// 
			this->label45->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label45->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(167, 389);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(125, 16);
			this->label45->TabIndex = 65;
			// 
			// label46
			// 
			this->label46->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label46->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(97, 389);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(52, 16);
			this->label46->TabIndex = 64;
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label47->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(30, 389);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(52, 16);
			this->label47->TabIndex = 63;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(770, 45);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(17, 438);
			this->vScrollBar1->TabIndex = 81;
			// 
			// ViewStudentInformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 511);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Attendance_GroupBox);
			this->Controls->Add(this->label1);
			this->Name = L"ViewStudentInformation";
			this->Text = L"ViewStudentInformation";
			this->Load += gcnew System::EventHandler(this, &ViewStudentInformation::ViewStudentInformation_Load);
			this->Attendance_GroupBox->ResumeLayout(false);
			this->Attendance_GroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewStudentInformation_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
