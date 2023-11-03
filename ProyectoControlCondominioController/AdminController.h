#pragma once
//Mensaje Prueba-Cejo

using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	public ref class AdminController {
		public:
			AdminController();
			int ConfirmarAdmin(String^ usuario, String^ contra);
			List<Admin^>^ buscarAllAdmin();
			void escribirArchivo(List<Admin^>^ listaAdmin);
			void agregarProyecto(Admin^ objAdmin);
	};
}