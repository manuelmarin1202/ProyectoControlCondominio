#pragma once
using namespace System;

namespace ProyectoControlCondominioModel {
	public ref class Intruso {
	private:
		int id;
		String^ fecha;
		String^ hora;
		String^ nombreFoto;
	public:
		Intruso();
		Intruso(int id,String^ fecha,String^ hora,String^ nombreFoto);
		int getId();
		void setId(int id);
		String^ getFecha();
		void setFecha(String^ fecha);
		String^ getHora();
		void setHora(String^ hora);
		String^ getNombreFoto();
		void setNombreFoto(String^ nombreFoto);
	};
}