using System;
using System.Collections.Generic;

public class AudioSubsystemFacade
{
    public void ExportAudioMixes()
    {
        MixAudio();
        EncodeAudio();
        CompressAudio();
        WriteAudio();
    }

    public void ConvertAudioFormat()
    {
        EncodeAudio();
        FilterFrequencies();
        ConvertAudio();
        WriteAudio();
    }

    private void MixAudio()
    {
        Console.WriteLine("Mixing audio...");
        // Implementación específica
    }

    private void EncodeAudio()
    {
        Console.WriteLine("Encoding audio...");
        // Implementación específica
    }

    private void CompressAudio()
    {
        Console.WriteLine("Compressing audio...");
        // Implementación específica
    }

    private void WriteAudio()
    {
        Console.WriteLine("Writing audio...");
        // Implementación específica
    }

    private void FilterFrequencies()
    {
        Console.WriteLine("Filtering frequencies...");
        // Implementación específica
    }

    private void ConvertAudio()
    {
        Console.WriteLine("Converting audio...");
        // Implementación específica
    }
}

public class LaunchPad
{
    private int horizontalButtons;
    private int verticalButtons;
    private bool rgbLights;
    private bool usbTypeCPort;
    private bool jack35Input;
    private bool microSDCardSlot;
    private bool usbStorage;

    public LaunchPad(int horizontalButtons, int verticalButtons, bool rgbLights, bool usbTypeCPort, bool jack35Input,
        bool microSDCardSlot, bool usbStorage)
    {
        this.horizontalButtons = horizontalButtons;
        this.verticalButtons = verticalButtons;
        this.rgbLights = rgbLights;
        this.usbTypeCPort = usbTypeCPort;
        this.jack35Input = jack35Input;
        this.microSDCardSlot = microSDCardSlot;
        this.usbStorage = usbStorage;
    }

    public int HorizontalButtons
    {
        get { return horizontalButtons; }
        set { horizontalButtons = value; }
    }

    public int VerticalButtons
    {
        get { return verticalButtons; }
        set { verticalButtons = value; }
    }

    public bool RGBLights
    {
        get { return rgbLights; }
        set { rgbLights = value; }
    }

    public bool USBTypeCPort
    {
        get { return usbTypeCPort; }
        set { usbTypeCPort = value; }
    }

    public bool Jack35Input
    {
        get { return jack35Input; }
        set { jack35Input = value; }
    }

    public bool MicroSDCardSlot
    {
        get { return microSDCardSlot; }
        set { microSDCardSlot = value; }
    }

    public bool USBStorage
    {
        get { return usbStorage; }
        set { usbStorage = value; }
    }
}

public abstract class Builder
{
    public abstract void SetHorizontalButtons(int horizontalButtons);
    public abstract void SetVerticalButtons(int verticalButtons);
    public abstract void SetRGBLights(bool rgbLights);
    public abstract void SetUSBTypeCPort(bool usbTypeCPort);
    public abstract void SetJack35Input(bool jack35Input);
    public abstract void SetMicroSDCardSlot(bool microSDCardSlot);
    public abstract void SetUSBStorage(bool usbStorage);
    public abstract LaunchPad GetResult();
}

public class ConcreteBuilder : Builder
{
    private LaunchPad launchPad;

    public ConcreteBuilder()
    {
        launchPad = new LaunchPad(0, 0, false, false, false, false, false);
    }

    public override void SetHorizontalButtons(int horizontalButtons)
    {
        launchPad.HorizontalButtons = horizontalButtons;
    }

    public override void SetVerticalButtons(int verticalButtons)
    {
        launchPad.VerticalButtons = verticalButtons;
    }

    public override void SetRGBLights(bool rgbLights)
    {
        launchPad.RGBLights = rgbLights;
    }

    public override void SetUSBTypeCPort(bool usbTypeCPort)
    {
        launchPad.USBTypeCPort = usbTypeCPort;
    }

    public override void SetJack35Input(bool jack35Input)
    {
        launchPad.Jack35Input = jack35Input;
    }

    public override void SetMicroSDCardSlot(bool microSDCardSlot)
    {
        launchPad.MicroSDCardSlot = microSDCardSlot;
    }

    public override void SetUSBStorage(bool usbStorage)
    {
        launchPad.USBStorage = usbStorage;
    }

    public override LaunchPad GetResult()
    {
        return launchPad;
    }
}

public class Director
{
    private Builder builder;

    public void SetBuilder(Builder builder)
    {
        this.builder = builder;
    }

    public LaunchPad Construct()
    {
        builder.SetHorizontalButtons(8);
        builder.SetVerticalButtons(8);
        builder.SetRGBLights(true);
        builder.SetUSBTypeCPort(true);
        builder.SetJack35Input(true);
        builder.SetMicroSDCardSlot(true);
        builder.SetUSBStorage(true);

        return builder.GetResult();
    }
}

public class Observer
{
    private List<LaunchPad> launchPads = new List<LaunchPad>();

    public void LinkLaunchPads(List<LaunchPad> launchPads)
    {
        this.launchPads = launchPads;
    }

    public void RunSoundTests()
    {
        Console.WriteLine("Running sound tests with the following launch pads:");
        foreach (var launchPad in launchPads)
        {
            Console.WriteLine($"Launch pad with {launchPad.HorizontalButtons} horizontal buttons and {launchPad.VerticalButtons} vertical buttons");
            // Realizar pruebas de sonido
        }
    }

    public void ExportMixes()
    {
        AudioSubsystemFacade audioFacade = new AudioSubsystemFacade();
        audioFacade.ExportAudioMixes();
    }

    public void Update()
    {
        RunSoundTests();
        ExportMixes();
    }
}

public class User
{
    private Builder launchPadBuilder;

    public User(Builder launchPadBuilder)
    {
        this.launchPadBuilder = launchPadBuilder;
    }

    public void CreateLaunchPad()
    {
        Director director = new Director();
        director.SetBuilder(launchPadBuilder);
        LaunchPad launchPad = director.Construct();

        // Utilizar el launch pad creado
        Console.WriteLine("Created launch pad with the following specifications:");
        Console.WriteLine($"Horizontal buttons: {launchPad.HorizontalButtons}");
        Console.WriteLine($"Vertical buttons: {launchPad.VerticalButtons}");
        Console.WriteLine($"RGB lights: {(launchPad.RGBLights ? "Yes" : "No")}");
        Console.WriteLine($"USB Type-C port: {(launchPad.USBTypeCPort ? "Yes" : "No")}");
        Console.WriteLine($"Jack 3.5 input: {(launchPad.Jack35Input ? "Yes" : "No")}");
        Console.WriteLine($"MicroSD card slot: {(launchPad.MicroSDCardSlot ? "Yes" : "No")}");
        Console.WriteLine($"USB storage: {(launchPad.USBStorage ? "Yes" : "No")}");
    }

    public LaunchPad CloneLaunchPad(LaunchPad launchPad)
    {
        return new LaunchPad(
            launchPad.HorizontalButtons,
            launchPad.VerticalButtons,
            launchPad.RGBLights,
            launchPad.USBTypeCPort,
            launchPad.Jack35Input,
            launchPad.MicroSDCardSlot,
            launchPad.USBStorage
        );
    }
}

public class AudioMixer
{
    public void MixAudio()
    {
        Console.WriteLine("Mixing audio...");
        // Detalles de implementación
    }
}

public class Codec
{
    public void EncodeAudio()
    {
        Console.WriteLine("Encoding audio...");
        // Detalles de implementación
    }
}

public class CompressionCodec
{
    public void CompressAudio()
    {
        Console.WriteLine("Compressing audio...");
        // Detalles de implementación
    }
}

public class AudioWriter
{
    public void WriteAudio()
    {
        Console.WriteLine("Writing audio...");
        // Detalles de implementación
    }
}

public class FrequencyFilter
{
    public void FilterFrequencies()
    {
        Console.WriteLine("Filtering frequencies...");
        // Detalles de implementación
    }
}

public class AudioConverter
{
    public void ConvertAudio()
    {
        Console.WriteLine("Converting audio...");
        // Detalles de implementación
    }
}

class Program
{
    static void Main()
    {
        AudioSubsystemFacade audioFacade = new AudioSubsystemFacade();
        audioFacade.ExportAudioMixes();

        ConcreteBuilder builder = new ConcreteBuilder();
        builder.SetHorizontalButtons(8);
        LaunchPad launchPad1 = builder.GetResult();

        builder.SetHorizontalButtons(16);
        LaunchPad launchPad2 = builder.GetResult();

        Console.WriteLine("LaunchPad 1 Horizontal Buttons: " + launchPad1.HorizontalButtons);
        Console.WriteLine("LaunchPad 2 Horizontal Buttons: " + launchPad2.HorizontalButtons);

        // Eliminar el builder, lo que también eliminará los launch pads que creó
        launchPad2 = null;

        // Espera a que se libere la memoria
        GC.Collect();
        GC.WaitForPendingFinalizers();
    }
}

