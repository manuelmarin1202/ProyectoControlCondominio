#include <iostream>
#include "AdminController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;

AdminController::AdminController() {
	this->objConexion = gcnew SqlConnection();
}

void AdminController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void AdminController::CerrarConexionBD() {
	this->objConexion->Close();
}
int AdminController::ConfirmarAdmin(String^ usuario, String^ contra) {
	/*array<String^>^ lineas = File::ReadAllLines("Admin.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	int existe = 0;
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ usuarioAdmin = datos[0];
		String^ contraAdmin = datos[1];
		if (usuarioAdmin==usuario && contraAdmin==contra) {
			existe = 1;
		}
	}
	return existe;*/
	int confirmar = 0;
	List<Admin^>^ listaAdmin = gcnew List<Admin^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Administrador";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigoAdmin = safe_cast<String^>(objData[0]);
		String^ contraAdmin = safe_cast<String^>(objData[1]);

		List<Admin^>^ listaAdmin = gcnew List<Admin^>();
		Admin^ objAdmin = gcnew Admin(codigoAdmin, contraAdmin);
		listaAdmin->Add(objAdmin);
		if (usuario == codigoAdmin) {
			if (contraAdmin == contra) {
				confirmar = 1;
			}
		}
	}
	CerrarConexionBD();
	return confirmar;
}

List<Admin^>^ AdminController::buscarAllAdmin() {
	/*
	//En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<Admin^>^ listaAdminEncontrados = gcnew List<Admin^>();
	array<String^>^ lineas = File::ReadAllLines("Admin.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	for each (String ^ lineaAdmin in lineas) {
		array<String^>^ datos = lineaAdmin->Split(separadores->ToCharArray());
		String^ usuarioAdmin = datos[0];
		String^ contraAdmin = datos[1];
		Admin^ objAdmin = gcnew Admin(usuarioAdmin, contraAdmin);
		listaAdminEncontrados->Add(objAdmin);
	}
	return listaAdminEncontrados;*/
	List<Admin^>^ listaAdmin = gcnew List<Admin^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Administrador";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ usuario = safe_cast<String^>(objData[0]); 
		String^ contra = safe_cast<String^>(objData[1]); 

		List<Admin^>^ listaAdmin = gcnew List<Admin^>();  
		Admin^ objAdmin = gcnew Admin(usuario, contra); 
		listaAdmin->Add(objAdmin);
	}
	CerrarConexionBD();
	return listaAdmin;
}

/*void AdminController::escribirArchivo(List<Admin^>^ listaAdmin) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaAdmin->Count);
	for (int i = 0; i < listaAdmin->Count; i++) {
		Admin^ objAdmin = listaAdmin[i];
		lineasArchivo[i] = objAdmin->getUsuario() + ";" + objAdmin->getContra();
	}
	File::WriteAllLines("Admin.txt", lineasArchivo);
}
*/

void AdminController::agregarProyecto(Admin^ objAdmin) {
	/*List<Admin^>^ listaAdmin = buscarAllAdmin();
	listaAdmin->Add(objAdmin);
	escribirArchivo(listaAdmin);
	*/
	AbrirConexionBD();
	String^ usuario = objAdmin->getUsuario();	  
	String^ contra = objAdmin->getContra();  
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Administrador(codigo, contraseña)values('" + usuario + "','" + contra + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}