using System;

//Implementacion de Antenas 
public class AntenaWAN : IAntenas
{
    public void SeleccionarAntena()
    {
        Console.WriteLine("Este vehiculo tiene antena WAN\n");
    }
}

public class Antena5G : IAntenas
{
    public void SeleccionarAntena()
    {
        Console.WriteLine("Este vehiculo tiene antena 5G\n");
    }
}