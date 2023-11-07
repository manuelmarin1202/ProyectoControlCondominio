#pragma once
#include "DatosPersonales.h"

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Usuario:DatosPersonales {
	private:
		String^ codigo;
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ codigo;
		String^ nombreFoto;
		String^ contrase�a;
	public:
		Usuario();
		Usuario(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ codigo, String^ nombreFoto, String^ contrase�a);
		String^ getCodigoUsuario();
		void setCodigoUsuario(String^ codigo);
		String^ getContrase�a();
		void setContrase�a(String^ contrase�a);
		//String^ getNombreUsuario();
		//void setNombreUsuario(String^ nombre);
		//String^ getApellidoPaterno();
		//void setApellidoPaterno(String^ apellidoPaterno);
		//String^ getApellidoMaterno();
		//void setApellidoMaterno(String^ apellidoMaterno);
		//String^ getDni();
		//void setDni(String^ Dni);
	};
}
