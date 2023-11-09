#include "GuardiaController.h"

using namespace ProyectoCondominioController;

GuardiaController::GuardiaController() {

}
void GuardiaController::AbrirConexionBD() {
	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20213802;User Id=a20213802;Password=33F7voDy";
	this->objConexion->Open(); /*Apertura de la conexion a BD*/
}
void GuardiaController::CerrarConexionBD() {

}