#include <iostream>
#include "LaunchPad.h"
#include "Builder.h"
// Director.h
class Director {
private:
    Builder* builder;

public:
    void setBuilder(Builder* builder) {
        this->builder = builder;
    }

    LaunchPad* construct() {
        builder->setHorizontalButtons(8);
        builder->setVerticalButtons(8);
        builder->setRGBLights(true);
        builder->setUSBTypeCPort(true);
        builder->setJack35Input(true);
        builder->setMicroSDCardSlot(true);
        builder->setUSBStorage(true);

        return builder->getResult();
    }
};