#include <iostream>
using namespace std;

int main() {
    cout << "// For Loop Output\n";
    for (int i = 2; i <= 126; i = i * 2 + 2) {
        cout << i << "\n";
    }
    
    cout << "\n// While Loop Output\n";
    int j = 2;
    while (j <= 126) {
        cout << j << "\n";
        j = j * 2 + 2;
    }
    
    return 0;
}