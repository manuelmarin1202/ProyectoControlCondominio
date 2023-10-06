#include "Admin.h"
using namespace ProyectoControlCondominioModel;

Admin::Admin(){

}

Admin::Admin(String^ usuario, String^ contra) {
	this->usuario = usuario;
	this->contra = contra;
}

String^ Admin::getUsuario() {
	return this->usuario;
}
void Admin::setUsuario(String^ usuario) {
	this->usuario = usuario;
}
String^ Admin::getContra() {
	return this->contra;
}
void Admin:: setContra(String^ contra) {
	this->contra = contra;
}