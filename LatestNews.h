#pragma once

namespace Caduceus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for LatestNews
	/// </summary>
	public ref class LatestNews : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		LatestNews(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		LatestNews(Form^ obj1)
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
		~LatestNews()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LatestNews::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(108, 70);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SHOW";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LatestNews::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(512, 70);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SHOW";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LatestNews::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(916, 70);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(177, 77);
			this->button3->TabIndex = 2;
			this->button3->Text = L"SHOW";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LatestNews::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(916, 254);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(177, 77);
			this->button4->TabIndex = 5;
			this->button4->Text = L"SHOW";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LatestNews::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(512, 254);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(177, 77);
			this->button5->TabIndex = 4;
			this->button5->Text = L"SHOW";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LatestNews::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gainsboro;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(108, 254);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(177, 77);
			this->button6->TabIndex = 3;
			this->button6->Text = L"SHOW";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LatestNews::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gainsboro;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(512, 443);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(177, 77);
			this->button7->TabIndex = 6;
			this->button7->Text = L"SHOW";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LatestNews::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Aquamarine;
			this->label1->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label1->Location = System::Drawing::Point(54, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(289, 31);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Vietnam Coronavirus Cases";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Aquamarine;
			this->label2->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label2->Location = System::Drawing::Point(439, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(267, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"World Coronavirus Cases";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Aquamarine;
			this->label3->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label3->Location = System::Drawing::Point(800, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(322, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Vietnam\'s Ministry of Health";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Aquamarine;
			this->label4->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label4->Location = System::Drawing::Point(54, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(278, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Vietnam\'s Cases Timeline";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Aquamarine;
			this->label5->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label5->Location = System::Drawing::Point(415, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(322, 31);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Realtime Monitor of Covid-19";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Aquamarine;
			this->label6->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label6->Location = System::Drawing::Point(824, 205);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(300, 31);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Hanoi Department of Health";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Aquamarine;
			this->label7->Font = (gcnew System::Drawing::Font(L"Fira Code", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label7->Location = System::Drawing::Point(547, 392);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 31);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Open All";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Fira Code", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Yellow;
			this->button8->Location = System::Drawing::Point(512, 584);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(177, 77);
			this->button8->TabIndex = 14;
			this->button8->Text = L"BACK";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &LatestNews::button8_Click);
			// 
			// LatestNews
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LatestNews";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LatestNews";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LatestNews::LatestNews_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LatestNews::LatestNews_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LatestNews::LatestNews_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	bool dragging;
	Point offset;

	private: System::Void LatestNews_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Enable dragging and get mouse position
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void LatestNews_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Check whether able to move
		if (dragging)
		{
			Location = System::Drawing::Point((e->X - offset.X) + Location.X, (e->Y - offset.Y) + Location.Y);
		}
	}

	private: System::Void LatestNews_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Disable dragging
		dragging = false;
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\Hanoi Department of Health.bat - Shortcut");
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\Realtime Monitor of Covid19.bat - Shortcut");
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\All.bat - Shortcut");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\Vietnam's Cases Timeline.bat - Shortcut");
	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\Vietnam Coronavirus Cases.bat - Shortcut");
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\World Coronavirus Cases.bat - Shortcut");
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("D:\\C++ Examples\\source\\repos\\Caduceus\\Websites\\Vietnam's Ministry of Health.bat - Shortcut");
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	// Return Home
	this->Hide();
	obj->Show();
	}

};
}
