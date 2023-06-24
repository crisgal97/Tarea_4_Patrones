#include <iostream>
#include <memory>
using namespace std;
#include <Antenas.hpp>
#include <Vehiculos.hpp>
#include <iostream>


int main()
{

  std::cout << '\n';

  //Creacion de las 2 antenas 

  AntenaWAN antenaWan;
  Antena5G antena5G;

  //Creacion de motocicleta y transferencia de la antena a utilizar
  Motocicleta motocicleta1(antenaWan); // (3)
  motocicleta1.crearVehiculo();


  //Creacion del automovil y transferencia de la antena a utilizar
  Automovil automovil1(antena5G); // (4)
  automovil1.crearVehiculo();
}