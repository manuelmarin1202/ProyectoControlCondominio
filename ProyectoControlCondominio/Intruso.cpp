#include "Intruso.h"
using namespace ProyectoControlCondominioModel;
Intruso::Intruso() {

}
Intruso::Intruso(int id, String^ fecha, String^ hora, String^ nombreFoto){
	this->id = id;
	this->fecha = fecha;
	this->hora = hora;
	this->nombreFoto = nombreFoto;
}

int Intruso::getId() {
	return this->id;
}
void Intruso::setId(int id) {
	this->id = id;
}
String^ Intruso::getFecha() {
	return this->fecha;
}
void Intruso::setFecha(String^ fecha) {
	this->fecha = fecha;
}
String^ Intruso::getHora() {
	return this->hora;
}
void Intruso::setHora(String^ hora) {
	this->hora = hora;
}
String^ Intruso::getNombreFoto() {
	return this->nombreFoto;
}
void Intruso::setNombreFoto(String^ nombreFoto) {
	this->nombreFoto = nombreFoto;
}