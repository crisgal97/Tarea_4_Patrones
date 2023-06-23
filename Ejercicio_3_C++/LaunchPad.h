#pragma once

/**
 * @brief The LaunchPad class represents a launch pad with various features.
 */
class LaunchPad {
private:
    int horizontalButtons;    /**< Number of horizontal buttons */
    int verticalButtons;      /**< Number of vertical buttons */
    bool rgbLights;           /**< Flag indicating if the launch pad has RGB lights */
    bool usbTypeCPort;        /**< Flag indicating if the launch pad has a USB Type-C port */
    bool jack35Input;         /**< Flag indicating if the launch pad has a 3.5mm jack input */
    bool microSDCardSlot;     /**< Flag indicating if the launch pad has a microSD card slot */
    bool usbStorage;          /**< Flag indicating if the launch pad supports USB storage */

public:
    /**
     * @brief Constructor for LaunchPad.
     * @param horizontalButtons Number of horizontal buttons.
     * @param verticalButtons Number of vertical buttons.
     * @param rgbLights Flag indicating if the launch pad has RGB lights.
     * @param usbTypeCPort Flag indicating if the launch pad has a USB Type-C port.
     * @param jack35Input Flag indicating if the launch pad has a 3.5mm jack input.
     * @param microSDCardSlot Flag indicating if the launch pad has a microSD card slot.
     * @param usbStorage Flag indicating if the launch pad supports USB storage.
     */
    LaunchPad(int horizontalButtons, int verticalButtons, bool rgbLights, bool usbTypeCPort, bool jack35Input,
              bool microSDCardSlot, bool usbStorage)
        : horizontalButtons(horizontalButtons),
          verticalButtons(verticalButtons),
          rgbLights(rgbLights),
          usbTypeCPort(usbTypeCPort),
          jack35Input(jack35Input),
          microSDCardSlot(microSDCardSlot),
          usbStorage(usbStorage) {}

    /**
     * @brief Get the number of horizontal buttons.
     * @return Number of horizontal buttons.
     */
    int getHorizontalButtons() const {
        return horizontalButtons;
    }

    /**
     * @brief Set the number of horizontal buttons.
     * @param buttons Number of horizontal buttons.
     */
    void setHorizontalButtons(int buttons) {
        horizontalButtons = buttons;
    }

    /**
     * @brief Get the number of vertical buttons.
     * @return Number of vertical buttons.
     */
    int getVerticalButtons() const {
        return verticalButtons;
    }

    /**
     * @brief Set the number of vertical buttons.
     * @param buttons Number of vertical buttons.
     */
    void setVerticalButtons(int buttons) {
        verticalButtons = buttons;
    }

    /**
     * @brief Check if the launch pad has RGB lights.
     * @return True if the launch pad has RGB lights, false otherwise.
     */
    bool hasRGBLights() const {
        return rgbLights;
    }

    /**
     * @brief Set the flag indicating if the launch pad has RGB lights.
     * @param lights Flag indicating if the launch pad has RGB lights.
     */
    void setRGBLights(bool lights) {
        rgbLights = lights;
    }

    /**
     * @brief Check if the launch pad has a USB Type-C port.
     * @return True if the launch pad has a USB Type-C port, false otherwise.
     */
    bool hasUSBTypeCPort() const {
        return usbTypeCPort;
    }

    /**
     * @brief Set the flag indicating if the launch pad has a USB Type-C port.
     * @param port Flag indicating if the launch pad has a USB Type-C port.
     */
    void setUSBTypeCPort(bool port) {
        usbTypeCPort = port;
    }

    /**
     * @brief Check if the launch pad has a 3.5mm jack input.
     * @return True if the launch pad has a 3.5mm jack input, false otherwise.
     */
    bool hasJack35Input() const {
        return jack35Input;
    }

    /**
     * @brief Set the flag indicating if the launch pad has a 3.5mm jack input.
     * @param input Flag indicating if the launch pad has a 3.5mm jack input.
     */
    void setJack35Input(bool input) {
        jack35Input = input;
    }

    /**
     * @brief Check if the launch pad has a microSD card slot.
     * @return True if the launch pad has a microSD card slot, false otherwise.
     */
    bool hasMicroSDCardSlot() const {
        return microSDCardSlot;
    }

    /**
     * @brief Set the flag indicating if the launch pad has a microSD card slot.
     * @param slot Flag indicating if the launch pad has a microSD card slot.
     */
    void setMicroSDCardSlot(bool slot) {
        microSDCardSlot = slot;
    }

    /**
     * @brief Check if the launch pad supports USB storage.
     * @return True if the launch pad supports USB storage, false otherwise.
     */
    bool hasUSBStorage() const {
        return usbStorage;
    }

    /**
     * @brief Set the flag indicating if the launch pad supports USB storage.
     * @param storage Flag indicating if the launch pad supports USB storage.
     */
    void setUSBStorage(bool storage) {
        usbStorage = storage;
    }

    /**
     * @brief Create a clone of the launch pad.
     * @return Cloned LaunchPad object.
     */
    LaunchPad* clone() {
        return new LaunchPad(*this);
    }
};
