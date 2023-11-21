#include "PisoController.h"


using namespace ProyectoControlCondominioController;
using namespace System::IO;

PisoController::PisoController() {
	this->objConexion = gcnew SqlConnection();
}
void PisoController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void PisoController::CerrarConexionBD() {
	this->objConexion->Close();
}
List<Piso^>^ PisoController::buscarAll() {
	List<Piso^>^ listaEncontrados = gcnew List<Piso^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Piso";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int CantidadAp = safe_cast<int>(objData[1]);
		int codigoEdificio = safe_cast<int>(objData[2]);
		int numPiso = safe_cast<int>(objData[3]);
		Piso^ objPiso = gcnew Piso(codigo, CantidadAp, codigoEdificio, numPiso);
		listaEncontrados->Add(objPiso);
	}
	CerrarConexionBD();
	return listaEncontrados;
}
void PisoController::agregarPiso(int cantAp, int codigoEdificio,int numPiso) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Piso(CantidadApartamentos,CodigoEdificio,NumeroPiso) values("+cantAp+","+codigoEdificio+","+numPiso+") ";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}
//void agregarPiso(Edificio^ objEdificio);
//List<Piso^>^ buscarPisos(String^ codigoEdificio);
//void eliminarPisos(String^ codigoEdificio);