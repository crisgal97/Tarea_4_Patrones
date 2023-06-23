#include "ConcreteBuilder.h"

/**
 * @brief Construct a new ConcreteBuilder::ConcreteBuilder object.
 * Initializes the launchPad with default values.
 */
ConcreteBuilder::ConcreteBuilder() {
    launchPad = new LaunchPad(0, 0, false, false, false, false, false);
}

/**
 * @brief Set the number of horizontal buttons on the launchPad.
 * 
 * @param horizontalButtons The number of horizontal buttons.
 */
void ConcreteBuilder::setHorizontalButtons(int horizontalButtons) {
    launchPad->setHorizontalButtons(horizontalButtons);
}

/**
 * @brief Set the number of vertical buttons on the launchPad.
 * 
 * @param verticalButtons The number of vertical buttons.
 */
void ConcreteBuilder::setVerticalButtons(int verticalButtons) {
    launchPad->setVerticalButtons(verticalButtons);
}

/**
 * @brief Set the availability of RGB lights on the launchPad.
 * 
 * @param rgbLights Boolean value indicating the availability of RGB lights.
 */
void ConcreteBuilder::setRGBLights(bool rgbLights) {
    launchPad->setRGBLights(rgbLights);
}

/**
 * @brief Set the availability of a USB Type-C port on the launchPad.
 * 
 * @param usbTypeCPort Boolean value indicating the availability of a USB Type-C port.
 */
void ConcreteBuilder::setUSBTypeCPort(bool usbTypeCPort) {
    launchPad->setUSBTypeCPort(usbTypeCPort);
}

/**
 * @brief Set the availability of a 3.5mm audio jack input on the launchPad.
 * 
 * @param jack35Input Boolean value indicating the availability of a 3.5mm audio jack input.
 */
void ConcreteBuilder::setJack35Input(bool jack35Input) {
    launchPad->setJack35Input(jack35Input);
}

/**
 * @brief Set the availability of a microSD card slot on the launchPad.
 * 
 * @param microSDCardSlot Boolean value indicating the availability of a microSD card slot.
 */
void ConcreteBuilder::setMicroSDCardSlot(bool microSDCardSlot) {
    launchPad->setMicroSDCardSlot(microSDCardSlot);
}

/**
 * @brief Set the availability of USB storage on the launchPad.
 * 
 * @param usbStorage Boolean value indicating the availability of USB storage.
 */
void ConcreteBuilder::setUSBStorage(bool usbStorage) {
    launchPad->setUSBStorage(usbStorage);
}

/**
 * @brief Get the resulting LaunchPad object.
 * 
 * @return LaunchPad* A pointer to the resulting LaunchPad object.
 */
LaunchPad* ConcreteBuilder::getResult() const {
    return launchPad;
}
