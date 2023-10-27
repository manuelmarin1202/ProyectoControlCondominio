#include "DatosPersonales.h"
using namespace ProyectoControlCondominioModel;

DatosPersonales::DatosPersonales() {

}

DatosPersonales::DatosPersonales(String^ nombre, String^ apellidoPaterno, String^ apellidoMaterno, String^ dni, String^ nombreFoto) {
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno =apellidoMaterno;
	this->dni = dni;
	this->nombreFoto = nombreFoto;
}

String^ DatosPersonales::getNombres() {
	return this->nombre;
}
void DatosPersonales::setNombres(String^ nombre) {
	this->nombre = nombre;
}
String^ DatosPersonales::getApellidoPaterno() {
	return this->apellidoPaterno;
}
void DatosPersonales::setApellidoPaterno(String^ apellidoPaterno) {
	this->apellidoPaterno = apellidoPaterno;
}
String^ DatosPersonales::getApellidoMaterno() {
	return this->apellidoMaterno;
}
void DatosPersonales::setApellidoMaterno(String^ apellidoMaterno) {
	this->apellidoMaterno = apellidoMaterno;
}
String^ DatosPersonales::getDni() {
	return this->dni;
}
void DatosPersonales::setDni(String^ dni) {
	this->dni = dni;
}
String^ DatosPersonales::getNombreFoto() {
	return this->nombreFoto;
}
void DatosPersonales::setNombreFoto(String^ nombreFoto) {
	this->nombreFoto = nombreFoto;
}
