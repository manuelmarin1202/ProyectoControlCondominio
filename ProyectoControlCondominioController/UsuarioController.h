#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace ProyectoControlCondominioModel;
using namespace System::Data::SqlClient;

namespace ProyectoControlCondominioController {
	public ref class UsuarioController {
	private: SqlConnection^ objConexion;
	public:
		UsuarioController();
		List<Usuario^>^ buscarUsuarios(String^ apellidoPaterno); //SQL
		List<Usuario^>^ buscarAll(); //SQL
		void eliminarUsuarioFisico(String^ codigo); //SQL
		void agregarUsuario(Usuario^ objProyecto); //SQL
		Usuario^ buscarUsuarioxCodigo(String^ codigo); //SQL
		void actualizarUsuario(Usuario^ objUsuario); //SQL
		List<String^>^ obtenerApellidos();
		String^ obtenerNombreFoto(String^ nombreFotoLargo);
		int ConfirmarUsuario(String^ codigousuario,String^ contra);
		int requestsTotales();
		void agregarSolicitud(Usuario^ objUsuario); 
		void eliminarSolicitud(String^ codigo); 
		List<Usuario^>^ buscarAllPedidos();
		Usuario^ buscarPedidoxCodigo(String^ codigo) ; 
		void AbrirConexionBD(); //SQL
		void CerrarConexionBD(); //SQL
		int existeCodigo(String^ codigo);
	};
}