#include <iostream>
#include <memory>
using namespace std;
#include <Antenas.hpp>
#include <Vehiculos.hpp>
#include <iostream>

//Implementacion de los 2 tipos de antena


void AntenaWAN::seleccionarAntena()
{
  std::cout << "Este vehiculo tiene antena WAN\n"
            << '\n';
}

void Antena5G::seleccionarAntena()
{
  std::cout << "Este vehiculo tiene antena 5G\n"
            << '\n';
}
