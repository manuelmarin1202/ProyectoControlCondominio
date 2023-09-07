#include "Proyecto.h"

Proyecto::Proyecto() {

}
Proyecto::Proyecto(String^ codigo, int cantCondominios) {
	this->codigo = codigo;
	this->cantCondominios = cantCondominios;
}