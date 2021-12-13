#pragma once
#include "LatestNews.h"
#include "Temperature.h"
#include "Record.h"

namespace Caduceus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection; // Represent an open connection to a SQL Database
		SqlCommand^ command; // Store procedure to execute on a SQL Database
		String^ str = "Data Source=THEBEAST\\SQLEXPRESS;Initial Catalog=DiaChi;Integrated Security=True"; // Connection string
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(); // Create an Adapter which represents a set of data commands and a database connection that update current database
		int CityCode;
		int TownCode;
		
		String^ gender;


	private: System::Windows::Forms::ComboBox^ comboBoxDistrict;
	public:



	private: System::Windows::Forms::ComboBox^ comboBoxProvince;
	private: System::Windows::Forms::ComboBox^ comboBoxWard;
	private: System::Windows::Forms::RadioButton^ radioF;



	private: System::Windows::Forms::RadioButton^ radioM;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ labelDOB;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelPI;
	private: System::Windows::Forms::Label^ labelAddress;
	private: System::Windows::Forms::Label^ labelHDI;
	private: System::Windows::Forms::ComboBox^ comboBoxNationality;

	private: System::Windows::Forms::TextBox^ textBoxID;


	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::RadioButton^ radioO;
	public:

	public:
		DataTable^ table = gcnew DataTable();

	private: System::Windows::Forms::Label^ labelW;
	private: System::Windows::Forms::Label^ labelD;
	private: System::Windows::Forms::Label^ labelPaC;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPhone;

	private: System::Windows::Forms::Label^ labelN;
	private: System::Windows::Forms::TextBox^ textBoxNoH;


	private: System::Windows::Forms::Label^ labelP;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDOB;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelG;
	private: System::Windows::Forms::TextBox^ textBoxEmail;
	private: System::Windows::Forms::Label^ labelE;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label13;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::ComboBox^ comboBox6;

	private: System::Windows::Forms::ComboBox^ comboBox4;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Button^ button5;











	public:
		String^ origin_path = Application::StartupPath;
		//void loaddata()
		//{
		//	command = (connection->CreateCommand());
		//	command->CommandText = "select * from Sheet_3";
		//	//command->ExecuteNonQuery();
		//	adapter->SelectCommand = command;
		//	table->Clear();
		//	adapter->Fill(table);
		//	dataGridView1->DataSource = table;

		//}

		Form^ obj;
		Home(void)
		{
			InitializeComponent();
			panel3->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		Home(Form^ obj1)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSignOut;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonHome;

	private: System::Windows::Forms::Button^ buttonTemperature;
	private: System::Windows::Forms::Button^ buttonDeclare;




	private: System::Windows::Forms::Button^ buttonLatestNews;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonPrevious;
	private: System::Windows::Forms::Button^ buttonNext;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ buttonUpdate;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelVCD;
	private: System::Windows::Forms::Label^ labelVCC;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Panel^ panel3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->buttonSignOut = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->buttonLatestNews = (gcnew System::Windows::Forms::Button());
			this->buttonTemperature = (gcnew System::Windows::Forms::Button());
			this->buttonDeclare = (gcnew System::Windows::Forms::Button());
			this->buttonHome = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonPrevious = (gcnew System::Windows::Forms::Button());
			this->buttonNext = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelVCD = (gcnew System::Windows::Forms::Label());
			this->labelVCC = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->labelE = (gcnew System::Windows::Forms::Label());
			this->labelG = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPhone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelN = (gcnew System::Windows::Forms::Label());
			this->textBoxNoH = (gcnew System::Windows::Forms::TextBox());
			this->labelW = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->labelPaC = (gcnew System::Windows::Forms::Label());
			this->comboBoxNationality = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->radioO = (gcnew System::Windows::Forms::RadioButton());
			this->radioF = (gcnew System::Windows::Forms::RadioButton());
			this->radioM = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelDOB = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelPI = (gcnew System::Windows::Forms::Label());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->comboBoxWard = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxDistrict = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxProvince = (gcnew System::Windows::Forms::ComboBox());
			this->labelHDI = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonSignOut
			// 
			this->buttonSignOut->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonSignOut->FlatAppearance->BorderSize = 0;
			this->buttonSignOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSignOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSignOut->ForeColor = System::Drawing::Color::Tomato;
			this->buttonSignOut->Location = System::Drawing::Point(0, 630);
			this->buttonSignOut->Name = L"buttonSignOut";
			this->buttonSignOut->Size = System::Drawing::Size(200, 70);
			this->buttonSignOut->TabIndex = 0;
			this->buttonSignOut->Text = L"Sign Out";
			this->buttonSignOut->UseVisualStyleBackColor = true;
			this->buttonSignOut->Click += gcnew System::EventHandler(this, &Home::buttonSignOut_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->AutoScroll = true;
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->panelMenu->Controls->Add(this->button5);
			this->panelMenu->Controls->Add(this->buttonLatestNews);
			this->panelMenu->Controls->Add(this->buttonTemperature);
			this->panelMenu->Controls->Add(this->buttonSignOut);
			this->panelMenu->Controls->Add(this->buttonDeclare);
			this->panelMenu->Controls->Add(this->buttonHome);
			this->panelMenu->Controls->Add(this->panel1);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(200, 700);
			this->panelMenu->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::SandyBrown;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 407);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 70);
			this->button5->TabIndex = 9;
			this->button5->Text = L"           Records";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click_1);
			// 
			// buttonLatestNews
			// 
			this->buttonLatestNews->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonLatestNews->FlatAppearance->BorderSize = 0;
			this->buttonLatestNews->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLatestNews->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLatestNews->ForeColor = System::Drawing::Color::SandyBrown;
			this->buttonLatestNews->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonLatestNews.Image")));
			this->buttonLatestNews->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonLatestNews->Location = System::Drawing::Point(0, 477);
			this->buttonLatestNews->Margin = System::Windows::Forms::Padding(0);
			this->buttonLatestNews->Name = L"buttonLatestNews";
			this->buttonLatestNews->Size = System::Drawing::Size(200, 70);
			this->buttonLatestNews->TabIndex = 7;
			this->buttonLatestNews->Text = L"           Latest News";
			this->buttonLatestNews->UseVisualStyleBackColor = true;
			this->buttonLatestNews->Click += gcnew System::EventHandler(this, &Home::buttonLatestNews_Click);
			// 
			// buttonTemperature
			// 
			this->buttonTemperature->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonTemperature->FlatAppearance->BorderSize = 0;
			this->buttonTemperature->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTemperature->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonTemperature->ForeColor = System::Drawing::Color::SandyBrown;
			this->buttonTemperature->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonTemperature.Image")));
			this->buttonTemperature->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonTemperature->Location = System::Drawing::Point(0, 337);
			this->buttonTemperature->Margin = System::Windows::Forms::Padding(0);
			this->buttonTemperature->Name = L"buttonTemperature";
			this->buttonTemperature->Size = System::Drawing::Size(200, 70);
			this->buttonTemperature->TabIndex = 3;
			this->buttonTemperature->Text = L"          Temperature";
			this->buttonTemperature->UseVisualStyleBackColor = true;
			this->buttonTemperature->Click += gcnew System::EventHandler(this, &Home::buttonTemperature_Click);
			// 
			// buttonDeclare
			// 
			this->buttonDeclare->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDeclare->FlatAppearance->BorderSize = 0;
			this->buttonDeclare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeclare->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDeclare->ForeColor = System::Drawing::Color::SandyBrown;
			this->buttonDeclare->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDeclare.Image")));
			this->buttonDeclare->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonDeclare->Location = System::Drawing::Point(0, 267);
			this->buttonDeclare->Margin = System::Windows::Forms::Padding(0);
			this->buttonDeclare->Name = L"buttonDeclare";
			this->buttonDeclare->Size = System::Drawing::Size(200, 70);
			this->buttonDeclare->TabIndex = 6;
			this->buttonDeclare->Text = L"        Declare";
			this->buttonDeclare->UseVisualStyleBackColor = true;
			this->buttonDeclare->Click += gcnew System::EventHandler(this, &Home::buttonDeclare_Click);
			// 
			// buttonHome
			// 
			this->buttonHome->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonHome->FlatAppearance->BorderSize = 0;
			this->buttonHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHome->ForeColor = System::Drawing::Color::SandyBrown;
			this->buttonHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonHome.Image")));
			this->buttonHome->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHome->Location = System::Drawing::Point(0, 197);
			this->buttonHome->Margin = System::Windows::Forms::Padding(0);
			this->buttonHome->Name = L"buttonHome";
			this->buttonHome->Size = System::Drawing::Size(200, 70);
			this->buttonHome->TabIndex = 2;
			this->buttonHome->Text = L"          HOME";
			this->buttonHome->UseVisualStyleBackColor = true;
			this->buttonHome->Click += gcnew System::EventHandler(this, &Home::buttonHome_Click);
			this->buttonHome->MouseHover += gcnew System::EventHandler(this, &Home::buttonHome_MouseHover);
			this->buttonHome->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::buttonHome_MouseMove);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 200);
			this->panel1->TabIndex = 0;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(994, 0);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(206, 30);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(953, 40);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(340, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(520, 620);
			this->panel2->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 600);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// buttonPrevious
			// 
			this->buttonPrevious->Location = System::Drawing::Point(558, 665);
			this->buttonPrevious->Name = L"buttonPrevious";
			this->buttonPrevious->Size = System::Drawing::Size(25, 25);
			this->buttonPrevious->TabIndex = 5;
			this->buttonPrevious->Text = L"<";
			this->buttonPrevious->UseVisualStyleBackColor = true;
			this->buttonPrevious->Click += gcnew System::EventHandler(this, &Home::buttonPrevious_Click);
			// 
			// buttonNext
			// 
			this->buttonNext->Location = System::Drawing::Point(618, 665);
			this->buttonNext->Name = L"buttonNext";
			this->buttonNext->Size = System::Drawing::Size(25, 25);
			this->buttonNext->TabIndex = 6;
			this->buttonNext->Text = L">";
			this->buttonNext->UseVisualStyleBackColor = true;
			this->buttonNext->Click += gcnew System::EventHandler(this, &Home::buttonNext_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 7000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->BackColor = System::Drawing::Color::Transparent;
			this->buttonUpdate->FlatAppearance->BorderSize = 0;
			this->buttonUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Fira Code", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->ForeColor = System::Drawing::Color::OrangeRed;
			this->buttonUpdate->Location = System::Drawing::Point(978, 639);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(138, 39);
			this->buttonUpdate->TabIndex = 24;
			this->buttonUpdate->Text = L"UPDATE";
			this->buttonUpdate->UseVisualStyleBackColor = false;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &Home::buttonUpdate_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Fira Code", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(899, 577);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(290, 38);
			this->textBox4->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Fira Code", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(899, 488);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(290, 38);
			this->textBox3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Fira Code", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(899, 398);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(290, 38);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Fira Code", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(899, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(290, 38);
			this->textBox1->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(895, 539);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(260, 23);
			this->label3->TabIndex = 19;
			this->label3->Text = L"World Coronavirus Deaths";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(895, 450);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(253, 23);
			this->label4->TabIndex = 18;
			this->label4->Text = L"World Coronavirus Cases";
			// 
			// labelVCD
			// 
			this->labelVCD->AutoSize = true;
			this->labelVCD->BackColor = System::Drawing::Color::Transparent;
			this->labelVCD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVCD->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelVCD->Location = System::Drawing::Point(895, 359);
			this->labelVCD->Name = L"labelVCD";
			this->labelVCD->Size = System::Drawing::Size(287, 23);
			this->labelVCD->TabIndex = 17;
			this->labelVCD->Text = L"Vietnam Coronavirus Deaths";
			// 
			// labelVCC
			// 
			this->labelVCC->AutoSize = true;
			this->labelVCC->BackColor = System::Drawing::Color::Transparent;
			this->labelVCC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelVCC->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelVCC->Location = System::Drawing::Point(895, 270);
			this->labelVCC->Name = L"labelVCC";
			this->labelVCC->Size = System::Drawing::Size(280, 23);
			this->labelVCC->TabIndex = 16;
			this->labelVCC->Text = L"Vietnam Coronavirus Cases";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 14000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Home::timer2_Tick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->textBoxEmail);
			this->panel3->Controls->Add(this->labelE);
			this->panel3->Controls->Add(this->labelG);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->dateTimePickerDOB);
			this->panel3->Controls->Add(this->labelP);
			this->panel3->Controls->Add(this->maskedTextBoxPhone);
			this->panel3->Controls->Add(this->labelN);
			this->panel3->Controls->Add(this->textBoxNoH);
			this->panel3->Controls->Add(this->labelW);
			this->panel3->Controls->Add(this->labelD);
			this->panel3->Controls->Add(this->labelPaC);
			this->panel3->Controls->Add(this->comboBoxNationality);
			this->panel3->Controls->Add(this->textBoxID);
			this->panel3->Controls->Add(this->textBoxName);
			this->panel3->Controls->Add(this->radioO);
			this->panel3->Controls->Add(this->radioF);
			this->panel3->Controls->Add(this->radioM);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->labelDOB);
			this->panel3->Controls->Add(this->labelID);
			this->panel3->Controls->Add(this->labelName);
			this->panel3->Controls->Add(this->labelPI);
			this->panel3->Controls->Add(this->labelAddress);
			this->panel3->Controls->Add(this->comboBoxWard);
			this->panel3->Controls->Add(this->comboBoxDistrict);
			this->panel3->Controls->Add(this->comboBoxProvince);
			this->panel3->Controls->Add(this->labelHDI);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(200, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1000, 700);
			this->panel3->TabIndex = 25;
			this->panel3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel3_MouseDown);
			this->panel3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel3_MouseMove);
			this->panel3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel3_MouseUp);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->comboBox5);
			this->panel4->Controls->Add(this->comboBox7);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->dateTimePicker2);
			this->panel4->Controls->Add(this->comboBox6);
			this->panel4->Controls->Add(this->comboBox4);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1000, 700);
			this->panel4->TabIndex = 34;
			this->panel4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel4_MouseDown);
			this->panel4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel4_MouseMove);
			this->panel4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel4_MouseUp);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Yellow;
			this->label15->Location = System::Drawing::Point(447, 337);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 28);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Start date";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Yellow;
			this->label14->Location = System::Drawing::Point(435, 265);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 28);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Vehicle code";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Yellow;
			this->label12->Location = System::Drawing::Point(460, 197);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 28);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Vehicle";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Yellow;
			this->label9->Location = System::Drawing::Point(651, 337);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 28);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Ward";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Yellow;
			this->label10->Location = System::Drawing::Point(651, 267);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 28);
			this->label10->TabIndex = 25;
			this->label10->Text = L"District";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Yellow;
			this->label11->Location = System::Drawing::Point(651, 197);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 28);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Province\\City";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(655, 307);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(284, 31);
			this->comboBox3->TabIndex = 23;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox3_SelectedIndexChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(655, 377);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(284, 31);
			this->comboBox5->TabIndex = 22;
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(655, 237);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(284, 31);
			this->comboBox7->TabIndex = 21;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox7_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::PaleGreen;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::OrangeRed;
			this->label13->Location = System::Drawing::Point(166, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(641, 39);
			this->label13->TabIndex = 20;
			this->label13->Text = L"DEPARTED LOCATION AND DESTINATION";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Yellow;
			this->label8->Location = System::Drawing::Point(60, 337);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 28);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Ward";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(60, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 28);
			this->label7->TabIndex = 14;
			this->label7->Text = L"District";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PaleGreen;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Navy;
			this->label5->Location = System::Drawing::Point(696, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 37);
			this->label5->TabIndex = 13;
			this->label5->Text = L"DESTINATION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(60, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 28);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Province\\City";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(47, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 37);
			this->label1->TabIndex = 11;
			this->label1->Text = L"DEPARTED LOCATION";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(412, 304);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(177, 30);
			this->textBox5->TabIndex = 9;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(401, 380);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker2->TabIndex = 8;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(64, 307);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(284, 31);
			this->comboBox6->TabIndex = 7;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox6_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(64, 377);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(284, 31);
			this->comboBox4->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Planes", L"Train", L"Coach", L"Ships", L"Car",
					L"Motorbike", L"Personal"
			});
			this->comboBox2->Location = System::Drawing::Point(412, 234);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 31);
			this->comboBox2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(64, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(284, 31);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Aqua;
			this->button3->Location = System::Drawing::Point(831, 635);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 66);
			this->button3->TabIndex = 1;
			this->button3->Text = L"BACK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(416, 635);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 66);
			this->button2->TabIndex = 0;
			this->button2->Text = L"SAVE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click_1);
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxEmail->Location = System::Drawing::Point(607, 571);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(284, 30);
			this->textBoxEmail->TabIndex = 33;
			// 
			// labelE
			// 
			this->labelE->AutoSize = true;
			this->labelE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelE->ForeColor = System::Drawing::Color::Yellow;
			this->labelE->Location = System::Drawing::Point(602, 540);
			this->labelE->Name = L"labelE";
			this->labelE->Size = System::Drawing::Size(64, 28);
			this->labelE->TabIndex = 32;
			this->labelE->Text = L"Email";
			// 
			// labelG
			// 
			this->labelG->AutoSize = true;
			this->labelG->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelG->ForeColor = System::Drawing::Color::Yellow;
			this->labelG->Location = System::Drawing::Point(59, 477);
			this->labelG->Name = L"labelG";
			this->labelG->Size = System::Drawing::Size(80, 28);
			this->labelG->TabIndex = 30;
			this->labelG->Text = L"Gender";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(831, 635);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 66);
			this->button1->TabIndex = 29;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click_1);
			// 
			// dateTimePickerDOB
			// 
			this->dateTimePickerDOB->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerDOB->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePickerDOB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePickerDOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerDOB->Location = System::Drawing::Point(64, 377);
			this->dateTimePickerDOB->Name = L"dateTimePickerDOB";
			this->dateTimePickerDOB->Size = System::Drawing::Size(285, 30);
			this->dateTimePickerDOB->TabIndex = 28;
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP->ForeColor = System::Drawing::Color::Yellow;
			this->labelP->Location = System::Drawing::Point(602, 477);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(71, 28);
			this->labelP->TabIndex = 27;
			this->labelP->Text = L"Phone";
			// 
			// maskedTextBoxPhone
			// 
			this->maskedTextBoxPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBoxPhone->Location = System::Drawing::Point(607, 507);
			this->maskedTextBoxPhone->Mask = L"0000000000";
			this->maskedTextBoxPhone->Name = L"maskedTextBoxPhone";
			this->maskedTextBoxPhone->Size = System::Drawing::Size(284, 30);
			this->maskedTextBoxPhone->TabIndex = 25;
			this->maskedTextBoxPhone->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// labelN
			// 
			this->labelN->AutoSize = true;
			this->labelN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelN->ForeColor = System::Drawing::Color::Yellow;
			this->labelN->Location = System::Drawing::Point(602, 407);
			this->labelN->Name = L"labelN";
			this->labelN->Size = System::Drawing::Size(367, 28);
			this->labelN->TabIndex = 24;
			this->labelN->Text = L"Number of houses, streets, locality, ...";
			// 
			// textBoxNoH
			// 
			this->textBoxNoH->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNoH->Location = System::Drawing::Point(607, 447);
			this->textBoxNoH->Name = L"textBoxNoH";
			this->textBoxNoH->Size = System::Drawing::Size(284, 30);
			this->textBoxNoH->TabIndex = 23;
			// 
			// labelW
			// 
			this->labelW->AutoSize = true;
			this->labelW->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelW->ForeColor = System::Drawing::Color::Yellow;
			this->labelW->Location = System::Drawing::Point(602, 337);
			this->labelW->Name = L"labelW";
			this->labelW->Size = System::Drawing::Size(62, 28);
			this->labelW->TabIndex = 22;
			this->labelW->Text = L"Ward";
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelD->ForeColor = System::Drawing::Color::Yellow;
			this->labelD->Location = System::Drawing::Point(602, 267);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(88, 28);
			this->labelD->TabIndex = 21;
			this->labelD->Text = L"District ";
			// 
			// labelPaC
			// 
			this->labelPaC->AutoSize = true;
			this->labelPaC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPaC->ForeColor = System::Drawing::Color::Yellow;
			this->labelPaC->Location = System::Drawing::Point(602, 197);
			this->labelPaC->Name = L"labelPaC";
			this->labelPaC->Size = System::Drawing::Size(140, 28);
			this->labelPaC->TabIndex = 20;
			this->labelPaC->Text = L"Province\\City";
			// 
			// comboBoxNationality
			// 
			this->comboBoxNationality->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxNationality->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxNationality->FormattingEnabled = true;
			this->comboBoxNationality->Location = System::Drawing::Point(65, 446);
			this->comboBoxNationality->Name = L"comboBoxNationality";
			this->comboBoxNationality->Size = System::Drawing::Size(284, 31);
			this->comboBoxNationality->TabIndex = 18;
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxID->Location = System::Drawing::Point(65, 307);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(284, 30);
			this->textBoxID->TabIndex = 16;
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(65, 237);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(284, 30);
			this->textBoxName->TabIndex = 15;
			// 
			// radioO
			// 
			this->radioO->AutoSize = true;
			this->radioO->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioO->ForeColor = System::Drawing::Color::DimGray;
			this->radioO->Location = System::Drawing::Point(270, 510);
			this->radioO->Name = L"radioO";
			this->radioO->Size = System::Drawing::Size(77, 27);
			this->radioO->TabIndex = 14;
			this->radioO->TabStop = true;
			this->radioO->Text = L"Other";
			this->radioO->UseVisualStyleBackColor = true;
			// 
			// radioF
			// 
			this->radioF->AutoSize = true;
			this->radioF->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioF->ForeColor = System::Drawing::Color::Pink;
			this->radioF->Location = System::Drawing::Point(158, 510);
			this->radioF->Name = L"radioF";
			this->radioF->Size = System::Drawing::Size(88, 27);
			this->radioF->TabIndex = 13;
			this->radioF->TabStop = true;
			this->radioF->Text = L"Female";
			this->radioF->UseVisualStyleBackColor = true;
			// 
			// radioM
			// 
			this->radioM->AutoSize = true;
			this->radioM->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioM->ForeColor = System::Drawing::Color::RoyalBlue;
			this->radioM->Location = System::Drawing::Point(64, 510);
			this->radioM->Name = L"radioM";
			this->radioM->Size = System::Drawing::Size(70, 27);
			this->radioM->TabIndex = 12;
			this->radioM->TabStop = true;
			this->radioM->Text = L"Male";
			this->radioM->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(60, 407);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 28);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Nationality";
			// 
			// labelDOB
			// 
			this->labelDOB->AutoSize = true;
			this->labelDOB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDOB->ForeColor = System::Drawing::Color::Yellow;
			this->labelDOB->Location = System::Drawing::Point(60, 337);
			this->labelDOB->Name = L"labelDOB";
			this->labelDOB->Size = System::Drawing::Size(137, 28);
			this->labelDOB->TabIndex = 10;
			this->labelDOB->Text = L"Date of Birth";
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->ForeColor = System::Drawing::Color::Yellow;
			this->labelID->Location = System::Drawing::Point(60, 267);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(262, 28);
			this->labelID->TabIndex = 9;
			this->labelID->Text = L"Passport number / ID card";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->ForeColor = System::Drawing::Color::Yellow;
			this->labelName->Location = System::Drawing::Point(60, 197);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(289, 28);
			this->labelName->TabIndex = 8;
			this->labelName->Text = L"Full name (CAPITAL LETTERS)";
			// 
			// labelPI
			// 
			this->labelPI->AutoSize = true;
			this->labelPI->BackColor = System::Drawing::Color::PaleGreen;
			this->labelPI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPI->ForeColor = System::Drawing::Color::Navy;
			this->labelPI->Location = System::Drawing::Point(16, 140);
			this->labelPI->Name = L"labelPI";
			this->labelPI->Size = System::Drawing::Size(376, 37);
			this->labelPI->TabIndex = 7;
			this->labelPI->Text = L"PERSONAL INFORMATION";
			this->labelPI->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->BackColor = System::Drawing::Color::PaleGreen;
			this->labelAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddress->ForeColor = System::Drawing::Color::Navy;
			this->labelAddress->Location = System::Drawing::Point(514, 140);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(470, 37);
			this->labelAddress->TabIndex = 6;
			this->labelAddress->Text = L"CONTACT ADDRESS IN VIETNAM";
			this->labelAddress->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxWard
			// 
			this->comboBoxWard->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxWard->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxWard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxWard->FormattingEnabled = true;
			this->comboBoxWard->Location = System::Drawing::Point(607, 374);
			this->comboBoxWard->Name = L"comboBoxWard";
			this->comboBoxWard->Size = System::Drawing::Size(284, 33);
			this->comboBoxWard->TabIndex = 5;
			// 
			// comboBoxDistrict
			// 
			this->comboBoxDistrict->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxDistrict->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDistrict->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxDistrict->FormattingEnabled = true;
			this->comboBoxDistrict->Location = System::Drawing::Point(607, 304);
			this->comboBoxDistrict->Name = L"comboBoxDistrict";
			this->comboBoxDistrict->Size = System::Drawing::Size(284, 33);
			this->comboBoxDistrict->TabIndex = 4;
			this->comboBoxDistrict->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBoxDistrict_SelectedIndexChanged);
			// 
			// comboBoxProvince
			// 
			this->comboBoxProvince->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxProvince->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxProvince->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxProvince->FormattingEnabled = true;
			this->comboBoxProvince->Location = System::Drawing::Point(607, 234);
			this->comboBoxProvince->Name = L"comboBoxProvince";
			this->comboBoxProvince->Size = System::Drawing::Size(284, 33);
			this->comboBoxProvince->TabIndex = 3;
			this->comboBoxProvince->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBoxProvince_SelectedIndexChanged);
			// 
			// labelHDI
			// 
			this->labelHDI->AutoSize = true;
			this->labelHDI->BackColor = System::Drawing::Color::PaleGreen;
			this->labelHDI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHDI->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelHDI->Location = System::Drawing::Point(186, 40);
			this->labelHDI->Name = L"labelHDI";
			this->labelHDI->Size = System::Drawing::Size(645, 39);
			this->labelHDI->TabIndex = 0;
			this->labelHDI->Text = L"PERSONAL INFORMATION DECLARATION";
			// 
			// Home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelVCD);
			this->Controls->Add(this->labelVCC);
			this->Controls->Add(this->buttonNext);
			this->Controls->Add(this->buttonPrevious);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->panelMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"       Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseUp);
			this->panelMenu->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	// Back to Sign In form
	private: System::Void buttonSignOut_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}

	// Dragging the Form
	bool dragging;
	System::Drawing::Point offset;
	
	private: System::Void Home_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Enable dragging and get mouse position
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void Home_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Check whether able to move
		if (dragging)
		{
			Location = System::Drawing::Point((e->X - offset.X) + Location.X, (e->Y - offset.Y) + Location.Y);
		}
	}
	private: System::Void Home_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Disable dragging
		dragging = false;
	}
		   
		   
	array<String^>^ files;
	String^ path = "D:\\C++ Examples\\source\\repos\\Caduceus\\Pictures";
	int currentIndex;

	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		// Hide panels
		panel3->Hide(); 
		panel4->Hide();


		// Connect to MySQL Database
		connection = gcnew SqlConnection(str); // Initialize connection
		connection->Open(); // Open the connection
		SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_1", connection); // Initializes a new instance of the SqlCommand class with the text of the query and a SqlConnection.
		SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd); // Pass command to SQL Database
		DataTable^ dt = gcnew DataTable(); // Initialize a new data table
		sda->Fill(dt); // Since SqlDataAdapter will return data from SQL Database, pass it to dt table
		connection->Close(); // Close connection after retrieve data
		comboBoxProvince->DisplayMember = "City"; // Pass City colum's values to comboBoxProvince
		comboBoxProvince->ValueMember = "CityCode"; // Set each of the above value with it's ID as value
		comboBoxProvince->DataSource = dt; // Specify what data table we are using

		connection = gcnew SqlConnection(str);
		connection->Open();
		SqlCommand^ cmd_1 = gcnew SqlCommand("select * from Nationalities", connection);
		SqlDataAdapter^ sda_1 = gcnew SqlDataAdapter(cmd_1);
		DataTable^ dt_1 = gcnew DataTable();
		sda_1->Fill(dt_1);
		connection->Close();
		comboBoxNationality->DisplayMember = "Nationalities";
		comboBoxNationality->ValueMember = "Nationalities";
		comboBoxNationality->DataSource = dt_1;

		connection = gcnew SqlConnection(str);
		connection->Open();
		SqlCommand^ cmd_2 = gcnew SqlCommand("select * from Sheet_1", connection);
		SqlDataAdapter^ sda_2 = gcnew SqlDataAdapter(cmd);
		DataTable^ dt_2 = gcnew DataTable();
		sda->Fill(dt_2);
		connection->Close();
		comboBox1->DisplayMember = "City";
		comboBox1->ValueMember = "CityCode";
		comboBox1->DataSource = dt_2;

		connection = gcnew SqlConnection(str);
		connection->Open();
		SqlCommand^ cmd_3 = gcnew SqlCommand("select * from Sheet_1", connection);
		SqlDataAdapter^ sda_3 = gcnew SqlDataAdapter(cmd);
		DataTable^ dt_3 = gcnew DataTable();
		sda->Fill(dt_3);
		connection->Close();
		comboBox7->DisplayMember = "City";
		comboBox7->ValueMember = "CityCode";
		comboBox7->DataSource = dt_3;


		Process::Start(origin_path + "\\Covid19_Cases\\VN_Cases.bat - Shortcut"); // Start Python Script which return number of Covid cases in VN
		Process::Start(origin_path + "\\Covid19_Cases\\World_Cases.bat - Shortcut"); // Start Python Script which return number of Covid cases in the World

		String^ filename1 = origin_path + "\\Covid19_Cases\\VN_Cases.txt"; 
		String^ filename2 = origin_path + "\\Covid19_Cases\\World_Cases.txt";

		StreamReader^ readfile1 = File::OpenText(filename1);
		StreamReader^ readfile2 = File::OpenText(filename2);

		// Declare two arrays which contain two string each
		array<String^>^ list_1 = gcnew array<String^>(2); 
		array<String^>^ list_2 = gcnew array<String^>(2);

		for (int i = 0; i < 2; i++)
		{
			list_1[i] = readfile1->ReadLine();
			list_2[i] = readfile2->ReadLine();
		}

		textBox1->Text = list_1[0]; // Number of Case in VN
		textBox2->Text = list_1[1]; // Number of Death in VN
		textBox3->Text = list_2[0]; // Number of Case in the World
		textBox4->Text = list_2[1]; // Number of Death in the World

		readfile1->Close();
		readfile2->Close();

		files = System::IO::Directory::GetFiles(path); // Get all the pictures
		pictureBox1->ImageLocation = files[0]; // Show the first picture
		this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		currentIndex = 0; // Set the index

	}
	private: System::Void buttonHome_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
		this->Show();
	}
	private: System::Void buttonTemperature_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show Temperature Taker Form
		Temperature^ form2 = gcnew Temperature(this);
		form2->Show();
		this->Hide();
	}
	private: System::Void buttonHome_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->buttonHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
			static_cast<System::Int32>(static_cast<System::Byte>(122)));
	}
	private: System::Void buttonHome_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->buttonHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
			static_cast<System::Int32>(static_cast<System::Byte>(122)));
	}

	private: System::Void buttonPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentIndex != 0) {
			currentIndex--;
			pictureBox1->ImageLocation = files[currentIndex];
			this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		}
		else if (currentIndex == 0) {
			currentIndex = files->Length - 1; // Index of array always start at 0
			pictureBox1->ImageLocation = files[currentIndex];
			this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		}


	}
	private: System::Void buttonNext_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentIndex != files->Length - 1) {
			currentIndex++;
			pictureBox1->ImageLocation = files[currentIndex];
			this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		}
		else if (currentIndex == files->Length - 1) {
			currentIndex = 0; // Set the index back to 0
			pictureBox1->ImageLocation = files[currentIndex];
			this->pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
		}

	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Change picture every 7 seconds
		buttonNext->PerformClick();
	}
	private: System::Void buttonLatestNews_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show Latest News Form
		LatestNews^ form1 = gcnew LatestNews(this);
		form1->Show();
		this->Hide();
	}

	private: System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		// Update the latest statistic
		Process::Start(origin_path + "\\Covid19_Cases\\VN_Cases.bat - Shortcut");
		Process::Start(origin_path + "\\Covid19_Cases\\World_Cases.bat - Shortcut");

		String^ filename1 = origin_path + "\\Covid19_Cases\\VN_Cases.txt";
		String^ filename2 = origin_path + "\\Covid19_Cases\\World_Cases.txt";

		StreamReader^ readfile1 = File::OpenText(filename1);
		StreamReader^ readfile2 = File::OpenText(filename2);

		array<String^>^ list_1 = gcnew array<String^>(2);
		array<String^>^ list_2 = gcnew array<String^>(2);

		for (int i = 0; i < 2; i++)
		{
			list_1[i] = readfile1->ReadLine();
			list_2[i] = readfile2->ReadLine();
		}

		textBox1->Text = list_1[0];
		textBox2->Text = list_1[1];
		textBox3->Text = list_2[0];
		textBox4->Text = list_2[1];

		readfile1->Close();
		readfile2->Close();
	}

	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		// Update the statistic every 14 seconds
		buttonUpdate->PerformClick(); 
	}

	private: System::Void buttonDeclare_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show Declare Panel
		panel3->Show(); 
	}

	private: System::Void comboBoxProvince_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Everytime the selected value of comboBoxProvince change, the values of comboBoxDistrict will change too
		if (comboBoxProvince->SelectedValue->ToString() != nullptr) {

			// Selected value because we set each City to it's ID which is CityCode
			CityCode = Convert::ToInt32(comboBoxProvince->SelectedValue->ToString()); // Convert current CityCode to string
			connection = gcnew SqlConnection(str);
			connection->Open();

			// Declare command object with parameter
			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_2 where CityCode = @CityCode", connection);
			// Let the SqlCommand object know about the SqlParameter by assigning the SqlParameter object to the Parameters property of the SqlCommand object.
			cmd->Parameters->AddWithValue("CityCode", CityCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBoxDistrict->DisplayMember = "Town";
			comboBoxDistrict->ValueMember = "TownCode";
			comboBoxDistrict->DataSource = dt;

		}
	}

	private: System::Void comboBoxDistrict_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Everytime the selected value of comboBoxDistrict change, the values of comboBoxWard will change too
		if (comboBoxDistrict->SelectedValue->ToString() != nullptr) {
			TownCode = Convert::ToInt32(comboBoxDistrict->SelectedValue->ToString());
			connection = gcnew SqlConnection(str);
			connection->Open();

			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_3 where TownCode = @TownCode", connection);
			cmd->Parameters->AddWithValue("TownCode", TownCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBoxWard->DisplayMember = "Village";
			comboBoxWard->ValueMember = "TownCode";
			comboBoxWard->DataSource = dt;
		}
	}
		  
	// Dragging Declare Panel
	bool dragging_1;
	System::Drawing::Point offset_1;

	private: System::Void panel3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
		// Enable dragging and get mouse position
		dragging_1 = true;
		offset_1.X = e_1->X;
		offset_1.Y = e_1->Y;

	}
	private: System::Void panel3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
		// Dheck whether able to move
		if (dragging_1)
		{
			Location = System::Drawing::Point((e_1->X - offset_1.X) + Location.X, (e_1->Y - offset_1.Y) + Location.Y);
		}
	}

	private: System::Void panel3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_1) {
		// Disable dragging
		dragging_1 = false;
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ date = (dateTimePickerDOB->Value).ToString();
		if (textBoxName->Text == "" || textBoxID->Text == "" || date == "" || comboBoxNationality->SelectedValue == "" || comboBoxProvince->SelectedValue == "" || comboBoxDistrict->SelectedValue == "" || comboBoxWard->SelectedValue == "" || textBoxNoH->Text == "" || maskedTextBoxPhone->Text == "" || textBoxEmail->Text == "" || (radioM->Checked == false && radioF->Checked == false && radioO->Checked == false)) {
			// Check if all field are filled or not
			MessageBox::Show("All fields are required!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			if (radioM->Checked == true) {
				gender = "Male";
			}
			else if (radioF->Checked == true) {
				gender = "Female";
			}
			else if (radioO->Checked == true) {
				gender = "Other";
			}
			panel4->Show();
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Switch to previous panel
		panel4->Hide();
		panel3->Show();
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ date = (dateTimePickerDOB->Value).ToString();
		date = date->Substring(0, 10); // Only get the date
		String^ date_1 = (dateTimePicker2->Value).ToString();
		if (comboBox1->SelectedValue == "" || comboBox6->SelectedValue == "" || comboBox4->SelectedValue == "" || comboBox7->SelectedValue == "" || comboBox3->SelectedValue == "" || comboBox5->SelectedValue == "" || comboBox2->SelectedValue == "" || date_1 == "") {
			// Check if all field are filled or not
			MessageBox::Show("All fields are required!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			connection = gcnew SqlConnection(str);
			connection->Open();
			String^ insertQuery = "Insert into Record_Official(Nationalities, [Date & Time], ID, Name, DOB, Gender, Province, District, Ward, [Number of Location], Phone, Email, Vehicle, [Departure (Province)], [Departure (District)], [Departure (Ward)], [Destination (Province)], [Destination (District)], [Destination (Ward)], [Vehicle code], [Start date])";
			String^ insertQuery_1 = "values (N'" + comboBoxNationality->SelectedValue + "',N'" + DateTime::Now + "',N'" + textBoxID->Text + "',N'" + textBoxName->Text + "',N'" + date + "',N'" + gender + "',N'" + comboBoxProvince->Text + "',N'" + comboBoxDistrict->Text + "',N'" + comboBoxWard->Text + "',N'" + textBoxNoH->Text + "',N'" + maskedTextBoxPhone->Text + "',N'" + textBoxEmail->Text + "',N'" + comboBox2->Text + "',N'" + comboBox1->Text + "',N'" + comboBox6->Text + "',N'" + comboBox4->Text + "',N'" + comboBox7->Text + "',N'" + comboBox3->Text + "',N'" + comboBox5->Text + "',N'" + textBox5->Text + "',N'" + date_1 + "')";
			SqlCommand^ cmd = gcnew SqlCommand(insertQuery + insertQuery_1, connection);
			int^ i = cmd->ExecuteNonQuery();
			
			if (i != nullptr) {
				MessageBox::Show("Data save successfully!", "Notice!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Reset all fields
				textBoxName->Text = "";
				textBoxID->Text = "";
				dateTimePickerDOB->ResetText();
				comboBoxNationality->ResetText();
				radioF->Checked = false;
				radioM->Checked = false;
				radioO->Checked = false;
				comboBoxProvince->ResetText();
				comboBoxDistrict->ResetText();
				comboBoxWard->ResetText();
				textBoxNoH->Text = "";
				maskedTextBoxPhone->ResetText();
				textBoxEmail->Text = "";
				comboBox1->ResetText();
				comboBox6->ResetText();
				comboBox4->ResetText();
				comboBox7->ResetText();
				comboBox3->ResetText();
				comboBox5->ResetText();
				comboBox2->ResetText();
				textBox5->Text = "";
				dateTimePicker2->ResetText();
				panel4->Hide();
				panel3->Show();
			}
			else if (i == nullptr) {
				MessageBox::Show("Data save unsuccessfully!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	// Dragging Location Panel
	bool dragging_2;
	System::Drawing::Point offset_2;

	private: System::Void panel4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_2) {
		// Enable dragging and get mouse position
		dragging_2 = true;
		offset_2.X = e_2->X;
		offset_2.Y = e_2->Y;
	}

	private: System::Void panel4_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_2) {
		// Check whether able to move
		if (dragging_2)
		{
			Location = System::Drawing::Point((e_2->X - offset_2.X) + Location.X, (e_2->Y - offset_2.Y) + Location.Y);
		}
	}

	private: System::Void panel4_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e_2) {
		// Disable dragging
		dragging_2 = false;
	}

	private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox6->SelectedValue->ToString() != nullptr) {
			TownCode = Convert::ToInt32(comboBox6->SelectedValue->ToString());
			connection = gcnew SqlConnection(str);
			connection->Open();

			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_3 where TownCode = @TownCode", connection);
			cmd->Parameters->AddWithValue("TownCode", TownCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBox4->DisplayMember = "Village";
			comboBox4->ValueMember = "TownCode";
			comboBox4->DataSource = dt;
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedValue->ToString() != nullptr) {
			CityCode = Convert::ToInt32(comboBox1->SelectedValue->ToString());
			connection = gcnew SqlConnection(str);
			connection->Open();

			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_2 where CityCode = @CityCode", connection);
			cmd->Parameters->AddWithValue("CityCode", CityCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBox6->DisplayMember = "Town";
			comboBox6->ValueMember = "TownCode";
			comboBox6->DataSource = dt;
		}
	}
	private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox7->SelectedValue->ToString() != nullptr) {
			CityCode = Convert::ToInt32(comboBox7->SelectedValue->ToString());
			connection = gcnew SqlConnection(str);
			connection->Open();

			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_2 where CityCode = @CityCode", connection);
			cmd->Parameters->AddWithValue("CityCode", CityCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBox3->DisplayMember = "Town";
			comboBox3->ValueMember = "TownCode";
			comboBox3->DataSource = dt;
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox3->SelectedValue->ToString() != nullptr) {
			TownCode = Convert::ToInt32(comboBox3->SelectedValue->ToString());
			connection = gcnew SqlConnection(str);
			connection->Open();

			SqlCommand^ cmd = gcnew SqlCommand("select * from Sheet_3 where TownCode = @TownCode", connection);
			cmd->Parameters->AddWithValue("TownCode", TownCode);
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			connection->Close();
			comboBox5->DisplayMember = "Village";
			comboBox5->ValueMember = "TownCode";
			comboBox5->DataSource = dt;
		}
	}

	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Show Record Form
		Record^ form3 = gcnew Record(this);
		form3->Show();
		this->Hide();
	}
};
}