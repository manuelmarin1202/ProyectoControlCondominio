#include "Tiempo.h"
using namespace ProyectoControlCondominioModel;
Tiempo::Tiempo() {

}
Tiempo::Tiempo(String^ fecha, String^ hora) {
	this->fecha = fecha;
	this->hora = hora;
}