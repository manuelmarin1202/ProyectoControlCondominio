#pragma once

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class DatosPersonales {
	private:
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
	public:
		DatosPersonales();
		DatosPersonales(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);
		String^ getNombres();
		void setNombres(String^ nombre);
		String^ getApellidoPaterno();
		void setApellidoPaterno(String^ apellidoPaterno);
		String^ getApellidoMaterno();
		void setApellidoMaterno(String^ apellidoMaterno);
		String^ getDni();
		void setDni(String^ dni);
	};
}