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

List<Emergencia^>^ EmergenciaController::buscarEmergenciaxFecha(String^ fecha) {
	List<Emergencia^>^ listaProyectos = gcnew List<Emergencia^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Emergencia where Fecha='"+fecha+"'";
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

List<Emergencia^>^ EmergenciaController::buscarEmergenciaEnFechas(String^ inicio, String^ fin) {
	List<Emergencia^>^ listaProyectos = gcnew List<Emergencia^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select*from Emergencia where Fecha >= '"+inicio+"' and Fecha <'"+fin+"'";
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
List<String^>^ EmergenciaController::listaFechas(List<Emergencia^>^ listaEmergencias) {
	//List<Emergencia^>^ listaEmergencias = buscarAll();
	List<String^>^ listaFechas = gcnew List<String^>();
	for (int i = 0; i < listaEmergencias->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ departamento = listaEmergencias[i]->getFecha();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaFechas->Count; j++) {
			if (listaFechas[j]==departamento) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaFechas->Add(departamento);
		}
	}
	return listaFechas;
}

int EmergenciaController::cantidadEmergenciasxFecha(String^ fecha) {
	int coincidencia = 0;
	List<Emergencia^>^ listaEmergencias = buscarAll();
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