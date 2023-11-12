#pragma once

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class DatosPersonales {
	private:
		//String^ codigo;
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ nombreFoto;
		String^ contraseña;
	public:
		DatosPersonales();
		DatosPersonales(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreFoto, String^ contraseña);
		//String^ getCodigoUsuario();
		//void setCodigoUsuario(String^ codigo);
		String^ getNombres(); 
		void setNombres(String^ nombre);
		String^ getApellidoPaterno();
		void setApellidoPaterno(String^ apellidoPaterno);
		String^ getApellidoMaterno();
		void setApellidoMaterno(String^ apellidoMaterno);
		String^ getDni();
		void setDni(String^ dni);
		String^ getNombreFoto();
		void setNombreFoto(String^ nombreFoto);
		String^ getContraseña();
		void setContraseña(String^ contraseña);
	};
}