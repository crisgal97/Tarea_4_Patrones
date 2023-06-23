#include <iostream>
#include <vector>
#include "AudioSubsystemFacade.h"
#include "LaunchPad.h"
#include "Builder.h"
#include "Observer.h"
#include "ConcreteBuilder.cpp"
#include "ConcreteBuilder.h"

/**
 * @brief The main function demonstrates the usage of the Builder pattern.
 */
int main() {
    // Create an instance of AudioSubsystemFacade
    AudioSubsystemFacade audioFacade;

    // Export audio mixes using the facade
    audioFacade.exportAudioMixes();

    // Create a ConcreteBuilder object
    ConcreteBuilder builder;

    // Set the horizontal buttons of the builder
    builder.setHorizontalButtons(8);
    // Get the result, which is a LaunchPad object
    LaunchPad* launchPad1 = builder.getResult();

    // Set the horizontal buttons of the builder again
    builder.setHorizontalButtons(16);
    // Get another LaunchPad object
    LaunchPad* launchPad2 = builder.getResult();

    // Print the number of horizontal buttons for both launch pads
    std::cout << "LaunchPad 1 Horizontal Buttons: " << launchPad1->getHorizontalButtons() << std::endl;
    std::cout << "LaunchPad 2 Horizontal Buttons: " << launchPad2->getHorizontalButtons() << std::endl;

    // Delete the launch pad created by the builder
    delete launchPad2;

    return 0;
}

