#pragma once
#include "TermsandConditions.h"
#include "Home.h"
namespace Caduceus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ origin_path = System::IO::Path::GetDirectoryName(Application::ExecutablePath);
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

	private: System::Windows::Forms::Button^ closeButton;
	private: System::Windows::Forms::Label^ labelSignIn;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::TextBox^ textBoxUsername;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::Label^ labelTandC;
	private: System::Windows::Forms::CheckBox^ checkBoxAgree;
	private: System::Windows::Forms::Button^ buttonSignIn;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->labelSignIn = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->labelTandC = (gcnew System::Windows::Forms::Label());
			this->checkBoxAgree = (gcnew System::Windows::Forms::CheckBox());
			this->buttonSignIn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// closeButton
			// 
			this->closeButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->closeButton->BackColor = System::Drawing::SystemColors::Control;
			this->closeButton->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->closeButton->ForeColor = System::Drawing::Color::Red;
			this->closeButton->Location = System::Drawing::Point(757, 437);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(125, 50);
			this->closeButton->TabIndex = 0;
			this->closeButton->Text = L"EXIT";
			this->closeButton->UseVisualStyleBackColor = false;
			this->closeButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// labelSignIn
			// 
			this->labelSignIn->AutoSize = true;
			this->labelSignIn->BackColor = System::Drawing::Color::Transparent;
			this->labelSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSignIn->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelSignIn->Location = System::Drawing::Point(624, 177);
			this->labelSignIn->Name = L"labelSignIn";
			this->labelSignIn->Size = System::Drawing::Size(174, 46);
			this->labelSignIn->TabIndex = 4;
			this->labelSignIn->Text = L"SIGN IN";
			this->labelSignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->BackColor = System::Drawing::Color::Transparent;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelUsername->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelUsername->Location = System::Drawing::Point(627, 242);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(110, 25);
			this->labelUsername->TabIndex = 5;
			this->labelUsername->Text = L"Username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->BackColor = System::Drawing::Color::White;
			this->textBoxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxUsername->Location = System::Drawing::Point(632, 270);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(250, 29);
			this->textBoxUsername->TabIndex = 6;
			this->textBoxUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxUsername_KeyDown);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::Color::White;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBoxPassword->Location = System::Drawing::Point(632, 349);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(250, 29);
			this->textBoxPassword->TabIndex = 8;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->labelPassword->ForeColor = System::Drawing::Color::OrangeRed;
			this->labelPassword->Location = System::Drawing::Point(627, 321);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(106, 25);
			this->labelPassword->TabIndex = 7;
			this->labelPassword->Text = L"Password";
			this->labelPassword->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTandC
			// 
			this->labelTandC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelTandC->AutoSize = true;
			this->labelTandC->BackColor = System::Drawing::Color::Transparent;
			this->labelTandC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelTandC->ForeColor = System::Drawing::Color::Blue;
			this->labelTandC->Location = System::Drawing::Point(738, 401);
			this->labelTandC->Margin = System::Windows::Forms::Padding(0);
			this->labelTandC->Name = L"labelTandC";
			this->labelTandC->Size = System::Drawing::Size(174, 18);
			this->labelTandC->TabIndex = 10;
			this->labelTandC->Text = L"Terms and Conditions";
			this->labelTandC->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// checkBoxAgree
			// 
			this->checkBoxAgree->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBoxAgree->AutoSize = true;
			this->checkBoxAgree->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxAgree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->checkBoxAgree->Location = System::Drawing::Point(632, 400);
			this->checkBoxAgree->Margin = System::Windows::Forms::Padding(0);
			this->checkBoxAgree->Name = L"checkBoxAgree";
			this->checkBoxAgree->Size = System::Drawing::Size(115, 22);
			this->checkBoxAgree->TabIndex = 11;
			this->checkBoxAgree->Text = L"I agree to the";
			this->checkBoxAgree->UseVisualStyleBackColor = false;
			this->checkBoxAgree->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxAgree_CheckedChanged);
			// 
			// buttonSignIn
			// 
			this->buttonSignIn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonSignIn->Enabled = false;
			this->buttonSignIn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->buttonSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->buttonSignIn->ForeColor = System::Drawing::Color::Red;
			this->buttonSignIn->Location = System::Drawing::Point(632, 437);
			this->buttonSignIn->Name = L"buttonSignIn";
			this->buttonSignIn->Size = System::Drawing::Size(125, 50);
			this->buttonSignIn->TabIndex = 12;
			this->buttonSignIn->Text = L"Sign In";
			this->buttonSignIn->UseVisualStyleBackColor = true;
			this->buttonSignIn->Click += gcnew System::EventHandler(this, &MyForm::buttonSignIn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->buttonSignIn);
			this->Controls->Add(this->checkBoxAgree);
			this->Controls->Add(this->labelTandC);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelSignIn);
			this->Controls->Add(this->closeButton);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ỨNG DỤNG Y TẾ";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}	

// Check if the Terms and Conditions have been agreed or not, if not then you can't sign in
private: System::Void checkBoxAgree_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBoxAgree->Checked)
	{
		buttonSignIn->Enabled = true;
	}
	else
	{
		buttonSignIn->Enabled = false;
	}
}

// Switch to Terms and Conditions Form
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	TermsandConditions^ form1 = gcnew TermsandConditions(this); // Create a form object TermsandConditions and pass 'this' as initialization data and return a handle to the object it has created.
	form1->Show();
	this->Hide();
}

// Check credential using StreamWriter Class
private: System::Void buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filename = origin_path + "\\Timeline_UandP.txt";
	StreamWriter ^ sw = gcnew StreamWriter(filename, true); 
	// First parameter is file path. Second is boolean to append if true or overwrite if false.

	
	String^ filename1 = origin_path + "\\List_UandP.txt";
	StreamReader^ readUandP = File::OpenText(filename1);
	// Create instance of StreamReader class

	array<String^>^ List_User_Pass = gcnew array<String^>(4);

	for (int i = 0; i < 4; i++)
	{
		List_User_Pass[i] = readUandP->ReadLine();
	}

	if (((textBoxUsername->Text == List_User_Pass[0]) && (textBoxPassword->Text == List_User_Pass[1])) || ((textBoxUsername->Text == List_User_Pass[2]) && (textBoxPassword->Text == List_User_Pass[3])))
	{
		sw->WriteLine(DateTime::Now); // Write sign in time
		sw->WriteLine(textBoxUsername->Text + " successfully logged in."); // Get name of user who sign in
		sw->WriteLine("------------------------------");
		textBoxUsername->Text = ""; // Reset text box
		textBoxPassword->Text = ""; // Reset text box
		checkBoxAgree->Checked = false; // Uncheck check box
		Home^ form2 = gcnew Home(this);
		form2->Show(); // Show HOME form
		this->Hide();
	}
	else
	{
		MessageBox::Show("Incorrect Password or Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	sw->Close(); // Closes the current StreamWriter object.
	readUandP->Close(); // Closes the current StreamReader object.
}


	// Dragging the Form
	bool dragging;
	System::Drawing::Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Enable dragging
	dragging = true;
	// Get mouse position
	offset.X = e->X; // The X cordinate of the mouse, in pixels
	offset.Y = e->Y; // The Y cordinate of the mouse, in pixels
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Check whether able to move
	if (dragging) 
	{
		Location = System::Drawing::Point((e->X - offset.X) + Location.X, (e->Y - offset.Y) + Location.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Disable dragging
	dragging = false;
}	
	 //Move to Password Box when press Enter from Username Box
private: System::Void textBoxUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBoxPassword->Focus();
	}
}
};
}
