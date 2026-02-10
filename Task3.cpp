#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool status;

public:
    SmartDevice(string name, string type, bool state) {
        deviceName = name;
        deviceType = type;
        status = state;
        cout << deviceName << " ," << deviceType << ", is now " << (status ? "ON" : "OFF") << endl;
    }

    ~SmartDevice() {
        cout << deviceName << " (" << deviceType << ") is powering down forever. Goodbye." << endl;
    }
};

int main() {
    SmartDevice* d1 = new SmartDevice("Living Room Light", "Smart Light", true);
    SmartDevice* d2 = new SmartDevice("Cleaner", "Vacuum", true);
    SmartDevice* d3 = new SmartDevice("Coffee maker", "Coffee Machine", false);

    delete d1;
    delete d2;
    delete d3;

    return 0;
}

