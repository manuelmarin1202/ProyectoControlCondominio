#include "bloqueado.h"

using namespace ProyectoControlCondominioModel;

bloqueado::bloqueado() {

}
bloqueado::bloqueado(String^ fecha, String^ hora) {
	this->fecha = fecha;
	this->hora = hora;
}