#include <iostream>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include "IntrusoController.h"

using namespace ProyectoControlCondominioModel;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;
using namespace System::Drawing::Imaging;
using namespace System::Drawing;
using namespace AForge::Video;
using namespace AForge::Video::DirectShow;
using namespace System;
using namespace System::Windows;
using namespace ProyectoControlCondominioController;



IntrusoController::IntrusoController(){
	this->objConexion = gcnew SqlConnection();

}

void IntrusoController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void IntrusoController::CerrarConexionBD() {
	this->objConexion->Close();
}

void IntrusoController::agregarIntruso(Intruso^ objIntruso) {
	AbrirConexionBD();
	String^ fecha = objIntruso->getFecha();
	String^ hora = objIntruso->getHora();
	String^ nombreFoto = objIntruso->getNombreFoto();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Intruso(Fecha,Hora,NombreFoto)values('" + fecha + "','" + hora + "','" + nombreFoto + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Intruso^>^ IntrusoController::buscarAll() {
	List<Intruso^>^ listaIntrusos = gcnew List<Intruso^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Intruso";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//int codigo = safe_cast<int>(objData[0]);
		int id = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		String^ hora = safe_cast<String^>(objData[2]);
		String^ nombreFoto = safe_cast<String^>(objData[3]);
		Intruso^ objIntruso = gcnew Intruso(id,fecha,hora,nombreFoto);
		listaIntrusos->Add(objIntruso);
	}
	CerrarConexionBD();
	return listaIntrusos;
}

Intruso^ IntrusoController::buscarIntrusoxID(int id) {
	Intruso^ objIntruso;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Intruso where ID="+id+"";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		//int codigo = safe_cast<int>(objData[0]);
		//int id = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		String^ hora = safe_cast<String^>(objData[2]);
		String^ nombreFoto = safe_cast<String^>(objData[3]);
		objIntruso = gcnew Intruso(id, fecha, hora, nombreFoto);
	}
	CerrarConexionBD();
	return objIntruso;
}

List<String^>^ IntrusoController::getListaFechas(List<Intruso^>^ listaIntrusos) {
	List<String^>^ listaFechas = gcnew List<String^>();
	for (int i = 0; i < listaIntrusos->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ departamento = listaIntrusos[i]->getFecha();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaFechas->Count; j++) {
			if (listaFechas[j] == departamento) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaFechas->Add(departamento);
		}
	}
	return listaFechas;
}

int IntrusoController::cantidadIntrusosxFecha(String^ fecha) {
	int coincidencia = 0;
	List<Intruso^>^ listaEmergencias = buscarAll();
	List<String^>^ listaFechas = gcnew List<String^>();
	for (int i = 0; i < listaEmergencias->Count; i++) {
		listaFechas->Add(listaEmergencias[i]->getFecha());
	}
	for (int i = 0; i < listaFechas->Count; i++) {
		if (listaFechas[i] == fecha) {
			coincidencia++;
		}
	}
	return coincidencia;
}

List<Intruso^>^ IntrusoController::buscarIntrusosxFechas(String^ inicio, String^ fin) {
	List<Intruso^>^ listaIntrusos = gcnew List<Intruso^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select*from Intruso where Fecha >= '" + inicio + "' and Fecha <='" + fin + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int id = safe_cast<int>(objData[0]);
		//int id = safe_cast<int>(objData[0]);
		String^ fecha = safe_cast<String^>(objData[1]);
		String^ hora = safe_cast<String^>(objData[2]);
		String^ nombreFoto = safe_cast<String^>(objData[3]);
		Intruso^ objIntruso = gcnew Intruso(id, fecha, hora, nombreFoto);
		listaIntrusos->Add(objIntruso);
	}
	CerrarConexionBD();
	return listaIntrusos;
}