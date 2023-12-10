#pragma once



namespace ProyectoControlCondominioController {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace ProyectoControlCondominioModel;
	using namespace System::Collections::Generic;
	public ref class GuardiaController {

	private: SqlConnection^ objConexion;
	public:
		GuardiaController();
		void AbrirConexionBD();
		void CerrarConexionBD();
		List<Guardia^>^ buscarGuardiaApPat(String^ apellidoPaterno);
		List<Guardia^>^ buscarGuardias();
		void agregarGuardia(String^ nombre,String^ apellidoPaterno, String^apellidoMaterno, String^dni,double sueldo,String^contraseña,String^categoria);
		void eliminarGuardia(int codigo);
		void actualizarGuardia(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, double sueldo, String^ contraseña, String^ categoria);
		Guardia^ buscarGuardiaxCodigo(int codigo);
		List<String^>^ obtenerApPaterno();
		int confirmarGuardia(String^ usuario, String^ contraseña);
	};
}
