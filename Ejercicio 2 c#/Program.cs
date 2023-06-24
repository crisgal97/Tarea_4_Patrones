using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine();

        //Creacion de objetos de antena
        AntenaWAN antenaWan = new AntenaWAN();
        Antena5G antena5G = new Antena5G();

        //Cracion de motocicleta y agregacion de antena
        Motocicleta motocicleta1 = new Motocicleta(antenaWan);
        motocicleta1.CrearVehiculo();

        //Cracion de vehiculo y agregacion de antena
        Automovil automovil1 = new Automovil(antena5G);
        automovil1.CrearVehiculo();
    }
}
