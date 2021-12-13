#pragma once

namespace Caduceus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Record
	/// </summary>
	public ref class Record : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Record(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Record(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:


	public:
	//SqlConnection^ connection;
	//SqlCommand^ command;
	String^ str_1 = "Data Source=THEBEAST\\SQLEXPRESS;Initial Catalog=DiaChi;Integrated Security=True";
	String^ str_2 = "Data Source=THEBEAST\\SQLEXPRESS;Initial Catalog=Temps;Integrated Security=True";
	
	private: System::Windows::Forms::DataGridView^ dgvTemps;
	
	private: System::Windows::Forms::DataGridView^ dgvPI;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button2;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Record()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
		/// 
		///
		

		
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvTemps = (gcnew System::Windows::Forms::DataGridView());
			this->dgvPI = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTemps))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPI))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Aqua;
			this->button1->Location = System::Drawing::Point(1331, 624);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"RETURN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Record::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Aqua;
			this->button2->Location = System::Drawing::Point(0, 624);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 77);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CONNECT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Record::button2_Click);
			// 
			// dgvTemps
			// 
			this->dgvTemps->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTemps->Location = System::Drawing::Point(23, 356);
			this->dgvTemps->Name = L"dgvTemps";
			this->dgvTemps->ReadOnly = true;
			this->dgvTemps->RowHeadersWidth = 51;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->dgvTemps->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvTemps->RowTemplate->Height = 24;
			this->dgvTemps->Size = System::Drawing::Size(1454, 234);
			this->dgvTemps->TabIndex = 1;
			// 
			// dgvPI
			// 
			this->dgvPI->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPI->Location = System::Drawing::Point(23, 64);
			this->dgvPI->Name = L"dgvPI";
			this->dgvPI->ReadOnly = true;
			this->dgvPI->RowHeadersWidth = 51;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			this->dgvPI->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvPI->RowTemplate->Height = 24;
			this->dgvPI->Size = System::Drawing::Size(1454, 234);
			this->dgvPI->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(17, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PERSONAL INFORMATION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(17, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"TEMPERATURE";
			// 
			// Record
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1500, 700);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvTemps);
			this->Controls->Add(this->dgvPI);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Record";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Record";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Record::Record_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Record::Record_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Record::Record_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTemps))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPI))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
		   
	// Drag form
	bool dragging;
	System::Drawing::Point offset;

	private: System::Void Record_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void Record_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging)
		{
			Location = System::Drawing::Point((e->X - offset.X) + Location.X, (e->Y - offset.Y) + Location.Y);
		}
	}

	private: System::Void Record_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ connection_1;
		SqlCommand^ command_1;
		SqlConnection^ connection_2;
		SqlCommand^ command_2;
		SqlDataAdapter^ adapter_1 = gcnew SqlDataAdapter();
		SqlDataAdapter^ adapter_2 = gcnew SqlDataAdapter();
		DataTable^ table_1 = gcnew DataTable();
		DataTable^ table_2 = gcnew DataTable();

		connection_1 = gcnew SqlConnection(str_1);
		connection_2 = gcnew SqlConnection(str_2);

		connection_1->Open();
		connection_2->Open();

		command_1 = connection_1->CreateCommand();
		command_2 = connection_2->CreateCommand();

		command_1->CommandText = "select * from Record_Official";
		command_2->CommandText = "select * from Avarage_Temperature";
		adapter_1->SelectCommand = command_1;
		adapter_2->SelectCommand = command_2;
		adapter_1->Fill(table_1);
		adapter_2->Fill(table_2);
		dgvPI->DataSource = table_1;
		dgvTemps->DataSource = table_2;

		connection_1->Close();
		connection_2->Close();

	}
};
}
