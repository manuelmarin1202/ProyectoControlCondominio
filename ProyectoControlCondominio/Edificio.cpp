#include "Edificio.h"

using namespace ProyectoControlCondominioModel;
Edificio::Edificio() {

}
Edificio::Edificio(int cantPisos, int aforo, int codigo, String^ codigoProyecto) {
	this->cantPisos = cantPisos;
	this->aforo = aforo;
	this->codigo = codigo;
	this->codigoProyecto=codigoProyecto;
}
int Edificio::getCantPisos() {
	return this->cantPisos;
}
void Edificio::setCantPisos(int cantPisos) {
	this->cantPisos = cantPisos;
}
int Edificio::getAforo() {
	return this->aforo;
}
void Edificio::setAforo(int aforo) {
	this->aforo = aforo;
}
int Edificio::getCodigo() {
	return this->codigo;
}
void Edificio::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ Edificio::getCodigoProyecto() {
	return this->codigoProyecto;
}
void Edificio::setCodigoProyecto(String^ codigoProyecto) {
	this->codigoProyecto = codigoProyecto;
}