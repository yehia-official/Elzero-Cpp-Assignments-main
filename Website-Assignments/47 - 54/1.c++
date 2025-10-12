#include <iostream>

int main() {
    std::cout << "// For Output\n";
    for (int i = 0; i <= 10; i++) {
        std::cout << i << "\n";
    }
    
    std::cout << "\n// While Output\n";
    int j = 0;
    while (j <= 10) {
        std::cout << j << "\n";
        j++;
    }
    
    std::cout << "\n// Do While Output\n";
    int k = 0;
    do {
        std::cout << k << "\n";
        k++;
    } while (k <= 10);
    
    return 0;
}