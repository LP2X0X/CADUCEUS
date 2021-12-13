#include "MyForm.h"
#include "TermsandConditions.h"
#include "Home.h"
using namespace System;
using namespace Caduceus; 
[STAThreadAttribute]
int main()
{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew MyForm()); 
}