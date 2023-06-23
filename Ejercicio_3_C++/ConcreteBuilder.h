#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

class Builder; // Forward declaration of Builder class

#include "LaunchPad.h"

/**
 * @brief The ConcreteBuilder class is a concrete implementation of the Builder interface.
 * It builds a LaunchPad object with specific configurations.
 */
class ConcreteBuilder : public Builder {
private:
    LaunchPad* launchPad; /**< Pointer to the LaunchPad object being built. */

public:
    /**
     * @brief Construct a new ConcreteBuilder object.
     * Initializes the launchPad with default values.
     */
    ConcreteBuilder();

    /**
     * @brief Set the number of horizontal buttons on the launchPad.
     * 
     * @param horizontalButtons The number of horizontal buttons.
     */
    void setHorizontalButtons(int horizontalButtons) override;

    /**
     * @brief Set the number of vertical buttons on the launchPad.
     * 
     * @param verticalButtons The number of vertical buttons.
     */
    void setVerticalButtons(int verticalButtons) override;

    /**
     * @brief Set the availability of RGB lights on the launchPad.
     * 
     * @param rgbLights Boolean value indicating the availability of RGB lights.
     */
    void setRGBLights(bool rgbLights) override;

    /**
     * @brief Set the availability of a USB Type-C port on the launchPad.
     * 
     * @param usbTypeCPort Boolean value indicating the availability of a USB Type-C port.
     */
    void setUSBTypeCPort(bool usbTypeCPort) override;

    /**
     * @brief Set the availability of a 3.5mm audio jack input on the launchPad.
     * 
     * @param jack35Input Boolean value indicating the availability of a 3.5mm audio jack input.
     */
    void setJack35Input(bool jack35Input) override;

    /**
     * @brief Set the availability of a microSD card slot on the launchPad.
     * 
     * @param microSDCardSlot Boolean value indicating the availability of a microSD card slot.
     */
    void setMicroSDCardSlot(bool microSDCardSlot) override;

    /**
     * @brief Set the availability of USB storage on the launchPad.
     * 
     * @param usbStorage Boolean value indicating the availability of USB storage.
     */
    void setUSBStorage(bool usbStorage) override;

    /**
     * @brief Get the resulting LaunchPad object.
     * 
     * @return LaunchPad* A pointer to the resulting LaunchPad object.
     */
    LaunchPad* getResult() const override;
};

#endif  // CONCRETEBUILDER_H
