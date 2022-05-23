#include "MyForm.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
	//Базовые настройки для запуска формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Запускаем указанную форму
	Project1::MyForm form;
	Application::Run(% form);
}
