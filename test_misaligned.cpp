#include "misaligned.hpp"
#include <assert.h>

int main() {
    // testing getting majorColor
    assert(getMajorColor(0) == "White");
    assert(getMajorColor(4) == "Violet");

    // testing for invlaid cases
    bool exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMajorColor(10);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMajorColor(-1);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMajorColor(6);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    // testing getting minorColor
    assert(getMinorColor(0) == "Blue");
    assert(getMinorColor(4) == "Slate");
    
    // testing for invlaid cases
    exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMinorColor(10);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMinorColor(-1);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    exceptionThrown = false;
    try {
        std::string testOutOfRangeColor = getMinorColor(6);
    }
    catch(std::invalid_argument &arg) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);

    // testing getting colorPair for an index
    assert(getColorPair(1,5) == "White | Blue");
    assert(getColorPair(5,5) == "White | Slate");
    assert(getColorPair(6,5) == "Red | Blue");
    assert(getColorPair(25,5) == "Violet | Slate");

    std::cout << "All is well\n";
    return 0;
}