#include <iostream>
using namespace std;

int main() {
    cout << "// For Loop Output\n";
    for (int i = 0; i <= 18; i += 2) {
        if (i == 10 || i == 12) {
            continue; // تخطي الأرقام 10 و 12
        }
        cout << i << "\n";
    }
    
    cout << "\n// While Loop Output\n";
    int j = 0;
    while (j <= 18) {
        if (j != 10 && j != 12) { // طباعة جميع الأرقام ماعدا 10 و 12
            cout << j << "\n";
        }
        j += 2;
    }
    
    return 0;
}