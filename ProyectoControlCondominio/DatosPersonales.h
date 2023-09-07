#pragma once

using namespace System;

public ref class DatosPersonales {
	private:
		String^ nombre;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ dni;
	public:
		DatosPersonales();
		DatosPersonales(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni);
};