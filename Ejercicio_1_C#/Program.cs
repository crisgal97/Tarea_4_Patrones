using System;
using System.Collections.Generic;

/// <summary>
/// AnalogSignalConverter class to convert digital signals to analog signals.
/// </summary>
public class AnalogSignalConverter
{
    /// <summary>
    /// Converts a digital signal to an analog signal.
    /// </summary>
    /// <param name="digitalSignal">The digital signal to convert.</param>
    /// <returns>The converted analog signal.</returns>
    public int ConvertDigitalToAnalog(string digitalSignal)
    {
        // Conversion logic goes here
        // This is a simple implementation that converts the binary string to an integer
        return Convert.ToInt32(digitalSignal, 2);
    }
}

/// <summary>
/// AnalogSignalReceiver class to simulate the analog signal receiver.
/// </summary>
public class AnalogSignalReceiver
{
    /// <summary>
    /// Receives and processes an analog signal.
    /// </summary>
    /// <param name="analogSignal">The analog signal to receive.</param>
    public void ReceiveAnalogSignal(int analogSignal)
    {
        // Process the analog signal
        Console.WriteLine("Received analog signal: " + analogSignal);
    }
}

/// <summary>
/// IClient interface.
/// </summary>
public interface IClient
{
    /// <summary>
    /// Sends a digital signal.
    /// </summary>
    /// <param name="digitalSignal">The digital signal to send.</param>
    void SendDigitalSignal(string digitalSignal);
}

/// <summary>
/// IService interface.
/// </summary>
public interface IService
{
    /// <summary>
    /// Processes an analog signal.
    /// </summary>
    /// <param name="analogSignal">The analog signal to process.</param>
    void ProcessAnalogSignal(int analogSignal);
}

/// <summary>
/// Client class.
/// </summary>
public class Client : IClient
{
    /// <summary>
    /// Sends a digital signal.
    /// </summary>
    /// <param name="digitalSignal">The digital signal to send.</param>
    public void SendDigitalSignal(string digitalSignal)
    {
        // Send the digital signal
        Console.WriteLine("Sending digital signal: " + digitalSignal);
    }
}

/// <summary>
/// LegacyService class.
/// </summary>
public class LegacyService : IService
{
    /// <summary>
    /// Processes an analog signal.
    /// </summary>
    /// <param name="analogSignal">The analog signal to process.</param>
    public void ProcessAnalogSignal(int analogSignal)
    {
        // Process the analog signal
        Console.WriteLine("Processing analog signal: " + analogSignal);
    }
}

/// <summary>
/// Adapter class.
/// </summary>
public class Adapter : IClient
{
    private IService legacyService;
    private AnalogSignalConverter analogSignalConverter;
    private AnalogSignalReceiver analogSignalReceiver;

    /// <summary>
    /// Constructor for the Adapter class.
    /// </summary>
    /// <param name="service">The legacy service to adapt.</param>
    public Adapter(IService service)
    {
        legacyService = service;
        analogSignalConverter = new AnalogSignalConverter();
        analogSignalReceiver = new AnalogSignalReceiver();
    }

    /// <summary>
    /// Sends a digital signal.
    /// </summary>
    /// <param name="digitalSignal">The digital signal to send.</param>
    public void SendDigitalSignal(string digitalSignal)
    {
        // Convert the digital signal to analog
        int analogSignal = analogSignalConverter.ConvertDigitalToAnalog(digitalSignal);

        // Send the analog signal to the legacy service
        legacyService.ProcessAnalogSignal(analogSignal);

        // Receive the analog signal
        analogSignalReceiver.ReceiveAnalogSignal(analogSignal);
    }
}

/// <summary>
/// Main class.
/// </summary>
public class Program
{
    public static void Main()
    {
        // Create the objects
        LegacyService legacyService = new LegacyService();
        Adapter adapter = new Adapter(legacyService);
        Client client = new Client();

        // Send a digital signal using the client
        List<string> digitalSignals = new List<string> { "0000", "1010", "0010", "1101" };
        foreach (string digitalSignal in digitalSignals)
        {
            client.SendDigitalSignal(digitalSignal);
        }

        Console.WriteLine();

        // Send a digital signal using the adapter
        foreach (string digitalSignal in digitalSignals)
        {
            adapter.SendDigitalSignal(digitalSignal);
        }
    }
}