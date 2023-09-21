#include "Residente.h"
using namespace ProyectoControlCondominioModel;
Residente::Residente() {

}
Residente::Residente(String^ fecha, String^ hora) {
	this->fecha = fecha;
	this->hora = hora;
}