#pragma once
#include "DatosPersonales.h"

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Guardia :DatosPersonales {
	private:
		int codigo;
		String^ categoria;
		Double^ sueldo;
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ nombreFoto;
		String^ contrase�a;
	public:
		Guardia();
		Guardia(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreFoto, String^ contrase�a,int codigo, String^ categoria, Double sueldo);
		int getCodigoGuardia();
		void setCodigoGuardia(int codigo);
		String^ getCategoria();
		void setCategoria(String^ categoria);
		Double^ getSueldo();
		void setSueldo(Double^ sueldo);

	};
}