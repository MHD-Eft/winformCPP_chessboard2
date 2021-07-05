#pragma once

namespace winformCPPchessboard2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chessBoardForm
	/// </summary>
	public ref class chessBoardForm : public System::Windows::Forms::Form
	{
	public:
		chessBoardForm(void)
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
		~chessBoardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ P81;
	private: System::Windows::Forms::Label^ P82;
	private: System::Windows::Forms::Label^ P83;
	private: System::Windows::Forms::Label^ P84;
	private: System::Windows::Forms::Label^ P85;
	private: System::Windows::Forms::Label^ P86;
	private: System::Windows::Forms::Label^ P87;
	private: System::Windows::Forms::Label^ P88;
	private: System::Windows::Forms::Label^ P71;
	private: System::Windows::Forms::Label^ P72;
	private: System::Windows::Forms::Label^ P73;
	private: System::Windows::Forms::Label^ P74;
	private: System::Windows::Forms::Label^ P75;
	private: System::Windows::Forms::Label^ P76;
	private: System::Windows::Forms::Label^ P77;
	private: System::Windows::Forms::Label^ P78;
	private: System::Windows::Forms::Label^ P61;
	private: System::Windows::Forms::Label^ P62;
	private: System::Windows::Forms::Label^ P63;
	private: System::Windows::Forms::Label^ P64;
	private: System::Windows::Forms::Label^ P65;
	private: System::Windows::Forms::Label^ P66;
	private: System::Windows::Forms::Label^ P67;
	private: System::Windows::Forms::Label^ P68;
	private: System::Windows::Forms::Label^ P51;
	private: System::Windows::Forms::Label^ P52;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ P41;
	private: System::Windows::Forms::Label^ P42;
	private: System::Windows::Forms::Label^ P43;
	private: System::Windows::Forms::Label^ P44;
	private: System::Windows::Forms::Label^ P45;
	private: System::Windows::Forms::Label^ P46;
	private: System::Windows::Forms::Label^ P47;
	private: System::Windows::Forms::Label^ P48;
	private: System::Windows::Forms::Label^ P31;
	private: System::Windows::Forms::Label^ P32;
	private: System::Windows::Forms::Label^ P33;
	private: System::Windows::Forms::Label^ P34;
	private: System::Windows::Forms::Label^ P35;
	private: System::Windows::Forms::Label^ P36;
	private: System::Windows::Forms::Label^ P37;
	private: System::Windows::Forms::Label^ P38;
	private: System::Windows::Forms::Label^ P21;
	private: System::Windows::Forms::Label^ P22;
	private: System::Windows::Forms::Label^ P23;
	private: System::Windows::Forms::Label^ P24;
	private: System::Windows::Forms::Label^ P25;
	private: System::Windows::Forms::Label^ P26;
	private: System::Windows::Forms::Label^ P27;
	private: System::Windows::Forms::Label^ P28;
	private: System::Windows::Forms::Label^ P11;
	private: System::Windows::Forms::Label^ P12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ P18;

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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->P81 = (gcnew System::Windows::Forms::Label());
			this->P82 = (gcnew System::Windows::Forms::Label());
			this->P83 = (gcnew System::Windows::Forms::Label());
			this->P84 = (gcnew System::Windows::Forms::Label());
			this->P85 = (gcnew System::Windows::Forms::Label());
			this->P86 = (gcnew System::Windows::Forms::Label());
			this->P87 = (gcnew System::Windows::Forms::Label());
			this->P88 = (gcnew System::Windows::Forms::Label());
			this->P71 = (gcnew System::Windows::Forms::Label());
			this->P72 = (gcnew System::Windows::Forms::Label());
			this->P73 = (gcnew System::Windows::Forms::Label());
			this->P74 = (gcnew System::Windows::Forms::Label());
			this->P75 = (gcnew System::Windows::Forms::Label());
			this->P76 = (gcnew System::Windows::Forms::Label());
			this->P77 = (gcnew System::Windows::Forms::Label());
			this->P78 = (gcnew System::Windows::Forms::Label());
			this->P61 = (gcnew System::Windows::Forms::Label());
			this->P62 = (gcnew System::Windows::Forms::Label());
			this->P63 = (gcnew System::Windows::Forms::Label());
			this->P64 = (gcnew System::Windows::Forms::Label());
			this->P65 = (gcnew System::Windows::Forms::Label());
			this->P66 = (gcnew System::Windows::Forms::Label());
			this->P67 = (gcnew System::Windows::Forms::Label());
			this->P68 = (gcnew System::Windows::Forms::Label());
			this->P51 = (gcnew System::Windows::Forms::Label());
			this->P52 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->P41 = (gcnew System::Windows::Forms::Label());
			this->P42 = (gcnew System::Windows::Forms::Label());
			this->P43 = (gcnew System::Windows::Forms::Label());
			this->P44 = (gcnew System::Windows::Forms::Label());
			this->P45 = (gcnew System::Windows::Forms::Label());
			this->P46 = (gcnew System::Windows::Forms::Label());
			this->P47 = (gcnew System::Windows::Forms::Label());
			this->P48 = (gcnew System::Windows::Forms::Label());
			this->P31 = (gcnew System::Windows::Forms::Label());
			this->P32 = (gcnew System::Windows::Forms::Label());
			this->P33 = (gcnew System::Windows::Forms::Label());
			this->P34 = (gcnew System::Windows::Forms::Label());
			this->P35 = (gcnew System::Windows::Forms::Label());
			this->P36 = (gcnew System::Windows::Forms::Label());
			this->P37 = (gcnew System::Windows::Forms::Label());
			this->P38 = (gcnew System::Windows::Forms::Label());
			this->P21 = (gcnew System::Windows::Forms::Label());
			this->P22 = (gcnew System::Windows::Forms::Label());
			this->P23 = (gcnew System::Windows::Forms::Label());
			this->P24 = (gcnew System::Windows::Forms::Label());
			this->P25 = (gcnew System::Windows::Forms::Label());
			this->P26 = (gcnew System::Windows::Forms::Label());
			this->P27 = (gcnew System::Windows::Forms::Label());
			this->P28 = (gcnew System::Windows::Forms::Label());
			this->P11 = (gcnew System::Windows::Forms::Label());
			this->P12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->P18 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->P81);
			this->flowLayoutPanel1->Controls->Add(this->P82);
			this->flowLayoutPanel1->Controls->Add(this->P83);
			this->flowLayoutPanel1->Controls->Add(this->P84);
			this->flowLayoutPanel1->Controls->Add(this->P85);
			this->flowLayoutPanel1->Controls->Add(this->P86);
			this->flowLayoutPanel1->Controls->Add(this->P87);
			this->flowLayoutPanel1->Controls->Add(this->P88);
			this->flowLayoutPanel1->Controls->Add(this->P71);
			this->flowLayoutPanel1->Controls->Add(this->P72);
			this->flowLayoutPanel1->Controls->Add(this->P73);
			this->flowLayoutPanel1->Controls->Add(this->P74);
			this->flowLayoutPanel1->Controls->Add(this->P75);
			this->flowLayoutPanel1->Controls->Add(this->P76);
			this->flowLayoutPanel1->Controls->Add(this->P77);
			this->flowLayoutPanel1->Controls->Add(this->P78);
			this->flowLayoutPanel1->Controls->Add(this->P61);
			this->flowLayoutPanel1->Controls->Add(this->P62);
			this->flowLayoutPanel1->Controls->Add(this->P63);
			this->flowLayoutPanel1->Controls->Add(this->P64);
			this->flowLayoutPanel1->Controls->Add(this->P65);
			this->flowLayoutPanel1->Controls->Add(this->P66);
			this->flowLayoutPanel1->Controls->Add(this->P67);
			this->flowLayoutPanel1->Controls->Add(this->P68);
			this->flowLayoutPanel1->Controls->Add(this->P51);
			this->flowLayoutPanel1->Controls->Add(this->P52);
			this->flowLayoutPanel1->Controls->Add(this->label11);
			this->flowLayoutPanel1->Controls->Add(this->label12);
			this->flowLayoutPanel1->Controls->Add(this->label13);
			this->flowLayoutPanel1->Controls->Add(this->label14);
			this->flowLayoutPanel1->Controls->Add(this->label15);
			this->flowLayoutPanel1->Controls->Add(this->label16);
			this->flowLayoutPanel1->Controls->Add(this->P41);
			this->flowLayoutPanel1->Controls->Add(this->P42);
			this->flowLayoutPanel1->Controls->Add(this->P43);
			this->flowLayoutPanel1->Controls->Add(this->P44);
			this->flowLayoutPanel1->Controls->Add(this->P45);
			this->flowLayoutPanel1->Controls->Add(this->P46);
			this->flowLayoutPanel1->Controls->Add(this->P47);
			this->flowLayoutPanel1->Controls->Add(this->P48);
			this->flowLayoutPanel1->Controls->Add(this->P31);
			this->flowLayoutPanel1->Controls->Add(this->P32);
			this->flowLayoutPanel1->Controls->Add(this->P33);
			this->flowLayoutPanel1->Controls->Add(this->P34);
			this->flowLayoutPanel1->Controls->Add(this->P35);
			this->flowLayoutPanel1->Controls->Add(this->P36);
			this->flowLayoutPanel1->Controls->Add(this->P37);
			this->flowLayoutPanel1->Controls->Add(this->P38);
			this->flowLayoutPanel1->Controls->Add(this->P21);
			this->flowLayoutPanel1->Controls->Add(this->P22);
			this->flowLayoutPanel1->Controls->Add(this->P23);
			this->flowLayoutPanel1->Controls->Add(this->P24);
			this->flowLayoutPanel1->Controls->Add(this->P25);
			this->flowLayoutPanel1->Controls->Add(this->P26);
			this->flowLayoutPanel1->Controls->Add(this->P27);
			this->flowLayoutPanel1->Controls->Add(this->P28);
			this->flowLayoutPanel1->Controls->Add(this->P11);
			this->flowLayoutPanel1->Controls->Add(this->P12);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Controls->Add(this->label4);
			this->flowLayoutPanel1->Controls->Add(this->label5);
			this->flowLayoutPanel1->Controls->Add(this->label6);
			this->flowLayoutPanel1->Controls->Add(this->label7);
			this->flowLayoutPanel1->Controls->Add(this->P18);
			this->flowLayoutPanel1->Location = System::Drawing::Point(101, 62);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(677, 730);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// P81
			// 
			this->P81->AutoSize = true;
			this->P81->BackColor = System::Drawing::Color::PapayaWhip;
			this->P81->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P81->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P81->Location = System::Drawing::Point(0, 0);
			this->P81->Margin = System::Windows::Forms::Padding(0);
			this->P81->Name = L"P81";
			this->P81->Size = System::Drawing::Size(84, 90);
			this->P81->TabIndex = 50;
			this->P81->Text = L"♜";
			this->P81->UseCompatibleTextRendering = true;
			// 
			// P82
			// 
			this->P82->AutoSize = true;
			this->P82->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P82->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P82->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P82->Location = System::Drawing::Point(84, 0);
			this->P82->Margin = System::Windows::Forms::Padding(0);
			this->P82->Name = L"P82";
			this->P82->Size = System::Drawing::Size(84, 90);
			this->P82->TabIndex = 51;
			this->P82->Text = L"♞";
			this->P82->UseCompatibleTextRendering = true;
			// 
			// P83
			// 
			this->P83->AutoSize = true;
			this->P83->BackColor = System::Drawing::Color::PapayaWhip;
			this->P83->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P83->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P83->Location = System::Drawing::Point(168, 0);
			this->P83->Margin = System::Windows::Forms::Padding(0);
			this->P83->Name = L"P83";
			this->P83->Size = System::Drawing::Size(84, 90);
			this->P83->TabIndex = 52;
			this->P83->Text = L"♝";
			this->P83->UseCompatibleTextRendering = true;
			// 
			// P84
			// 
			this->P84->AutoSize = true;
			this->P84->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P84->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P84->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P84->Location = System::Drawing::Point(252, 0);
			this->P84->Margin = System::Windows::Forms::Padding(0);
			this->P84->Name = L"P84";
			this->P84->Size = System::Drawing::Size(84, 90);
			this->P84->TabIndex = 53;
			this->P84->Text = L"♛";
			this->P84->UseCompatibleTextRendering = true;
			// 
			// P85
			// 
			this->P85->AutoSize = true;
			this->P85->BackColor = System::Drawing::Color::PapayaWhip;
			this->P85->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P85->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P85->Location = System::Drawing::Point(336, 0);
			this->P85->Margin = System::Windows::Forms::Padding(0);
			this->P85->Name = L"P85";
			this->P85->Size = System::Drawing::Size(84, 90);
			this->P85->TabIndex = 54;
			this->P85->Text = L"♚";
			this->P85->UseCompatibleTextRendering = true;
			// 
			// P86
			// 
			this->P86->AutoSize = true;
			this->P86->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P86->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P86->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P86->Location = System::Drawing::Point(420, 0);
			this->P86->Margin = System::Windows::Forms::Padding(0);
			this->P86->Name = L"P86";
			this->P86->Size = System::Drawing::Size(84, 90);
			this->P86->TabIndex = 55;
			this->P86->Text = L"♝";
			this->P86->UseCompatibleTextRendering = true;
			// 
			// P87
			// 
			this->P87->AutoSize = true;
			this->P87->BackColor = System::Drawing::Color::PapayaWhip;
			this->P87->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P87->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P87->Location = System::Drawing::Point(504, 0);
			this->P87->Margin = System::Windows::Forms::Padding(0);
			this->P87->Name = L"P87";
			this->P87->Size = System::Drawing::Size(84, 90);
			this->P87->TabIndex = 56;
			this->P87->Text = L"♞";
			this->P87->UseCompatibleTextRendering = true;
			// 
			// P88
			// 
			this->P88->AutoSize = true;
			this->P88->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P88->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P88->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P88->Location = System::Drawing::Point(588, 0);
			this->P88->Margin = System::Windows::Forms::Padding(0);
			this->P88->Name = L"P88";
			this->P88->Size = System::Drawing::Size(84, 90);
			this->P88->TabIndex = 57;
			this->P88->Text = L"♜";
			this->P88->UseCompatibleTextRendering = true;
			// 
			// P71
			// 
			this->P71->AutoSize = true;
			this->P71->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P71->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P71->Location = System::Drawing::Point(0, 90);
			this->P71->Margin = System::Windows::Forms::Padding(0);
			this->P71->Name = L"P71";
			this->P71->Size = System::Drawing::Size(84, 90);
			this->P71->TabIndex = 58;
			this->P71->Text = L"♟";
			this->P71->UseCompatibleTextRendering = true;
			// 
			// P72
			// 
			this->P72->AutoSize = true;
			this->P72->BackColor = System::Drawing::Color::PapayaWhip;
			this->P72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P72->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P72->Location = System::Drawing::Point(84, 90);
			this->P72->Margin = System::Windows::Forms::Padding(0);
			this->P72->Name = L"P72";
			this->P72->Size = System::Drawing::Size(84, 90);
			this->P72->TabIndex = 59;
			this->P72->Text = L"♟";
			this->P72->UseCompatibleTextRendering = true;
			// 
			// P73
			// 
			this->P73->AutoSize = true;
			this->P73->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P73->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P73->Location = System::Drawing::Point(168, 90);
			this->P73->Margin = System::Windows::Forms::Padding(0);
			this->P73->Name = L"P73";
			this->P73->Size = System::Drawing::Size(84, 90);
			this->P73->TabIndex = 60;
			this->P73->Text = L"♟";
			this->P73->UseCompatibleTextRendering = true;
			// 
			// P74
			// 
			this->P74->AutoSize = true;
			this->P74->BackColor = System::Drawing::Color::PapayaWhip;
			this->P74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P74->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P74->Location = System::Drawing::Point(252, 90);
			this->P74->Margin = System::Windows::Forms::Padding(0);
			this->P74->Name = L"P74";
			this->P74->Size = System::Drawing::Size(84, 90);
			this->P74->TabIndex = 61;
			this->P74->Text = L"♟";
			this->P74->UseCompatibleTextRendering = true;
			// 
			// P75
			// 
			this->P75->AutoSize = true;
			this->P75->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P75->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P75->Location = System::Drawing::Point(336, 90);
			this->P75->Margin = System::Windows::Forms::Padding(0);
			this->P75->Name = L"P75";
			this->P75->Size = System::Drawing::Size(84, 90);
			this->P75->TabIndex = 62;
			this->P75->Text = L"♟";
			this->P75->UseCompatibleTextRendering = true;
			// 
			// P76
			// 
			this->P76->AutoSize = true;
			this->P76->BackColor = System::Drawing::Color::PapayaWhip;
			this->P76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P76->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P76->Location = System::Drawing::Point(420, 90);
			this->P76->Margin = System::Windows::Forms::Padding(0);
			this->P76->Name = L"P76";
			this->P76->Size = System::Drawing::Size(84, 90);
			this->P76->TabIndex = 63;
			this->P76->Text = L"♟";
			this->P76->UseCompatibleTextRendering = true;
			// 
			// P77
			// 
			this->P77->AutoSize = true;
			this->P77->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P77->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P77->Location = System::Drawing::Point(504, 90);
			this->P77->Margin = System::Windows::Forms::Padding(0);
			this->P77->Name = L"P77";
			this->P77->Size = System::Drawing::Size(84, 90);
			this->P77->TabIndex = 64;
			this->P77->Text = L"♟";
			this->P77->UseCompatibleTextRendering = true;
			// 
			// P78
			// 
			this->P78->AutoSize = true;
			this->P78->BackColor = System::Drawing::Color::PapayaWhip;
			this->P78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P78->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P78->Location = System::Drawing::Point(588, 90);
			this->P78->Margin = System::Windows::Forms::Padding(0);
			this->P78->Name = L"P78";
			this->P78->Size = System::Drawing::Size(84, 90);
			this->P78->TabIndex = 65;
			this->P78->Text = L"♟";
			this->P78->UseCompatibleTextRendering = true;
			// 
			// P61
			// 
			this->P61->AutoSize = true;
			this->P61->BackColor = System::Drawing::Color::PapayaWhip;
			this->P61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P61->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P61->Location = System::Drawing::Point(0, 180);
			this->P61->Margin = System::Windows::Forms::Padding(0);
			this->P61->Name = L"P61";
			this->P61->Size = System::Drawing::Size(84, 90);
			this->P61->TabIndex = 66;
			this->P61->Text = L"    ";
			this->P61->UseCompatibleTextRendering = true;
			// 
			// P62
			// 
			this->P62->AutoSize = true;
			this->P62->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P62->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P62->Location = System::Drawing::Point(84, 180);
			this->P62->Margin = System::Windows::Forms::Padding(0);
			this->P62->Name = L"P62";
			this->P62->Size = System::Drawing::Size(84, 90);
			this->P62->TabIndex = 67;
			this->P62->Text = L"    ";
			this->P62->UseCompatibleTextRendering = true;
			// 
			// P63
			// 
			this->P63->AutoSize = true;
			this->P63->BackColor = System::Drawing::Color::PapayaWhip;
			this->P63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P63->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P63->Location = System::Drawing::Point(168, 180);
			this->P63->Margin = System::Windows::Forms::Padding(0);
			this->P63->Name = L"P63";
			this->P63->Size = System::Drawing::Size(84, 90);
			this->P63->TabIndex = 68;
			this->P63->Text = L"    ";
			this->P63->UseCompatibleTextRendering = true;
			// 
			// P64
			// 
			this->P64->AutoSize = true;
			this->P64->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P64->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P64->Location = System::Drawing::Point(252, 180);
			this->P64->Margin = System::Windows::Forms::Padding(0);
			this->P64->Name = L"P64";
			this->P64->Size = System::Drawing::Size(84, 90);
			this->P64->TabIndex = 69;
			this->P64->Text = L"    ";
			this->P64->UseCompatibleTextRendering = true;
			// 
			// P65
			// 
			this->P65->AutoSize = true;
			this->P65->BackColor = System::Drawing::Color::PapayaWhip;
			this->P65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P65->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P65->Location = System::Drawing::Point(336, 180);
			this->P65->Margin = System::Windows::Forms::Padding(0);
			this->P65->Name = L"P65";
			this->P65->Size = System::Drawing::Size(84, 90);
			this->P65->TabIndex = 70;
			this->P65->Text = L"    ";
			this->P65->UseCompatibleTextRendering = true;
			// 
			// P66
			// 
			this->P66->AutoSize = true;
			this->P66->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P66->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P66->Location = System::Drawing::Point(420, 180);
			this->P66->Margin = System::Windows::Forms::Padding(0);
			this->P66->Name = L"P66";
			this->P66->Size = System::Drawing::Size(84, 90);
			this->P66->TabIndex = 71;
			this->P66->Text = L"    ";
			this->P66->UseCompatibleTextRendering = true;
			// 
			// P67
			// 
			this->P67->AutoSize = true;
			this->P67->BackColor = System::Drawing::Color::PapayaWhip;
			this->P67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P67->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P67->Location = System::Drawing::Point(504, 180);
			this->P67->Margin = System::Windows::Forms::Padding(0);
			this->P67->Name = L"P67";
			this->P67->Size = System::Drawing::Size(84, 90);
			this->P67->TabIndex = 72;
			this->P67->Text = L"    ";
			this->P67->UseCompatibleTextRendering = true;
			// 
			// P68
			// 
			this->P68->AutoSize = true;
			this->P68->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P68->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P68->Location = System::Drawing::Point(588, 180);
			this->P68->Margin = System::Windows::Forms::Padding(0);
			this->P68->Name = L"P68";
			this->P68->Size = System::Drawing::Size(84, 90);
			this->P68->TabIndex = 73;
			this->P68->Text = L"    ";
			this->P68->UseCompatibleTextRendering = true;
			// 
			// P51
			// 
			this->P51->AutoSize = true;
			this->P51->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P51->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P51->Location = System::Drawing::Point(0, 270);
			this->P51->Margin = System::Windows::Forms::Padding(0);
			this->P51->Name = L"P51";
			this->P51->Size = System::Drawing::Size(84, 90);
			this->P51->TabIndex = 74;
			this->P51->Text = L"    ";
			this->P51->UseCompatibleTextRendering = true;
			// 
			// P52
			// 
			this->P52->AutoSize = true;
			this->P52->BackColor = System::Drawing::Color::PapayaWhip;
			this->P52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P52->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P52->Location = System::Drawing::Point(84, 270);
			this->P52->Margin = System::Windows::Forms::Padding(0);
			this->P52->Name = L"P52";
			this->P52->Size = System::Drawing::Size(84, 90);
			this->P52->TabIndex = 75;
			this->P52->Text = L"    ";
			this->P52->UseCompatibleTextRendering = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label11->Location = System::Drawing::Point(168, 270);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 90);
			this->label11->TabIndex = 76;
			this->label11->Text = L"    ";
			this->label11->UseCompatibleTextRendering = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::PapayaWhip;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label12->Location = System::Drawing::Point(252, 270);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 90);
			this->label12->TabIndex = 77;
			this->label12->Text = L"    ";
			this->label12->UseCompatibleTextRendering = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label13->Location = System::Drawing::Point(336, 270);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 90);
			this->label13->TabIndex = 78;
			this->label13->Text = L"    ";
			this->label13->UseCompatibleTextRendering = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::PapayaWhip;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label14->Location = System::Drawing::Point(420, 270);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 90);
			this->label14->TabIndex = 79;
			this->label14->Text = L"    ";
			this->label14->UseCompatibleTextRendering = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label15->Location = System::Drawing::Point(504, 270);
			this->label15->Margin = System::Windows::Forms::Padding(0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 90);
			this->label15->TabIndex = 80;
			this->label15->Text = L"    ";
			this->label15->UseCompatibleTextRendering = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::PapayaWhip;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(588, 270);
			this->label16->Margin = System::Windows::Forms::Padding(0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 90);
			this->label16->TabIndex = 81;
			this->label16->Text = L"    ";
			this->label16->UseCompatibleTextRendering = true;
			// 
			// P41
			// 
			this->P41->AutoSize = true;
			this->P41->BackColor = System::Drawing::Color::PapayaWhip;
			this->P41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P41->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P41->Location = System::Drawing::Point(0, 360);
			this->P41->Margin = System::Windows::Forms::Padding(0);
			this->P41->Name = L"P41";
			this->P41->Size = System::Drawing::Size(84, 90);
			this->P41->TabIndex = 82;
			this->P41->Text = L"    ";
			this->P41->UseCompatibleTextRendering = true;
			// 
			// P42
			// 
			this->P42->AutoSize = true;
			this->P42->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P42->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P42->Location = System::Drawing::Point(84, 360);
			this->P42->Margin = System::Windows::Forms::Padding(0);
			this->P42->Name = L"P42";
			this->P42->Size = System::Drawing::Size(84, 90);
			this->P42->TabIndex = 83;
			this->P42->Text = L"    ";
			this->P42->UseCompatibleTextRendering = true;
			// 
			// P43
			// 
			this->P43->AutoSize = true;
			this->P43->BackColor = System::Drawing::Color::PapayaWhip;
			this->P43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P43->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P43->Location = System::Drawing::Point(168, 360);
			this->P43->Margin = System::Windows::Forms::Padding(0);
			this->P43->Name = L"P43";
			this->P43->Size = System::Drawing::Size(84, 90);
			this->P43->TabIndex = 84;
			this->P43->Text = L"    ";
			this->P43->UseCompatibleTextRendering = true;
			// 
			// P44
			// 
			this->P44->AutoSize = true;
			this->P44->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P44->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P44->Location = System::Drawing::Point(252, 360);
			this->P44->Margin = System::Windows::Forms::Padding(0);
			this->P44->Name = L"P44";
			this->P44->Size = System::Drawing::Size(84, 90);
			this->P44->TabIndex = 85;
			this->P44->Text = L"    ";
			this->P44->UseCompatibleTextRendering = true;
			// 
			// P45
			// 
			this->P45->AutoSize = true;
			this->P45->BackColor = System::Drawing::Color::PapayaWhip;
			this->P45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P45->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P45->Location = System::Drawing::Point(336, 360);
			this->P45->Margin = System::Windows::Forms::Padding(0);
			this->P45->Name = L"P45";
			this->P45->Size = System::Drawing::Size(84, 90);
			this->P45->TabIndex = 86;
			this->P45->Text = L"    ";
			this->P45->UseCompatibleTextRendering = true;
			// 
			// P46
			// 
			this->P46->AutoSize = true;
			this->P46->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P46->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P46->Location = System::Drawing::Point(420, 360);
			this->P46->Margin = System::Windows::Forms::Padding(0);
			this->P46->Name = L"P46";
			this->P46->Size = System::Drawing::Size(84, 90);
			this->P46->TabIndex = 87;
			this->P46->Text = L"    ";
			this->P46->UseCompatibleTextRendering = true;
			// 
			// P47
			// 
			this->P47->AutoSize = true;
			this->P47->BackColor = System::Drawing::Color::PapayaWhip;
			this->P47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P47->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P47->Location = System::Drawing::Point(504, 360);
			this->P47->Margin = System::Windows::Forms::Padding(0);
			this->P47->Name = L"P47";
			this->P47->Size = System::Drawing::Size(84, 90);
			this->P47->TabIndex = 88;
			this->P47->Text = L"    ";
			this->P47->UseCompatibleTextRendering = true;
			// 
			// P48
			// 
			this->P48->AutoSize = true;
			this->P48->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P48->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P48->Location = System::Drawing::Point(588, 360);
			this->P48->Margin = System::Windows::Forms::Padding(0);
			this->P48->Name = L"P48";
			this->P48->Size = System::Drawing::Size(84, 90);
			this->P48->TabIndex = 89;
			this->P48->Text = L"    ";
			this->P48->UseCompatibleTextRendering = true;
			// 
			// P31
			// 
			this->P31->AutoSize = true;
			this->P31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P31->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P31->Location = System::Drawing::Point(0, 450);
			this->P31->Margin = System::Windows::Forms::Padding(0);
			this->P31->Name = L"P31";
			this->P31->Size = System::Drawing::Size(84, 90);
			this->P31->TabIndex = 90;
			this->P31->Text = L"    ";
			this->P31->UseCompatibleTextRendering = true;
			// 
			// P32
			// 
			this->P32->AutoSize = true;
			this->P32->BackColor = System::Drawing::Color::PapayaWhip;
			this->P32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P32->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P32->Location = System::Drawing::Point(84, 450);
			this->P32->Margin = System::Windows::Forms::Padding(0);
			this->P32->Name = L"P32";
			this->P32->Size = System::Drawing::Size(84, 90);
			this->P32->TabIndex = 91;
			this->P32->Text = L"    ";
			this->P32->UseCompatibleTextRendering = true;
			// 
			// P33
			// 
			this->P33->AutoSize = true;
			this->P33->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P33->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P33->Location = System::Drawing::Point(168, 450);
			this->P33->Margin = System::Windows::Forms::Padding(0);
			this->P33->Name = L"P33";
			this->P33->Size = System::Drawing::Size(84, 90);
			this->P33->TabIndex = 92;
			this->P33->Text = L"    ";
			this->P33->UseCompatibleTextRendering = true;
			// 
			// P34
			// 
			this->P34->AutoSize = true;
			this->P34->BackColor = System::Drawing::Color::PapayaWhip;
			this->P34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P34->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P34->Location = System::Drawing::Point(252, 450);
			this->P34->Margin = System::Windows::Forms::Padding(0);
			this->P34->Name = L"P34";
			this->P34->Size = System::Drawing::Size(84, 90);
			this->P34->TabIndex = 93;
			this->P34->Text = L"    ";
			this->P34->UseCompatibleTextRendering = true;
			// 
			// P35
			// 
			this->P35->AutoSize = true;
			this->P35->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P35->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P35->Location = System::Drawing::Point(336, 450);
			this->P35->Margin = System::Windows::Forms::Padding(0);
			this->P35->Name = L"P35";
			this->P35->Size = System::Drawing::Size(84, 90);
			this->P35->TabIndex = 94;
			this->P35->Text = L"    ";
			this->P35->UseCompatibleTextRendering = true;
			// 
			// P36
			// 
			this->P36->AutoSize = true;
			this->P36->BackColor = System::Drawing::Color::PapayaWhip;
			this->P36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P36->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P36->Location = System::Drawing::Point(420, 450);
			this->P36->Margin = System::Windows::Forms::Padding(0);
			this->P36->Name = L"P36";
			this->P36->Size = System::Drawing::Size(84, 90);
			this->P36->TabIndex = 95;
			this->P36->Text = L"    ";
			this->P36->UseCompatibleTextRendering = true;
			// 
			// P37
			// 
			this->P37->AutoSize = true;
			this->P37->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P37->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P37->Location = System::Drawing::Point(504, 450);
			this->P37->Margin = System::Windows::Forms::Padding(0);
			this->P37->Name = L"P37";
			this->P37->Size = System::Drawing::Size(84, 90);
			this->P37->TabIndex = 96;
			this->P37->Text = L"    ";
			this->P37->UseCompatibleTextRendering = true;
			// 
			// P38
			// 
			this->P38->AutoSize = true;
			this->P38->BackColor = System::Drawing::Color::PapayaWhip;
			this->P38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P38->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P38->Location = System::Drawing::Point(588, 450);
			this->P38->Margin = System::Windows::Forms::Padding(0);
			this->P38->Name = L"P38";
			this->P38->Size = System::Drawing::Size(84, 90);
			this->P38->TabIndex = 97;
			this->P38->Text = L"    ";
			this->P38->UseCompatibleTextRendering = true;
			// 
			// P21
			// 
			this->P21->AutoSize = true;
			this->P21->BackColor = System::Drawing::Color::PapayaWhip;
			this->P21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P21->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P21->Location = System::Drawing::Point(0, 540);
			this->P21->Margin = System::Windows::Forms::Padding(0);
			this->P21->Name = L"P21";
			this->P21->Size = System::Drawing::Size(84, 90);
			this->P21->TabIndex = 98;
			this->P21->Text = L"♙";
			this->P21->UseCompatibleTextRendering = true;
			// 
			// P22
			// 
			this->P22->AutoSize = true;
			this->P22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P22->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P22->Location = System::Drawing::Point(84, 540);
			this->P22->Margin = System::Windows::Forms::Padding(0);
			this->P22->Name = L"P22";
			this->P22->Size = System::Drawing::Size(84, 90);
			this->P22->TabIndex = 99;
			this->P22->Text = L"♙";
			this->P22->UseCompatibleTextRendering = true;
			// 
			// P23
			// 
			this->P23->AutoSize = true;
			this->P23->BackColor = System::Drawing::Color::PapayaWhip;
			this->P23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P23->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P23->Location = System::Drawing::Point(168, 540);
			this->P23->Margin = System::Windows::Forms::Padding(0);
			this->P23->Name = L"P23";
			this->P23->Size = System::Drawing::Size(84, 90);
			this->P23->TabIndex = 100;
			this->P23->Text = L"♙";
			this->P23->UseCompatibleTextRendering = true;
			// 
			// P24
			// 
			this->P24->AutoSize = true;
			this->P24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P24->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P24->Location = System::Drawing::Point(252, 540);
			this->P24->Margin = System::Windows::Forms::Padding(0);
			this->P24->Name = L"P24";
			this->P24->Size = System::Drawing::Size(84, 90);
			this->P24->TabIndex = 101;
			this->P24->Text = L"♙";
			this->P24->UseCompatibleTextRendering = true;
			// 
			// P25
			// 
			this->P25->AutoSize = true;
			this->P25->BackColor = System::Drawing::Color::PapayaWhip;
			this->P25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P25->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P25->Location = System::Drawing::Point(336, 540);
			this->P25->Margin = System::Windows::Forms::Padding(0);
			this->P25->Name = L"P25";
			this->P25->Size = System::Drawing::Size(84, 90);
			this->P25->TabIndex = 102;
			this->P25->Text = L"♙";
			this->P25->UseCompatibleTextRendering = true;
			// 
			// P26
			// 
			this->P26->AutoSize = true;
			this->P26->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P26->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P26->Location = System::Drawing::Point(420, 540);
			this->P26->Margin = System::Windows::Forms::Padding(0);
			this->P26->Name = L"P26";
			this->P26->Size = System::Drawing::Size(84, 90);
			this->P26->TabIndex = 103;
			this->P26->Text = L"♙";
			this->P26->UseCompatibleTextRendering = true;
			// 
			// P27
			// 
			this->P27->AutoSize = true;
			this->P27->BackColor = System::Drawing::Color::PapayaWhip;
			this->P27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P27->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P27->Location = System::Drawing::Point(504, 540);
			this->P27->Margin = System::Windows::Forms::Padding(0);
			this->P27->Name = L"P27";
			this->P27->Size = System::Drawing::Size(84, 90);
			this->P27->TabIndex = 104;
			this->P27->Text = L"♙";
			this->P27->UseCompatibleTextRendering = true;
			// 
			// P28
			// 
			this->P28->AutoSize = true;
			this->P28->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P28->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P28->Location = System::Drawing::Point(588, 540);
			this->P28->Margin = System::Windows::Forms::Padding(0);
			this->P28->Name = L"P28";
			this->P28->Size = System::Drawing::Size(84, 90);
			this->P28->TabIndex = 105;
			this->P28->Text = L"♙";
			this->P28->UseCompatibleTextRendering = true;
			// 
			// P11
			// 
			this->P11->AutoSize = true;
			this->P11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->P11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P11->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P11->Location = System::Drawing::Point(0, 630);
			this->P11->Margin = System::Windows::Forms::Padding(0);
			this->P11->Name = L"P11";
			this->P11->Size = System::Drawing::Size(84, 90);
			this->P11->TabIndex = 106;
			this->P11->Text = L"♖";
			this->P11->UseCompatibleTextRendering = true;
			// 
			// P12
			// 
			this->P12->AutoSize = true;
			this->P12->BackColor = System::Drawing::Color::PapayaWhip;
			this->P12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P12->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->P12->Location = System::Drawing::Point(84, 630);
			this->P12->Margin = System::Windows::Forms::Padding(0);
			this->P12->Name = L"P12";
			this->P12->Size = System::Drawing::Size(84, 90);
			this->P12->TabIndex = 107;
			this->P12->Text = L"♘";
			this->P12->UseCompatibleTextRendering = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label3->Location = System::Drawing::Point(168, 630);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 90);
			this->label3->TabIndex = 108;
			this->label3->Text = L"♗";
			this->label3->UseCompatibleTextRendering = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PapayaWhip;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label4->Location = System::Drawing::Point(252, 630);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 90);
			this->label4->TabIndex = 109;
			this->label4->Text = L"♕";
			this->label4->UseCompatibleTextRendering = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label5->Location = System::Drawing::Point(336, 630);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 90);
			this->label5->TabIndex = 110;
			this->label5->Text = L"♔";
			this->label5->UseCompatibleTextRendering = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PapayaWhip;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label6->Location = System::Drawing::Point(420, 630);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 90);
			this->label6->TabIndex = 111;
			this->label6->Text = L"♗";
			this->label6->UseCompatibleTextRendering = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45));
			this->label7->Location = System::Drawing::Point(504, 630);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 90);
			this->label7->TabIndex = 112;
			this->label7->Text = L"♘";
			this->label7->UseCompatibleTextRendering = true;
			// 
			// P18
			// 
			this->P18->AutoSize = true;
			this->P18->BackColor = System::Drawing::Color::PapayaWhip;
			this->P18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P18->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P18->Location = System::Drawing::Point(588, 630);
			this->P18->Margin = System::Windows::Forms::Padding(0);
			this->P18->Name = L"P18";
			this->P18->Size = System::Drawing::Size(84, 90);
			this->P18->TabIndex = 113;
			this->P18->Text = L"♖";
			this->P18->UseCompatibleTextRendering = true;
			// 
			// chessBoardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(919, 690);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"chessBoardForm";
			this->Text = L"chessBoardForm";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

};
}
