#include <iostream>


int main() {
int elapsed_time = 15;
    while (elapsed_time > 0 ) {
        std::cout << "Traffic Light is Red" << std::endl;
        elapsed_time = elapsed_time - 1;
    }
    std::cout << "Traffic Light is Red" << std::endl;
    return 0;
}