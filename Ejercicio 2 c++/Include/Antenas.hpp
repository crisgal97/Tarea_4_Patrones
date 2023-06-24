#include <iostream>
#include <memory>
using namespace std;
#include <iostream>

//Definicion de la clase interface de Antenas 
class IAntenas
{ 
public:

  virtual void seleccionarAntena() = 0;
  
};

class AntenaWAN : public IAntenas
{
public:
  void seleccionarAntena();
};

class Antena5G : public IAntenas
{
public:
  void seleccionarAntena();
};





