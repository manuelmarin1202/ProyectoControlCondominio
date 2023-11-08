#include "Emergencia.h"
using namespace ProyectoControlCondominioModel;
Emergencia::Emergencia() {

}
Emergencia::Emergencia(int id, String^ tipo, String^ ubicacion) {
	this->id = id;
	this->tipo = tipo;
	this->ubicacion = ubicacion;
}