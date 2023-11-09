#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Drawing;
using namespace ProyectoControlCondominioModel;

namespace ProyectoControlCondominioController {
	public ref class UsuarioController {
	public:
		UsuarioController();
		List<Usuario^>^ buscarUsuarios(String^ apellidoPaterno);
		List<Usuario^>^ buscarAll_2();
		void EscribirArchivo_2(List<Usuario^>^ lista);
		void eliminarUsuarioFisico(String^ codigo);
		void agregarProyecto_2(Usuario^ objProyecto);
		Usuario^ buscarUsuarioxCodigo(String^ codigo);
		void actualizarUsuario(Usuario^ objProyecto);
		List<String^>^ obtenerApellidos();
		//void guardarArchivo(List<Figura^>^ listaFiguras, String^ nombreArchivo);
		Bitmap^ leerArchivo(String^ nombreArchivo);
		String^ obtenerNombreFoto(String^ nombreFotoLargo);
		int ConfirmarAdmin(String^ contra);
		int ConfirmarContra(String^ codigover, String^ contra);
		void EscribirCambioDatos(List<Usuario^>^ lista);
		int actualizarCambioDatos(Usuario^ objProyecto);
		List<Usuario^>^ buscarCambioDatos();
		List<String^>^ buscarRequests();
		void EscribirPedidos(List<String^>^ lista);
		void cambioPedidos(int fila);
		int requestsTotales();
		List<Usuario^>^ buscarLineasPedidos();
	};
}