#include "Inicio.h" 

using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoControlCondominioView;

[STAThreadAttribute]
void main(array <String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Inicio ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}