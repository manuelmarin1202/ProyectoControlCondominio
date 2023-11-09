#pragma once

using namespace System::Data::SqlClient;
using namespace System;

namespace ProyectoCondominioController {
	public ref class GuardiaController {
		//agrega por referencia system y system data
	private: SqlConnection^ objConexion;
	public:
		GuardiaController();
		void AbrirConexionBD();
		void CerrarConexionBD();
	};
}
