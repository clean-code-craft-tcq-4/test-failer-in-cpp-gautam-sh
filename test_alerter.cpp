#include "alerter.hpp"
#include <assert.h>

int main() {
    alertInCelcius(400.5, networkAlertStub);
    assert(alertFailureCount == 1);
    alertInCelcius(303.6, networkAlertStub);
    assert(alertFailureCount == 1);
    alertInCelcius(-23.6, networkAlertStub);
    assert(alertFailureCount == 1);
    alertInCelcius(600.9, networkAlertStub);
    assert(alertFailureCount == 2);
    std::cout << "All is well\n";
    return 0;
}