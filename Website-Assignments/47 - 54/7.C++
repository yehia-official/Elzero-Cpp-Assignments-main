#include <iostream>
using namespace std;

int main() {
    cout << "// For Loop Output\n";
    for (int i = 2; i <= 128; i *= 2) {
        cout << i << "\n";
    }
    
    cout << "\n// While Loop Output\n";
    int j = 2;
    while (j <= 128) {
        cout << j << "\n";
        j *= 2;
    }
    
    return 0;
}