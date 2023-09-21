#include "frmPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoControlCondominioView;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	frmPrincipal ventana;
	Application::Run(% ventana);
}
