#include "tshirts.hpp"
#include <assert.h>

int main() {
    assert(size(38) == 'S');
    assert(size(39) == 'M');
    assert(size(40) == 'M');
    assert(size(41) == 'M');
    assert(size(42) == 'L');
    assert(size(-43) == '\0');
    assert(size(0) == '\0');
    
    std::cout << "All is well\n";
    return 0;
}