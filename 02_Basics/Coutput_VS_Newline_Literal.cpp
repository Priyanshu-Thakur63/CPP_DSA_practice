#include <iostream>

int main() {
    std::cout << "Line 1, followed by a newline and buffer flush." << std::endl;
    std::cout << "Line 2, followed by just a newline character.\n";
    std::cout << "Line 3 and Line 4 are on the same line of code, but...\n...will appear on separate lines in the output.\n";

    return 0;
}
