#pragma once

using namespace System;

public ref class Ubicacion {
	private:
		String^ Departamento;
		String^ Provincia;
		String^ Distrito;
	public:
		Ubicacion();
		Ubicacion(String^ Departamento, String^ Provincia, String^ Distrito);

};
