using System;


//////Implementacion de Vehiculos/////////

public class Motocicleta : Vehiculo
{
    private IAntenas antena;

    public Motocicleta(IAntenas impl)
    {
        antena = impl;
    }

    public override void CrearVehiculo()
    {
        Console.WriteLine("\nConstrucción de una motocicleta");
        antena.SeleccionarAntena();
    }
}

public class Automovil : Vehiculo
{
    private IAntenas antena;

    public Automovil(IAntenas impl)
    {
        antena = impl;
    }

    public override void CrearVehiculo()
    {
        Console.WriteLine("\nConstrucción de un automóvil");
        antena.SeleccionarAntena();
    }
}