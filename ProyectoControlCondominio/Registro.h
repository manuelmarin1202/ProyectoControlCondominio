#pragma once

using namespace System;

public ref class Registro {
	private:
		int cantIntrusos;
		int cantIngresos;
		String^ numeroEmergencias;
	public:	
		Registro();
		Registro(int cantIntrusos, int cantIngresos, String^ numeroEmergencias);
};
