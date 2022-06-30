#include <iostream>
#include <assert.h>
#include <vector>

std::string getMajorColor(int zeroBasedIndex) {
    std::vector<std::string> majorColor = {"White", "Red", "Black", "Yellow", "Violet"};
    if( zeroBasedIndex < 0 || zeroBasedIndex >= int(majorColor.size()))
        throw std::invalid_argument("Argument should be positive integer less than or equal to the number of major colors");
    return majorColor[zeroBasedIndex];
}

std::string getMinorColor(int zeroBasedIndex) {
    std::vector<std::string> minorColor = {"Blue", "Orange", "Green", "Brown", "Slate"};
    if( zeroBasedIndex < 0 || zeroBasedIndex >= int(minorColor.size()))
        throw std::invalid_argument("Argument should be positive integer less than or equal to the number of minor colors");
    return minorColor[zeroBasedIndex];
}

std::string getColorPair(int x, int minorColorRange) {
    std::string majorColor, minorColor;
    int zeroBasedPair = x - 1;
    try {
        majorColor = getMajorColor(zeroBasedPair / minorColorRange);
        minorColor = getMinorColor(zeroBasedPair % minorColorRange);
    }
    catch(std::invalid_argument &arg) {
        throw std::invalid_argument(arg);
    }
    return majorColor + " | " + minorColor;
}

void printColorMap(int majorColorRange, int minorColorRange) {
    int index = 0;
    for(int i = 0; i < majorColorRange; ++i) {
        for(int j = 1; j <= minorColorRange; ++j) {
            index = i * minorColorRange + j;
            std::cout << index << " | " << getColorPair(index, minorColorRange);
        }
    }
}