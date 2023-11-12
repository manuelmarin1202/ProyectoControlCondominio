#include "Emergencia.h"
using namespace ProyectoControlCondominioModel;
Emergencia::Emergencia() {

}
Emergencia::Emergencia(int codigo, String^ tipo, String^ ubicacion, String^ fecha, String^ hora) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->ubicacion = ubicacion;
	this->fecha = fecha;
	this->hora = hora;
}

int Emergencia::getCodigo() {
	return this->codigo;
}
void Emergencia::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ Emergencia::getTipo() {
	return this->tipo;
}
void Emergencia::setTipo(String^ tipo) {
	this->tipo = tipo;
}
String^ Emergencia::getUbicacion() {
	return this->ubicacion;
}
void Emergencia::setUbicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}
String^ Emergencia::getFecha() {
	return this->fecha;
}
void Emergencia::setFecha(String^ fecha) {
	this->fecha = fecha;
}
String^ Emergencia::getHora() {
	return this->hora;
}
void Emergencia::setHora(String^ hora) {
	this->hora = hora;
}