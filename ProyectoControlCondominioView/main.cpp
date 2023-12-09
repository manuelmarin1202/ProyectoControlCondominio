#include "Inicio.h" 
//#using <System.Core.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoControlCondominioView;
//using namespace System::lin;
//using namespace System::Linq;

[STAThreadAttribute]
void main(array <String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Inicio ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/
}