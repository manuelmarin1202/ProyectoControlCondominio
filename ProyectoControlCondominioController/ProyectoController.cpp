//#include "iostream"
#include "ProyectoController.h"

using namespace ProyectoControlCondominioController;
using namespace System::IO;//para utilizar los archivos de texto
using namespace System::Text;

ProyectoController::ProyectoController() {
	this->objConexion = gcnew SqlConnection();
}

void ProyectoController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void ProyectoController::CerrarConexionBD() {
	this->objConexion->Close();
}

List<Proyecto^>^ ProyectoController::buscarProyectos(String^ Departamento) {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea//
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ codigoCondominio=datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		String^ nombreFoto = datos[7];
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		if (DepartamentoCondominio->Contains(Departamento)) {
			Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion, nombreFoto,listaEdificios);
			listaProyectosEncontrados->Add(objProyecto);
		}
	}
	return listaProyectosEncontrados;*/

	List<Proyecto^>^ listaProyectos = gcnew List<Proyecto^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Proyecto where Departamento like '%" + Departamento + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		int cantEdificios = safe_cast<int>(objData[1]);
		String^ departamento= safe_cast<String^>(objData[2]);
		String^ provincia = safe_cast<String^>(objData[3]);
		String^ distrito = safe_cast<String^>(objData[4]);
		String^ nombreCondominio = safe_cast<String^>(objData[5]);
		String^ fechaCreacion = safe_cast<String^>(objData[6]);
		//String^ nombreFoto = safe_cast<String^>(objData[7]);
		//int codigoPiso = safe_cast<int>(objData[8]);
		String^ nombreFoto = "Alberto.jpg";
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		Proyecto^ objProyecto = gcnew Proyecto(codigo, cantEdificios, departamento, provincia, distrito, nombreCondominio, fechaCreacion, nombreFoto, listaEdificios);
		listaProyectos->Add(objProyecto);
	}
	CerrarConexionBD();
	return listaProyectos;
}

List<Proyecto^>^ ProyectoController::buscarProyectos2(String^ Departamento, String^ distrito) {
	/*List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");
	String^ separadores = ";"; //Aqui defino el caracter por el cual voy a separar la informacion de cada linea
	for each (String ^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ codigoCondominio = datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		String^ nombreFoto = datos[7];
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		if (DepartamentoCondominio->Contains(Departamento) && DistritoCondominio->Contains(distrito)) {
			Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion, nombreFoto, listaEdificios);
			listaProyectosEncontrados->Add(objProyecto);
		}
	}
	return listaProyectosEncontrados;*/

	List<Proyecto^>^ listaProyectos = gcnew List<Proyecto^>();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Proyecto where Departamento like '%"+Departamento+"%' and Distrito='"+distrito+"'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		int cantEdificios = safe_cast<int>(objData[1]);
		String^ departamento = safe_cast<String^>(objData[2]);
		String^ provincia = safe_cast<String^>(objData[3]);
		String^ distrito = safe_cast<String^>(objData[4]);
		String^ nombreCondominio = safe_cast<String^>(objData[5]);
		String^ fechaCreacion = safe_cast<String^>(objData[6]);
		//String^ nombreFoto = safe_cast<String^>(objData[7]);
		//int codigoPiso = safe_cast<int>(objData[8]);
		String^ nombreFoto = "Alberto.jpg";
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		Proyecto^ objProyecto = gcnew Proyecto(codigo, cantEdificios, departamento, provincia, distrito, nombreCondominio, fechaCreacion, nombreFoto, listaEdificios);
		listaProyectos->Add(objProyecto);
	}
	CerrarConexionBD();
	return listaProyectos;
}

List<Proyecto^>^ ProyectoController::buscarAll() {
	/*En esta lista vamos a colocar la información de los proyectos que encontremos en el archivo de texto*/
	List<Proyecto^>^ listaProyectosEncontrados = gcnew List<Proyecto^>();
	array<String^>^ lineas = File::ReadAllLines("proyectos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String^ lineaProyecto in lineas) {
		array<String^>^ datos = lineaProyecto->Split(separadores->ToCharArray());
		String^ codigoCondominio = datos[0];
		int cantEdificios = Convert::ToInt32(datos[1]);
		String^ DepartamentoCondominio = datos[2];
		String^ ProvinciaCondominio = datos[3];
		String^ DistritoCondominio = datos[4];
		String^ NombreCondominio = datos[5];
		String^ FechaCreacion = datos[6];
		String^ nombreFoto = datos[7];
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		Proyecto^ objProyecto = gcnew Proyecto(codigoCondominio, cantEdificios, DepartamentoCondominio, ProvinciaCondominio, DistritoCondominio, NombreCondominio, FechaCreacion, nombreFoto,listaEdificios);
		listaProyectosEncontrados->Add(objProyecto);
	}
	return listaProyectosEncontrados;
}
void ProyectoController::escribirArchivo(List<Proyecto^>^ listaProyectos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProyectos->Count);
	for (int i = 0; i < listaProyectos->Count; i++) {
		Proyecto^ objProyecto = listaProyectos[i];
		lineasArchivo[i] = objProyecto->getCodigo() + ";" + objProyecto->getCantEdificios()+ ";" + objProyecto->getDepartamento() + ";" + objProyecto->getProvincia() + ";" + objProyecto->getDistrito() + ";" + objProyecto->getNombre() + ";" + objProyecto->getFechaCreacion()+";"+objProyecto->getNombreFoto();
	}
	File::WriteAllLines("Proyectos.txt", lineasArchivo);
}

void ProyectoController::eliminarProyectoFisico(String^ codigo) {
	//List<Proyecto^>^ listaProyectos = buscarAll();
	//for (int i = 0; i < listaProyectos->Count; i++) {
		//if (listaProyectos[i]->getCodigo() == codigo) {
			//listaProyectos->RemoveAt(i);
		//}
	//}
	//escribirArchivo(listaProyectos);
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "DELETE FROM Proyecto WHERE Codigo="+codigo+"";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

void ProyectoController::agregarProyecto(Proyecto^ objProyecto) {
	//List<Proyecto^>^ listaProyectos = buscarAll();
	//listaProyectos->Add(objProyecto);
	//escribirArchivo(listaProyectos);
	AbrirConexionBD();
	String^ codigo = objProyecto->getCodigo();
	int cantEdificios = objProyecto->getCantEdificios();
	String^ dpto = objProyecto->getDepartamento();
	String^ provincia = objProyecto->getProvincia();
	String^ distrito = objProyecto->getDistrito();
	String^ nombre = objProyecto->getNombre();
	String^ fechaCreacion = objProyecto->getFechaCreacion();
	String^ nombreFoto = objProyecto->getNombreFoto();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "Insert into Proyecto(Codigo,CantidadEdificios,Departamento,Provincia,Distrito,NombreCondominio,FechaCreacion,NombreFoto)values('"+codigo+"',"+cantEdificios+",'"+dpto+"','" + provincia+ "','"+distrito+"','"+nombre+"','"+fechaCreacion+"','"+nombreFoto+"')";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

Proyecto^ ProyectoController::buscarProyectoxCodigo(String^ codigo) {
	/*List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == codigo) {
			return listaProyectos[i];
		}
	}*/
	Proyecto^ objProyecto;
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT*FROM Proyecto where Codigo like '%"+codigo+"%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		String^ codigo = safe_cast<String^>(objData[0]);
		int cantEdificios = safe_cast<int>(objData[1]);
		String^ departamento = safe_cast<String^>(objData[2]);
		String^ provincia = safe_cast<String^>(objData[3]);
		String^ distrito = safe_cast<String^>(objData[4]);
		String^ nombreCondominio = safe_cast<String^>(objData[5]);
		String^ fechaCreacion = safe_cast<String^>(objData[6]);
		//String^ nombreFoto = safe_cast<String^>(objData[7]);
		//int codigoPiso = safe_cast<int>(objData[8]);
		String^ nombreFoto = "Alberto.jpg";
		List<Edificio^>^ listaEdificios = gcnew List<Edificio^>();
		objProyecto = gcnew Proyecto(codigo, cantEdificios, departamento, provincia, distrito, nombreCondominio, fechaCreacion, nombreFoto, listaEdificios);
	}
	CerrarConexionBD();
	return objProyecto;
}

void ProyectoController::actualizarProyecto(Proyecto^ objProyecto) {
	/*List<Proyecto^>^ listaProyectos = buscarAll();
	for (int i = 0; i < listaProyectos->Count; i++) {
		if (listaProyectos[i]->getCodigo() == objProyecto->getCodigo()) {
			//voy a actualizarlo
			listaProyectos[i]->setCodigo(objProyecto->getCodigo());
			listaProyectos[i]->setCantEdificios(objProyecto->getCantEdificios());
			listaProyectos[i]->setDepartamento(objProyecto->getDepartamento());
			listaProyectos[i]->setProvincia(objProyecto->getProvincia());
			listaProyectos[i]->setDistrito(objProyecto->getDistrito());
			listaProyectos[i]->setNombre(objProyecto->getNombre());
			listaProyectos[i]->setFechaCreacion(objProyecto->getFechaCreacion());
			listaProyectos[i]->setNombreFoto(objProyecto->getNombreFoto());
			break;
		}
	}
	escribirArchivo(listaProyectos);*/
	String^ codigo = objProyecto->getCodigo();
	int cantEdificios = objProyecto->getCantEdificios();
	String^ dpto = objProyecto->getDepartamento();
	String^ provincia = objProyecto->getProvincia();
	String^ distrito = objProyecto->getDistrito();
	String^ nombre = objProyecto->getNombre();
	String^ fechaCreacion = objProyecto->getFechaCreacion();
	String^ nombreFoto = objProyecto->getNombreFoto();
	AbrirConexionBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->CommandText = "UPDATE Proyecto SET Codigo='"+codigo+"',CantidadEdificios='"+cantEdificios+"',Departamento='"+dpto+"',Provincia='"+provincia+"',Distrito='"+distrito+"',NombreCondominio='"+nombre+"',FechaCreacion='"+fechaCreacion+"',NombreFoto='"+nombreFoto+"' WHERE Codigo='"+codigo+"'";
	objSentencia->Connection = this->objConexion;
	objSentencia->ExecuteNonQuery();
	CerrarConexionBD();
}

List<String^>^ ProyectoController::obtenerDepartamentos() {
	List<Proyecto^>^ listaProyectos = buscarAll();
	List<String^>^ listaDepartamentos = gcnew List<String^>();
	for (int i = 0; i < listaProyectos->Count; i++) {
		/*Aqui voy a buscar cada departamento si ya se encuentra en la lista de departamentos*/
		String^ departamento = listaProyectos[i]->getDepartamento();
		/*Voy a buscarlo en la listaDepartamentos*/
		int existe = 0;
		for (int j = 0; j < listaDepartamentos->Count; j++) {
			if (listaDepartamentos[j]->Contains(departamento)) {
				existe = 1;
			}
		}
		if (existe == 0) {
			listaDepartamentos->Add(departamento);
		}
	}
	return listaDepartamentos;
}

List<String^>^ ProyectoController::obtenerDistritosxDptos(String^ departamento) {
	List<String^>^ listaDistritos = gcnew List<String^>();
	List<Proyecto^>^ listaProyectos = buscarProyectos(departamento);
	for (int i = 0; i < listaProyectos->Count; i++) {
		listaDistritos->Add(listaProyectos[i]->getDistrito());
	}
	return listaDistritos;
}

String^ ProyectoController::obtenerNombreFoto(String^ nombreFotoLargo) {
	String^ separadores = "\\";
	//Convert::ToString(0x5C)
	array<String^>^ datos = nombreFotoLargo->Split(separadores->ToCharArray());
	String^ nombreFoto;
	int num = datos->Length;
	nombreFoto = datos[num - 1];
	return nombreFoto;
}

