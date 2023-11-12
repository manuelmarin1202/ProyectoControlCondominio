#pragma once
//Mensaje Prueba-Cejo

using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;
using namespace System::Data::SqlClient;

namespace ProyectoControlCondominioController {
	public ref class AdminController {
	private: SqlConnection^ objConexion;
		public:
			AdminController();
			void AbrirConexionBD();
			void CerrarConexionBD();
			int ConfirmarAdmin(String^ usuario, String^ contra);
			List<Admin^>^ buscarAllAdmin();
			//void escribirArchivo(List<Admin^>^ listaAdmin);
			void agregarProyecto(Admin^ objAdmin);
	};
}