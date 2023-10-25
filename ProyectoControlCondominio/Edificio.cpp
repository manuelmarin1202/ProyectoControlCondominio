#include "Edificio.h"

using namespace ProyectoControlCondominioModel;
Edificio::Edificio() {

}
Edificio::Edificio(int cantPisos, int aforo, String^ codigo, List<Piso^>^ listaPisos) {
	this->cantPisos = cantPisos;
	this->aforo = aforo;
	this->codigo = codigo;
	this->listaPisos = listaPisos;
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
String^ Edificio::getCodigo() {
	return this->codigo;
}
void Edificio::setCodigo(String^ codigo) {
	this->codigo = codigo;
}
List<Piso^>^ Edificio::getListaPisos() {
	return this->listaPisos;
}
void Edificio::setListaPisos(List<Piso^>^ listaPisos) {
	this->listaPisos = listaPisos;
}