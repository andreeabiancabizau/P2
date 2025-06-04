#include <iostream>
#include <string>

class Battery {
private:
    int percentage;
public:
    Battery(int p) : percentage(p) {}

    int getPercentage() const {
        return percentage;
    }
};

class Device {
private:
    std::string model;
    Battery* battery; // pointer la baterie
public:
    Device(const std::string& m) : model(m), battery(nullptr) {}

    void setBattery(Battery* b) {
        battery = b;
    }

    void printInfo() const {
        if (battery == nullptr) {
            std::cout << model << " is not powered." << std::endl;
        } else {
            std::cout << model << " has battery at " << battery->getPercentage() << "%." << std::endl;
        }
    }
};

int main() {
    std::string model;
    int percent;

    std::cin >> model >> percent;

    Device myDevice(model);
    myDevice.printInfo(); // fără baterie

    Battery myBattery(percent);
    myDevice.setBattery(&myBattery);

    myDevice.printInfo(); // cu baterie

    return 0;
}
