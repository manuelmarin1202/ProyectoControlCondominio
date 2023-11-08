#pragma once
using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Emergencia {
	private:
		int id;
		String^ tipo;
		String^ ubicacion;
	public:
		Emergencia();
		Emergencia(int id,String^ tipo, String^ ubicacion);
	};
}