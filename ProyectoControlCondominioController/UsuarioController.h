#pragma once


using namespace System;
using namespace System::Collections::Generic;
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
	};
}