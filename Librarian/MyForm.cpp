#include "MyForm.h"
#include"Login.h"
#include"Sign_up.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProjectLibrarian::MyForm form;
	ProjectLibrarian::Login login;
	login.ShowDialog();
	//Application::Run(%form);
	form.Hide();
}
