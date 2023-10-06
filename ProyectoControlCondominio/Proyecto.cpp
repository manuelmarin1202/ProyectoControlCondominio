#include "Proyecto.h"
using namespace ProyectoControlCondominioModel;
Proyecto::Proyecto() {

}
Proyecto::Proyecto(String^ codigo, int cantEdificios, String^ Departamento, String^ Provincia, String^ Distrito, String^ NombreCondominio, String^ FechaCreacion){
	this->codigo = codigo;
	this->cantEdificios = cantEdificios;
	this->Departamento=Departamento;
	this->Provincia=Provincia;
	this->Distrito=Distrito;
	this->NombreCondominio=NombreCondominio;
	this->FechaCreacion=FechaCreacion;
}

String^ Proyecto::getCodigo() {
	return this->codigo;
}
void Proyecto::setCodigo(String^ codigo) {
	this->codigo = codigo;
}
String^ Proyecto::getNombre() {
	return this->NombreCondominio;
}
void Proyecto::setNombre(String^ NombreCondominio) {
	this->NombreCondominio = NombreCondominio;
}
int Proyecto::getCantEdificios() {
	return this->cantEdificios;
}
void Proyecto::setCantEdificios(int cantEdificios) {
	this->cantEdificios = cantEdificios;
}
String^ Proyecto::getDepartamento() {
	return this->Departamento;
}
void Proyecto::setDepartamento(String^ Departamento) {
	this->Departamento = Departamento;
}
String^ Proyecto::getProvincia() {
	return this->Provincia;
}
void Proyecto::setProvincia(String^ Provincia) {
	this->Provincia = Provincia;
}
String^ Proyecto::getDistrito() {
	return this->Distrito;
}
void Proyecto::setDistrito(String^ Distrito) {
	this->Distrito = Distrito;
}
String^ Proyecto::getFechaCreacion() {
	return this->FechaCreacion;
}
void Proyecto::setFechaCreacion(String^ FechaCreacion) {
	this->FechaCreacion = FechaCreacion;
}