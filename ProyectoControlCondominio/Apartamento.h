#pragma once

using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Apartamento {
	private:
		String^ numeroApartamento;
		bool disponible;
	public:
		Apartamento();
		Apartamento(String^ numeroApartamento, bool disponible);
	};
}