#include <iostream>
#include "LaunchPad.h"
#include "Builder.h"
#include "Director.h"
// User.h
class User {
private:
    Builder* launchPadBuilder;

public:
    User(Builder* launchPadBuilder) : launchPadBuilder(launchPadBuilder) {}

    void createLaunchPad() {
        Director director;
        director.setBuilder(launchPadBuilder);
        LaunchPad* launchPad = director.construct();

        // Use the created launch pad
        std::cout << "Created launch pad with the following specifications:" << std::endl;
        std::cout << "Horizontal buttons: " << launchPad->getHorizontalButtons() << std::endl;
        std::cout << "Vertical buttons: " << launchPad->getVerticalButtons() << std::endl;
        std::cout << "RGB lights: " << (launchPad->hasRGBLights() ? "Yes" : "No") << std::endl;
        std::cout << "USB Type-C port: " << (launchPad->hasUSBTypeCPort() ? "Yes" : "No") << std::endl;
        std::cout << "Jack 3.5 input: " << (launchPad->hasJack35Input() ? "Yes" : "No") << std::endl;
        std::cout << "MicroSD card slot: " << (launchPad->hasMicroSDCardSlot() ? "Yes" : "No") << std::endl;
        std::cout << "USB storage: " << (launchPad->hasUSBStorage() ? "Yes" : "No") << std::endl;
    }

    LaunchPad* cloneLaunchPad(LaunchPad* launchPad) {
        return new LaunchPad(*launchPad);
    }
};