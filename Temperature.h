#pragma once

namespace Caduceus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace System::Diagnostics;
	using namespace System::Text::RegularExpressions;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Temperature
	/// </summary>
	public ref class Temperature : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection;
		SqlCommand^ command;
		String^ str = "Data Source=THEBEAST\\SQLEXPRESS;Initial Catalog=Temps;Integrated Security=True";
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter();
		int counter;
		double temp;
		double second = 0;
		// Can only take temp one time
		int count = 0;
		String^ origin_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
		// StreamWriter on Temps file
		String^ filename = origin_path + "\\Temps.txt";
		StreamWriter^ sw = gcnew StreamWriter(filename, false);
		

		
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBoxSB;
	private: System::Windows::Forms::ComboBox^ comboBoxP;
	private: System::Windows::Forms::ComboBox^ comboBoxDB;
	private: System::Windows::Forms::ComboBox^ comboBoxBR;
	private: System::Windows::Forms::ComboBox^ comboBoxSP;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button8;

	


		
		

	public:
		Temperature(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	private: System::IO::Ports::SerialPort^ serialPort;



	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button2;


	public:
		Form^ obj;
		Temperature(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Temperature()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxSP = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBoxBR = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSB = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxP = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxDB = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(1130, 724);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"RETURN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Temperature::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(375, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(542, 52);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TEMPERATURE TAKER";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(17, 450);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(285, 37);
			this->textBox1->TabIndex = 2;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(638, 200);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Temp";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(650, 450);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PaleGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(17, 400);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 32);
			this->label2->TabIndex = 4;
			this->label2->Text = L"TEMPERATURE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PaleGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(17, 500);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"AVARAGE TEMP";
			// 
			// serialPort
			// 
			this->serialPort->PortName = L"COM3";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button5->Location = System::Drawing::Point(339, 250);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(285, 127);
			this->button5->TabIndex = 13;
			this->button5->Text = L"TAKE TEMPERATURE";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Temperature::button5_Click);
			this->button5->MouseHover += gcnew System::EventHandler(this, &Temperature::button5_MouseHover);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PaleGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(17, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 32);
			this->label5->TabIndex = 15;
			this->label5->Text = L"NAME";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PaleGreen;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Navy;
			this->label6->Location = System::Drawing::Point(17, 300);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 32);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ID";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(17, 250);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 37);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(17, 350);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(285, 37);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(17, 550);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(285, 37);
			this->textBox4->TabIndex = 19;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Temperature::timer1_Tick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(0, 734);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(352, 67);
			this->button2->TabIndex = 20;
			this->button2->Text = L"SAVE TO RECORD";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Temperature::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(339, 520);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(279, 67);
			this->button4->TabIndex = 9;
			this->button4->Text = L"STOP";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Temperature::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->button3->Location = System::Drawing::Point(440, 724);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(602, 77);
			this->button3->TabIndex = 21;
			this->button3->Text = L"CHANGE PORT SETTING";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Temperature::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 800);
			this->panel1->TabIndex = 22;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::panel1_MouseUp);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Aqua;
			this->button8->Location = System::Drawing::Point(749, 316);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(352, 77);
			this->button8->TabIndex = 20;
			this->button8->Text = L"SAVE SETTING";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Temperature::button8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBoxSP);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->comboBoxBR);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->comboBoxSB);
			this->groupBox1->Controls->Add(this->comboBoxP);
			this->groupBox1->Controls->Add(this->comboBoxDB);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DarkOrange;
			this->groupBox1->Location = System::Drawing::Point(26, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(500, 600);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"COM Serial Port Settings";
			// 
			// comboBoxSP
			// 
			this->comboBoxSP->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBoxSP->FormattingEnabled = true;
			this->comboBoxSP->Location = System::Drawing::Point(57, 95);
			this->comboBoxSP->Name = L"comboBoxSP";
			this->comboBoxSP->Size = System::Drawing::Size(392, 37);
			this->comboBoxSP->TabIndex = 21;
			this->comboBoxSP->MouseHover += gcnew System::EventHandler(this, &Temperature::comboBoxSP_MouseHover);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Navy;
			this->label10->Location = System::Drawing::Point(52, 364);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 32);
			this->label10->TabIndex = 18;
			this->label10->Text = L"StopBits";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Navy;
			this->label4->Location = System::Drawing::Point(51, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 36);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Port";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Navy;
			this->label9->Location = System::Drawing::Point(51, 257);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 32);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Parity";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Navy;
			this->label8->Location = System::Drawing::Point(51, 150);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 32);
			this->label8->TabIndex = 16;
			this->label8->Text = L"DataBits";
			// 
			// comboBoxBR
			// 
			this->comboBoxBR->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxBR->FormattingEnabled = true;
			this->comboBoxBR->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"110", L"300", L"600", L"1200", L"2400", L"4800",
					L"9600", L"14400", L"19200", L"38400 "
			});
			this->comboBoxBR->Location = System::Drawing::Point(57, 523);
			this->comboBoxBR->Name = L"comboBoxBR";
			this->comboBoxBR->Size = System::Drawing::Size(392, 37);
			this->comboBoxBR->TabIndex = 11;
			this->comboBoxBR->MouseHover += gcnew System::EventHandler(this, &Temperature::comboBoxBR_MouseHover);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Navy;
			this->label7->Location = System::Drawing::Point(51, 471);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 32);
			this->label7->TabIndex = 15;
			this->label7->Text = L"BaudRate";
			// 
			// comboBoxSB
			// 
			this->comboBoxSB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxSB->FormattingEnabled = true;
			this->comboBoxSB->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"One", L"OnePointFive", L"Two" });
			this->comboBoxSB->Location = System::Drawing::Point(57, 416);
			this->comboBoxSB->Name = L"comboBoxSB";
			this->comboBoxSB->Size = System::Drawing::Size(392, 37);
			this->comboBoxSB->TabIndex = 14;
			this->comboBoxSB->MouseHover += gcnew System::EventHandler(this, &Temperature::comboBoxSB_MouseHover);
			// 
			// comboBoxP
			// 
			this->comboBoxP->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxP->FormattingEnabled = true;
			this->comboBoxP->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"None", L"Odd", L"Even", L"Mark", L"Space" });
			this->comboBoxP->Location = System::Drawing::Point(57, 309);
			this->comboBoxP->Name = L"comboBoxP";
			this->comboBoxP->Size = System::Drawing::Size(392, 37);
			this->comboBoxP->TabIndex = 13;
			this->comboBoxP->MouseHover += gcnew System::EventHandler(this, &Temperature::comboBoxP_MouseHover);
			// 
			// comboBoxDB
			// 
			this->comboBoxDB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDB->FormattingEnabled = true;
			this->comboBoxDB->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"6", L"7", L"8", L"9" });
			this->comboBoxDB->Location = System::Drawing::Point(58, 202);
			this->comboBoxDB->Name = L"comboBoxDB";
			this->comboBoxDB->Size = System::Drawing::Size(392, 37);
			this->comboBoxDB->TabIndex = 12;
			this->comboBoxDB->MouseHover += gcnew System::EventHandler(this, &Temperature::comboBoxDB_MouseHover);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(488, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(325, 59);
			this->label11->TabIndex = 11;
			this->label11->Text = L"PORT SETTING";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Aqua;
			this->button7->Location = System::Drawing::Point(749, 407);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(352, 77);
			this->button7->TabIndex = 2;
			this->button7->Text = L"LOAD SETTING";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Temperature::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Aqua;
			this->button6->Location = System::Drawing::Point(1130, 723);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 77);
			this->button6->TabIndex = 1;
			this->button6->Text = L"RETURN";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Temperature::button6_Click);
			// 
			// Temperature
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1300, 800);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Temperature";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Temperature";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Temperature::Temperature_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Temperature::Temperature_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::Temperature_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::Temperature_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Temperature::Temperature_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Return to Home Form
		sw->Close();
		this->Hide();
		obj->Show();
		if (timer1->Enabled)
		{
			timer1->Stop();
		}
		if (serialPort->IsOpen) {
			serialPort->Close();
		}
	}

	// Dragging
	bool dragging;
	System::Drawing::Point offset;

	private: System::Void Temperature_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void Temperature_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging)
		{
			Location = System::Drawing::Point((e->X - offset.X) + Location.X, (e->Y - offset.Y) + Location.Y);
		}
	}

	private: System::Void Temperature_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void Temperature_Load(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ ports = SerialPort::GetPortNames(); // Get all Port names
		comboBoxSP->Items->AddRange(ports); // Pass all Port Names to comboBoxSP
		panel1->Hide(); // Temporary hide Port Setting Panel
	}

	private: System::Void Temperature_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (serialPort->IsOpen) {
			// Close serial port when form is closing
			serialPort->Close();
		}
	}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (count == 0) {
		if (serialPort->IsOpen) {
			serialPort->Close();
		}
		SerialPort^ port = gcnew SerialPort(); // Initialize new port
		// Make sure all port setting has been selected
		if (comboBoxSP->SelectedIndex != -1 && comboBoxDB->SelectedIndex != -1 && comboBoxP->SelectedIndex != -1 && comboBoxSB->SelectedIndex != -1 && comboBoxBR->SelectedIndex != -1) {
			// Export Port Setting
			port->PortName = comboBoxSP->Text;
			port->BaudRate = Int32::Parse(comboBoxBR->Text);
			port->Parity = (Parity)Enum::Parse(Parity::typeid, comboBoxP->Text);
			port->DataBits = Int32::Parse(comboBoxDB->Text);
			port->StopBits = (StopBits)Enum::Parse(StopBits::typeid, comboBoxSB->Text);
			try {
				serialPort->Open();
				// Check if connection is ok
				if (serialPort->IsOpen == false) {
					MessageBox::Show("Connection failed!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				if (serialPort->IsOpen == true) {
					MessageBox::Show("Connection success!", "Notice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					if (timer1->Enabled)
					{
						timer1->Stop();
					}
					else
					{
						// Start timer
						timer1->Start();
					}
				}
			}
			catch (NullReferenceException^ e) {
				MessageBox::Show("Please choose a port!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			MessageBox::Show("Please select all COM Serial Port Settings!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else if (count != 0) {
		MessageBox::Show("Please declare your information in the Declare tab first!", "Notice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}


private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (serialPort->IsOpen && count == 0) {
			// Pass the value from the sensor to string a
			String^ a = serialPort->ReadExisting();
			sw->Write(a);
			counter++;
			// Set count to 1 to stop using this form twice in one time
			count = count + 1;
		}
		else if (serialPort->IsOpen && count != 0) {
			textBox1->Text = serialPort->ReadExisting();
			try {
				temp = Convert::ToDouble(textBox1->Text);
			}
			catch (FormatException^) {
				// Raise error if NaN value is given
				MessageBox::Show("Connection Error!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			chart1->ChartAreas[0]->AxisX->Title = "Time (s)"; // X axis
			chart1->ChartAreas[0]->AxisY->Title = "Temperature [°C]"; // Y axis
			chart1->ChartAreas[0]->AxisX->Minimum = 0; // X axis minimum
			chart1->ChartAreas[0]->AxisY->Minimum = 0; // Y axis minimum
			chart1->ChartAreas[0]->AxisY->Maximum = 50; // X axis maximum
			chart1->ChartAreas[0]->AxisX->Interval = 3; // Interval between each value
			chart1->ChartAreas[0]->AxisY->Interval = 5; // Interval between each value
			chart1->Series["Temp"]->Points->AddXY(second, temp);
			sw->WriteLine(temp);
			counter++;
			second = second + 3;
		}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (serialPort->IsOpen) {
		serialPort->Close();
		MessageBox::Show("Close connection!", "Notice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		sw->Close();

		// Calculate Avarage Temp
		String^ filename1 = origin_path + "\\Temps.txt";
		StreamReader^ readTemp = File::OpenText(filename1);
		array<Double>^ temps = gcnew array<Double>(counter);
		Double Sum;
		for (int i = 0; i < counter; i++) {
			if (i == 0) {
				readTemp->ReadLine();
			}
			else {
				temps[i] = Double::Parse(readTemp->ReadLine());
			}
		}
		for (int i = 1; i < counter; i++) {
			Sum = Sum + temps[i];
		}
		Sum = Sum / (counter - 1);
		String^ ava_temp = Sum.ToString("f");
		//Process::Start(origin_path + "\\Temps.bat - Shortcut");
		//String^ filename1 = origin_path + "\\Temps_Calculated.txt";
		//Thread::Sleep(1000); // Give script sometime to do it's job
		//StreamReader^ readTemps = File::OpenText(filename1);
		textBox4->Text = ava_temp;
		readTemp->Close();
		timer1->Stop();
	}
}
	// Save to SQL Database
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox4->Text == "") {
		MessageBox::Show("All fields are required!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		connection = gcnew SqlConnection(str);
		connection->Open();
		String^ insertQuery = "Insert into Avarage_Temperature([Date & Time],ID, Name, [Avarage Temps]) values (N'"+DateTime::Now+"',N'" + textBox3->Text + "',N'" + textBox2->Text + "',N'" + textBox1->Text + "')";
		SqlCommand^ cmd = gcnew SqlCommand(insertQuery, connection);
		int^ i = cmd->ExecuteNonQuery(); // Return 0 if command execute successfully
		if (i != nullptr) {
			// Reset all fields
			MessageBox::Show("Data save successfully!", "Notice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
		}
		else if (i == nullptr) {
			MessageBox::Show("Data save unsuccessfully!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxSP->SelectedIndex != -1 && comboBoxDB->SelectedIndex != -1 && comboBoxP->SelectedIndex != -1 && comboBoxSB->SelectedIndex != -1 && comboBoxBR->SelectedIndex != -1) {
		// Save user settings to .txt file
		String^ filename = origin_path + "\\User_Settings.txt";
		StreamWriter^ sw = gcnew StreamWriter(filename,false);
		sw->WriteLine(comboBoxSP->Text);
		sw->WriteLine(comboBoxDB->Text);
		sw->WriteLine(comboBoxP->Text);
		sw->WriteLine(comboBoxSB->Text);
		sw->WriteLine(comboBoxBR->Text);
		sw->Close();
		MessageBox::Show("Save settings successfully!", "Noctice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Please select all COM Serial Port Settings!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// Load port settings
	SerialPort^ port = gcnew SerialPort();
	String^ filename1 = origin_path + "\\User_Settings.txt";
	StreamReader^ readUS = File::OpenText(filename1);
	comboBoxSP->Text = readUS->ReadLine();
	comboBoxDB->Text = readUS->ReadLine();
	comboBoxP->Text = readUS->ReadLine();
	comboBoxSB->Text = readUS->ReadLine();
	comboBoxBR->Text = readUS->ReadLine();
	readUS->Close();
}
	
	// Dragging
	bool dragging_1;
	System::Drawing::Point offset_1;

private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
	dragging_1 = true;
	offset_1.X = e_1->X;
	offset_1.Y = e_1->Y;
}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
	if (dragging_1)
	{
		Location = System::Drawing::Point((e_1->X - offset_1.X) + Location.X, (e_1->Y - offset_1.Y) + Location.Y);
	}
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
	dragging_1 = false;
}
private: System::Void comboBoxSP_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("Select which COM port will be using.", comboBoxSP);
}
private: System::Void comboBoxDB_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("The data bits might represent device commands, sensor readings, error messages, and so on. Most serial ports use between five and eight data bits.", comboBoxDB); 
}
private: System::Void comboBoxBR_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("The number of bits that are conveyed or processed per unit of time (bit/s).", comboBoxBR);
}
private: System::Void comboBoxSB_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("Stop bit(s) indicates when the data byte has been transferred.", comboBoxSB);
}
private: System::Void comboBoxP_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("The parity bit provides simple error (parity) checking for the transmitted data.", comboBoxP);
}
private: System::Void button5_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	toolTip1->Show("Remember, You need to declare your personal information first!", button5);
}
};
}
