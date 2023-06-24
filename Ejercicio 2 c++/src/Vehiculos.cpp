#include <iostream>
#include <memory>
using namespace std;
#include <Antenas.hpp>
#include <Vehiculos.hpp>
#include <iostream>

//Implementacion de los 2 tipos de vehiculo

void Motocicleta::crearVehiculo()
{
  std::cout << "\nConstrucción de una motocicleta\n";
  antena.seleccionarAntena(); //se ejecuta el metodo del objecto antena 
}


void Automovil::crearVehiculo()
{
  std::cout << "\nConstrucción de una automovil\n";
  antena.seleccionarAntena(); //se ejecuta el metodo del objecto antena 
}