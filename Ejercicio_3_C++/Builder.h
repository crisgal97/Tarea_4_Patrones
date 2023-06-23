#include <iostream>
#include "LaunchPad.h"
// Builder.h
class Builder {
public:
    virtual void setHorizontalButtons(int horizontalButtons) = 0;
    virtual void setVerticalButtons(int verticalButtons) = 0;
    virtual void setRGBLights(bool rgbLights) = 0;
    virtual void setUSBTypeCPort(bool usbTypeCPort) = 0;
    virtual void setJack35Input(bool jack35Input) = 0;
    virtual void setMicroSDCardSlot(bool microSDCardSlot) = 0;
    virtual void setUSBStorage(bool usbStorage) = 0;
    virtual LaunchPad* getResult() const = 0;
};