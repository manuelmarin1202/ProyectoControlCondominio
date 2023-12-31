#pragma once
#include "DatosPersonales.h"

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Guardia :DatosPersonales {
	private:
		int codigo;
		String^ categoria;
		double sueldo;
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
		String^ nombreFoto;
		String^ contraseņa;
	public:
		Guardia();
		Guardia(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreFoto, String^ contraseņa,int codigo, String^ categoria, double sueldo);
		int getCodigoGuardia();
		void setCodigoGuardia(int codigo);
		String^ getCategoria();
		void setCategoria(String^ categoria);
		double getSueldo();
		void setSueldo(double sueldo);

	};
}
