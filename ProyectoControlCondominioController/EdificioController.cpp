#include "EdificioController.h"


using namespace ProyectoControlCondominioController;
using namespace System::IO;

EdificioController::EdificioController() {
	this->objConexion = gcnew SqlConnection();
}

void EdificioController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void EdificioController::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Edificio^>^ EdificioController::buscarAll() {
	List<Edificio^>^ listaEncontrados = gcnew List<Edificio^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Edificio";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int CantidadPisos = safe_cast<int>(objData[1]);
		int aforo = safe_cast<int>(objData[2]);
		String^ codigoProyecto = safe_cast<String^>(objData[3]);
		//List<Piso^>^ listaPisos = gcnew List<Piso^>();
		Edificio^ objEdificio = gcnew Edificio(CantidadPisos, aforo, codigo, codigoProyecto);
		listaEncontrados->Add(objEdificio);
	}
	CerrarConexionBD();
	return listaEncontrados;
}

void EdificioController::agregarEdificio(Edificio^ objEdificio) {
	AbrirConexionBD();
	int codigo = objEdificio->getCodigo();
	int cantPisos = objEdificio->getCantPisos();
	int aforo = objEdificio->getAforo();
	String^ codigoProyecto = objEdificio->getCodigoProyecto();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Edificio(CantidadPisos,Aforo,CodigoProyecto)values(" + cantPisos + "," + aforo + ",'" + codigoProyecto + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Edificio^>^ EdificioController::buscarEdificios(String^ codigoProyecto) {
	/*array<String^>^ lineas = File::ReadAllLines("edificios.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	//Esta instruccion for each nos permite ir elemento por elemento de un array
	for each (String ^ lineaEdificio in lineas) {
		//Voy a separar cada elemento del String por ; con el split
		array<String^>^ datos = lineaEdificio->Split(separadores->ToCharArray());
		int cantPisos = Convert::ToInt32(datos[0]);
		int aforoEdificio = Convert::ToInt32(datos[1]);
		String^ codigoEdificio = datos[2];
		String^ codigoListaPisos = datos[3];
		int codigoProyectoArchivo = Convert::ToInt32(datos[4]);
		List<Piso^>^ listaPisos = gcnew List<Piso^>();
		if (codigoProyectoArchivo == codigoProyecto) {
			Edificio^ objEdificio = gcnew Edificio(cantPisos, aforoEdificio, codigoEdificio,listaPisos);
			listaEdificios->Add(objEdificio);
		}
	}*/
	List<Edificio^>^ listaEncontrados = gcnew List<Edificio^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Edificio where CodigoProyecto='"+codigoProyecto+"'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int CantidadPisos = safe_cast<int>(objData[1]);
		int aforo = safe_cast<int>(objData[2]);
		String^ codigoProyecto = safe_cast<String^>(objData[3]);
		//List<Piso^>^ listaPisos = gcnew List<Piso^>();
		Edificio^ objEdificio = gcnew Edificio(CantidadPisos, aforo, codigo, codigoProyecto);
		listaEncontrados->Add(objEdificio);
	}
	CerrarConexionBD();
	return listaEncontrados;
}

void EdificioController::eliminarEdificios(String^ codigoProyecto) {
	//List<Edificio^>^ listaEdificios = buscarEdificios(codigoProyecto);
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM Edificio WHERE CodigoProyecto='" +codigoProyecto + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}