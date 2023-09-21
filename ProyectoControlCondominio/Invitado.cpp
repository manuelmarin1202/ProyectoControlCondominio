#include "Invitado.h"
using namespace ProyectoControlCondominioModel;
Invitado::Invitado() {

}
Invitado::Invitado(String^ fecha, String^ hora) {
	this->fecha = fecha;
	this->hora = hora;
}