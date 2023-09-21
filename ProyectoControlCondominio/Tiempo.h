#pragma once
using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Tiempo {
	private:
		String^ fecha;
		String^ hora;
	public:
		Tiempo();
		Tiempo(String^ fecha, String^ hora);
	};
}