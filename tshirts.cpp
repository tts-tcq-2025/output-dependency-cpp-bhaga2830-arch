#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms <= 38) { // Include 38 in the 'S' range
        sizeName = 'S';
    } else if(cms > 38 && cms <= 42) { // Include 42 in the 'M' range
        sizeName = 'M';
    } else { // No need to check cms > 42 explicitly
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(size(37) == 'S'); // Test for 'S'
    assert(size(38) == 'S'); // Test boundary for 'S'
    assert(size(40) == 'M'); // Test for 'M'
    assert(size(42) == 'M'); // Test boundary for 'M'
    assert(size(43) == 'L'); // Test for 'L'
    std::cout << "All is well (maybe!)\n";
}

int main() {
    testTshirtSize();
    return 0;

