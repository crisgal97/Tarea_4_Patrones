#pragma once

#include <vector> // Include the necessary header for std::vector
#include "Observer.h"
#include "LaunchPad.h" // Include the header for LaunchPad

class Tester : public Observer {
private:
    std::vector<LaunchPad*> launchPads;

public:
    void linkLaunchPads(const std::vector<LaunchPad*>& launchPads);
    void runSoundTests();
    void exportMixes();
    void update() override;
};
