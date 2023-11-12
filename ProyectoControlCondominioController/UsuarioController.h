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
		//List<Usuario^>^ buscarAll_3();
		//void EscribirArchivo_2(List<Usuario^>^ lista); 
		void eliminarUsuarioFisico(String^ codigo); //SQL
		void agregarUsuario(Usuario^ objProyecto); //SQL
		Usuario^ buscarUsuarioxCodigo(String^ codigo); //SQL
		//Usuario^ buscarUsuarioCambioxCodigo(String^ codigo);
		void actualizarUsuario(Usuario^ objUsuario); //SQL
		List<String^>^ obtenerApellidos();
		//Bitmap^ leerArchivo(String^ nombreArchivo);
		String^ obtenerNombreFoto(String^ nombreFotoLargo);
		int ConfirmarUsuario(String^ codigousuario,String^ contra);
		//int ConfirmarContra(String^ codigover, String^ contra);
		//void EscribirCambioDatos(List<Usuario^>^ lista);
		//int actualizarCambioDatos(Usuario^ objUsuario);
		//List<Usuario^>^ buscarCambioDatos();
		//List<String^>^ buscarRequests();
		//void EscribirPedidos(List<String^>^ lista);
		//void cambioPedidos(int fila);
		//void cancelaPedidos(int fila);
		int requestsTotales();
		void agregarSolicitud(Usuario^ objUsuario); 
		void eliminarSolicitud(String^ codigo); 
		List<Usuario^>^ buscarAllPedidos();
		Usuario^ buscarPedidoxCodigo(String^ codigo) ; 

		//List<Usuario^>^ buscarLineasPedidos();

		void AbrirConexionBD(); //SQL
		void CerrarConexionBD(); //SQL
	};
}