//#include <iostream>
#include "UsuarioController.h"

using namespace ProyectoControlCondominioController;
//using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;

UsuarioController::UsuarioController() {
	this->objConexion = gcnew SqlConnection();
}

void UsuarioController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void UsuarioController::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Usuario^>^ UsuarioController::buscarUsuarios(String^ ApellidoPaterno) { //SQL
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario where ApellidoPaterno like '%" + ApellidoPaterno + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]);  
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
		listaUsuarios->Add(objUsuario);
	}
	CerrarConexionBD();
	return listaUsuarios;
}

List<Usuario^>^ UsuarioController::buscarAll() { //SQL

List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
AbrirConexionBD();
SqlCommand^ objSentencia = gcnew SqlCommand();
objSentencia->Connection = this->objConexion;
objSentencia->CommandText = "SELECT*FROM Usuario";
SqlDataReader^ objData = objSentencia->ExecuteReader();
while (objData->Read()) {
	String^ codigo = safe_cast<String^>(objData[0]);
	String^ nombre = safe_cast<String^>(objData[1]);
	String^ apellidoPaterno = safe_cast<String^>(objData[2]);
	String^ apellidoMaterno = safe_cast<String^>(objData[3]);
	String^ dni = safe_cast<String^>(objData[4]);
	String^ contraseña  = safe_cast<String^>(objData[5]);  
	String^ nombreFoto = safe_cast<String^>(objData[6]);

	Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
	listaUsuarios->Add(objUsuario);
}
CerrarConexionBD();
return listaUsuarios;
}

void UsuarioController::agregarUsuario(Usuario^ objUsuario) { //SQL
	AbrirConexionBD();
	String^ codigo = objUsuario->getCodigoUsuario(); 	
	String^ nombre = objUsuario->getNombres(); 
	String^ apellidoPaterno = objUsuario->getApellidoPaterno();
	String^ apellidoMaterno = objUsuario->getApellidoMaterno(); 
	String^ dni = objUsuario->getDni(); 
	String^ nombreFoto = objUsuario->getNombreFoto(); 
	String^ contraseña = objUsuario->getContraseña();  
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Usuario(Codigo,Nombre,ApellidoPaterno,ApellidoMaterno,Dni,NombreFoto,Contraseña)values('" + codigo + "','" + nombre + "','" + apellidoPaterno + "','" + apellidoMaterno + "','" + dni + "','" + nombreFoto + "','" + contraseña + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void UsuarioController::eliminarUsuarioFisico(String^ codigo) {
	AbrirConexionBD(); 
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM Usuario WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

Usuario^ UsuarioController::buscarUsuarioxCodigo(String^ codigo) { //SQL
	Usuario^ objUsuario; 
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario where Codigo= '"+ codigo +"'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		//List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); 
		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
	}
	CerrarConexionBD();
	return objUsuario;
}


void UsuarioController::actualizarUsuario(Usuario^ objUsuario) {
	String^ codigo = objUsuario->getCodigoUsuario(); 
	String^ nombre = objUsuario->getNombres(); 
	String^ apellidoPaterno = objUsuario->getApellidoPaterno(); 
	String^ apellidoMaterno = objUsuario->getApellidoMaterno(); 
	String^ dni = objUsuario->getDni(); 
	String^ nombreFoto = objUsuario->getNombreFoto(); 
	String^ contraseña = objUsuario->getContraseña();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Usuario SET Codigo='" + codigo + "',Nombre='" + nombre + "',ApellidoPaterno='" + apellidoPaterno + "',ApellidoMaterno='" + apellidoMaterno + "',Dni='" + dni + "',NombreFoto='" + nombreFoto + "',Contraseña='" + contraseña + "' WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}


List<String^>^ UsuarioController::obtenerApellidos() {
	List<Usuario^>^ listaUsuarios = buscarAll();
	List<String^>^ listaApellidos = gcnew List<String^>();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		//Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos
		String^ apellidoPaterno = listaUsuarios[i]->getApellidoPaterno();
		//Voy a buscarlo en la listaDepartamentos
		int existe = 0;
		for (int j = 0; j < listaApellidos->Count; j++) {
			if (listaApellidos[j]->Contains(apellidoPaterno)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaApellidos->Add(apellidoPaterno);
		}
	}
	return listaApellidos;
}

String^ UsuarioController::obtenerNombreFoto(String^ nombreFotoLargo) {
	String^ separadores = "\\";
	//Convert::ToString(0x5C)
	array<String^>^ datos = nombreFotoLargo->Split(separadores->ToCharArray());
	String^ nombreFoto;
	int num = datos->Length;
	nombreFoto = datos[num - 1];
	return nombreFoto;
}

int UsuarioController::ConfirmarUsuario(String^ codigousuario,String^ contra) {
	int confirmar=0;
	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Usuario";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]); 
		String^ nombre = safe_cast<String^>(objData[1]); 
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 
		List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();
		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
		listaUsuarios->Add(objUsuario); 
		if (codigo == codigousuario) {
			if (contraseña == contra) {
				confirmar = 1;
			}
		}
	}
	CerrarConexionBD();
	return confirmar;

}

int UsuarioController::requestsTotales() {
	int cuenta = 0;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM PedidoCambio";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		cuenta++;
	}
	CerrarConexionBD();
	return cuenta;
}


void UsuarioController::agregarSolicitud(Usuario^ objUsuario) { //SQL

	AbrirConexionBD();
	String^ codigo = objUsuario->getCodigoUsuario();
	String^ nombre = objUsuario->getNombres();
	String^ apellidoPaterno = objUsuario->getApellidoPaterno();
	String^ apellidoMaterno = objUsuario->getApellidoMaterno();
	String^ dni = objUsuario->getDni();
	String^ nombreFoto = objUsuario->getNombreFoto();
	String^ contraseña = objUsuario->getContraseña();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into PedidoCambio(Codigo,Nombre,ApellidoPaterno,ApellidoMaterno,Dni,NombreFoto,Contraseña)values('" + codigo + "','" + nombre + "','" + apellidoPaterno + "','" + apellidoMaterno + "','" + dni + "','" + nombreFoto + "','" + contraseña + "')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void UsuarioController::eliminarSolicitud(String^ codigo) {
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM PedidoCambio WHERE Codigo='" + codigo + "'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<Usuario^>^ UsuarioController::buscarAllPedidos() { //SQL

	List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>(); 
	AbrirConexionBD(); 
	SqlCommand^ objSentencia = gcnew SqlCommand(); 
	objSentencia->Connection = this->objConexion; 
	objSentencia->CommandText = "SELECT*FROM PedidoCambio";  
	SqlDataReader^ objData = objSentencia->ExecuteReader();  
	while (objData->Read()) {  
		String^ codigo = safe_cast<String^>(objData[0]);  
		String^ nombre = safe_cast<String^>(objData[1]);  
		String^ apellidoPaterno = safe_cast<String^>(objData[2]); 
		String^ apellidoMaterno = safe_cast<String^>(objData[3]); 
		String^ dni = safe_cast<String^>(objData[4]); 
		String^ contraseña = safe_cast<String^>(objData[5]); 
		String^ nombreFoto = safe_cast<String^>(objData[6]); 

		Usuario^ objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña); 
		listaUsuarios->Add(objUsuario); 
	} 
	CerrarConexionBD(); 
	return listaUsuarios; 
} 

Usuario^ UsuarioController::buscarPedidoxCodigo(String^ codigo) { 
	Usuario^ objUsuario;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM PedidoCambio where Codigo= '" + codigo + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		String^ nombre = safe_cast<String^>(objData[1]);
		String^ apellidoPaterno = safe_cast<String^>(objData[2]);
		String^ apellidoMaterno = safe_cast<String^>(objData[3]);
		String^ dni = safe_cast<String^>(objData[4]);
		String^ contraseña = safe_cast<String^>(objData[5]);
		String^ nombreFoto = safe_cast<String^>(objData[6]);

		objUsuario = gcnew Usuario(codigo, nombre, apellidoPaterno, apellidoMaterno, dni, nombreFoto, contraseña);
	}
	CerrarConexionBD();
	return objUsuario;
}

int UsuarioController::existeCodigo(String^ codigo) {
	List<Usuario^>^ listaUsuarios = buscarAll();
	int existe = 0;
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigoUsuario() == codigo) {
			existe = 1;
		}
	}
	return existe;
}

String^ UsuarioController::ListadeCambios(String^ codigo) {
	String^ nombreU;
	String^ apellidoPaternoU;
	String^ apellidoMaternoU;
	String^ dniU;
	String^ contraseñaU;

	String^ nombreCambio;
	String^ apellidoPaternoCambio;
	String^ apellidoMaternoCambio;
	String^ dniCambio;
	String^ contraseñaCambio;

	String^ nombre = "";
	String^ apellidoPaterno = "";
	String^ apellidoMaterno = "";
	String^ dni = "";
	String^ contraseña = "";
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select u.*, p.* from Usuario U, PedidoCambio P where U.codigo = '" + codigo + "' AND P.codigo = '" + codigo + "'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		nombreU = safe_cast<String^>(objData[1]);
		apellidoPaternoU = safe_cast<String^>(objData[2]);
		apellidoMaternoU = safe_cast<String^>(objData[3]);
		dniU = safe_cast<String^>(objData[4]);
		contraseñaU = safe_cast<String^>(objData[5]);

		nombreCambio = safe_cast<String^>(objData[8]);
		apellidoPaternoCambio = safe_cast<String^>(objData[9]);
		apellidoMaternoCambio = safe_cast<String^>(objData[10]);
		dniCambio = safe_cast<String^>(objData[11]);
		contraseñaCambio = safe_cast<String^>(objData[12]);

	}
	CerrarConexionBD();
	if (nombreU != nombreCambio) {
		nombre = "nombre";
	}
	if (apellidoPaternoU != apellidoPaternoCambio) {
		apellidoPaterno = "apellido paterno";
	}
	if (apellidoMaternoU != apellidoMaternoCambio) {
		apellidoMaterno = "apellido materno";
	}
	if (dniU != dniCambio) {
		dni = "dni";
	}
	if (contraseñaU != contraseñaCambio) {
		contraseña = "contraseña";
	}

	String^ mensaje = "" + nombre + " " + apellidoPaterno + " " + apellidoMaterno + " " + dni + " " + contraseña + "";

	return mensaje;
}

