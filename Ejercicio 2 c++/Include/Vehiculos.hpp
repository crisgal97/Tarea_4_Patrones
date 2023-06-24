#include <iostream>
#include <memory>
using namespace std;
#include <iostream>


//Definicion de la clase abstracta de Vehiculos 
class Vehiculo
{
public:
    virtual void crearVehiculo() = 0;
};

class Motocicleta : public Vehiculo
{

public:
    Motocicleta(IAntenas &impl) : antena(impl) //constructor requiere objecto antena 
    {
    }

    virtual void crearVehiculo();

private:
    IAntenas &antena;
};

class Automovil : public Vehiculo
{

public:
    Automovil(IAntenas &impl) : antena(impl) //constructor requiere objecto antena 
    {
    }

    virtual void crearVehiculo();

private:
    IAntenas &antena;
};
