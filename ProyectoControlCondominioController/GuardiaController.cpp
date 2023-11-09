#include "GuardiaController.h"

using namespace ProyectoControlCondominioController;

GuardiaController::GuardiaController() {
	this->objConexion = gcnew SqlConnection();
}
void GuardiaController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void GuardiaController::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Guardia^>^ GuardiaController::buscarGuardiaApPat(String^ apellidoPaterno) {
	List<Guardia^>^ listaGuardias = gcnew List<Guardia^>();
	AbrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT*FROM Guardias where ApellidoPaterno like '%"+apellidoPaterno+"%'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ categoria = safe_cast<String^>(objData[1]);
		double sueldo = safe_cast<double>(objData[2]);
		String^ Nombre = safe_cast<String^>(objData[3]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[4]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[5]);
		String^ Dni = safe_cast<String^>(objData[6]);
		String^ contraseña = safe_cast<String^>(objData[7]);
		//int codigoPiso = safe_cast<int>(objData[8]);
		String^ nombreFoto = "Alberto.jpg";
		Guardia^ objGuardia= gcnew Guardia(Nombre, ApellidoPaterno, ApellidoMaterno, Dni, nombreFoto, contraseña, codigo, categoria, sueldo);
		listaGuardias->Add(objGuardia);
	}
	CerrarConexionBD();
	return listaGuardias;
}

void GuardiaController::agregarGuardia(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, double sueldo, String^ contraseña, String^ categoria) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Guardias(Categoria,Sueldo,Nombre,ApellidoPaterno,ApellidoMaterno,Dni,Contraseña,nombreDeFoto)values('"+categoria+"',"+sueldo+",'"+nombre+"','"+apellidoPaterno+"','"+apellidoMaterno+"','"+dni+"','"+contraseña+"','Alberto.jpg')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void GuardiaController::eliminarGuardia(int codigo) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM Guardias WHERE Codigo="+codigo+"";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void GuardiaController::actualizarGuardia(int codigo, String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, double sueldo, String^ contraseña, String^ categoria) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Guardias SET Categoria='"+categoria+"',Sueldo="+sueldo+",Nombre='"+nombre+"',ApellidoPaterno='"+apellidoPaterno+"',Apellidomaterno='"+apellidoMaterno+"',Dni='"+dni+"',Contraseña='"+contraseña+"' WHERE Codigo=" + codigo + "";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

Guardia^ GuardiaController::buscarGuardiaxCodigo(int codigo) {
	Guardia^ objGuardia;
	AbrirConexionBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT*FROM Guardias where Codigo="+codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();	
	while (objData->Read()) {
		int Codigo = safe_cast<int>(objData[0]);
		String^ categoria = safe_cast<String^>(objData[1]);
		double sueldo = safe_cast<double>(objData[2]);
		String^ Nombre = safe_cast<String^>(objData[3]);
		String^ ApellidoPaterno = safe_cast<String^>(objData[4]);
		String^ ApellidoMaterno = safe_cast<String^>(objData[5]);
		String^ Dni = safe_cast<String^>(objData[6]);
		String^ contraseña = safe_cast<String^>(objData[7]);
		//int codigoPiso = safe_cast<int>(objData[8]);
		String^ nombreFoto = "Alberto.jpg";
		objGuardia = gcnew Guardia(Nombre, ApellidoPaterno, ApellidoMaterno, Dni, nombreFoto, contraseña, Codigo, categoria, sueldo);
	}
	CerrarConexionBD();
	return objGuardia;
}