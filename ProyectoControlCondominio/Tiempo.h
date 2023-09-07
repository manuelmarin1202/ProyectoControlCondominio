#pragma once
using namespace System;

public ref class Tiempo {
	private:
		String^ fecha;
		String^ hora;
	public:
		Tiempo();
		Tiempo(String^ fecha, String^ hora);
};