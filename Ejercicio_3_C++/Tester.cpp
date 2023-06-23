/**
 * @file Tester.h
 * @brief Contains the declaration of the Tester class.
 */

#ifndef TESTER_H
#define TESTER_H

#include <iostream>
#include <vector>
#include "LaunchPad.h"

/**
 * @class Tester
 * @brief The Tester class is responsible for testing and exporting audio mixes.
 */
class Tester {
private:
    std::vector<LaunchPad*> launchPads; /**< The vector of LaunchPad pointers to be tested. */

public:
    /**
     * @brief Links the LaunchPad objects to be tested.
     * @param launchPads The vector of LaunchPad pointers.
     */
    void linkLaunchPads(const std::vector<LaunchPad*>& launchPads);

    /**
     * @brief Runs sound tests with the linked LaunchPad objects.
     */
    void runSoundTests();

    /**
     * @brief Exports audio mixes using the AudioSubsystemFacade.
     */
    void exportMixes();

    /**
     * @brief Updates the Tester by running sound tests and exporting audio mixes.
     */
    void update();
};

#endif // TESTER_H
