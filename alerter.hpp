#include <iostream>

int alertFailureCount = 0;

int networkAlertStub(float celcius) {
    if(celcius > 200) {
        std::cout << "ALERT: Temperature is " << celcius << " celcius. Raising alert!\n";
        return 500;
    }
    return 200;
}

void alertInCelcius(float farenheit, int (*networkAlertStub)(float)) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);

    if (returnCode != 200) {
        alertFailureCount += 1;
    }
}
