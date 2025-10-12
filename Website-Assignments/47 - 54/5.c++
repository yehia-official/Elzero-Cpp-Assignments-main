#include <iostream>
using namespace std;

int main() {
    cout << "// For Loop Output\n";
    for (int i = 0; i <= 27; i += 3) {
        cout << i << "\n";
    }
    
    cout << "\n// While Loop Output\n";
    int j = 0;
    while (j <= 27) {
        cout << j << "\n";
        j += 3;
    }
    
    return 0;
}