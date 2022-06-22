#include <iostream>
#include <assert.h>

std::string getMajorColor(int x) {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    return majorColor[x];
}

std::string getMinorColor(int x) {
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    return minorColor[x];
}

void printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << getMajorColor(i) << " | " << getMinorColor(i) << "\n";
        }
    }
}

int main() {
    assert("0 | " + getMajorColor(0) + " | " + getMinorColor(0) == "0 | White | Blue");
    assert("1 | " + getMajorColor(1) + " | " + getMinorColor(1) == "1 | White | Orange");
    assert("2 | " + getMajorColor(2) + " | " + getMinorColor(2) == "2 | White | Green");
    std::cout << "All is well (maybe!)\n";
    return 0;
}