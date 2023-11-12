#include "iostream"
#include "EmergenciaController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;

EmergenciaController::EmergenciaController() {
	this->objConexion = gcnew SqlConnection();
}
void EmergenciaController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void EmergenciaController::CerrarConexionBD() {
	this->objConexion->Close();
}
void EmergenciaController::agregarEmergencia(Emergencia^ objEmergencia) {
	AbrirConexionBD();
	String^ tipo = objEmergencia->getTipo();
	String^ ubicacion = objEmergencia->getUbicacion();
	String^ fecha = objEmergencia->getFecha();
	String^ hora = objEmergencia->getHora();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Emergencia(Tipo,Ubicacion,Fecha,Hora)values('" + tipo+ "','" + ubicacion + "','" + fecha + "','"+hora+"')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Emergencia^>^ EmergenciaController::buscarAll() {
	List<Emergencia^>^ listaProyectos = gcnew List<Emergencia^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Emergencia";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ tipo = safe_cast<String^>(objData[1]);
		String^ ubicacion = safe_cast<String^>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		String^ hora = safe_cast<String^>(objData[4]);
		Emergencia^ objEmergencia = gcnew Emergencia(codigo,tipo,ubicacion,fecha,hora);
		listaProyectos->Add(objEmergencia);
	}
	CerrarConexionBD();
	return listaProyectos;
}
List<Emergencia^>^ EmergenciaController::buscarEmergenciaTipoUbicacion(String^ tipo, String^ ubicacion) {
	List<Emergencia^>^ listaProyectos = gcnew List<Emergencia^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Emergencia where Tipo like '%"+tipo+"%' and Ubicacion like'%"+ubicacion+"%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ tipo = safe_cast<String^>(objData[1]);
		String^ ubicacion = safe_cast<String^>(objData[2]);
		String^ fecha = safe_cast<String^>(objData[3]);
		String^ hora = safe_cast<String^>(objData[4]);
		Emergencia^ objEmergencia = gcnew Emergencia(codigo, tipo, ubicacion, fecha, hora);
		listaProyectos->Add(objEmergencia);
	}
	CerrarConexionBD();
	return listaProyectos;
}
/*


List<Emergencia^>^ EmergenciaController::buscarEmergenciaTipo(String^ tipo) {

}

void EmergenciaController::eliminarEmergencia(String^ id) {

}
void EmergenciaController::editarEmergencia(String^ id) {

}
void EmergenciaController::verEmergencia(String^ id) {

}
*/