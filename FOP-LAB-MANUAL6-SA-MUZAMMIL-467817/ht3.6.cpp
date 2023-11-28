#include <iostream>

int main() {
    int rows = 4;  

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 1 * i; j++) {
            std::cout << 2 * i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

