#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 102; i++) {
        if (i < 10) {
            cout << "00" << i << "\n";
        } else if (i < 20) {
            cout << "0" << i << "\n";
        } else if (i < 100) {
            cout << i << "\n";
        } else {
            cout << i << "\n";
        }
    }
    
    return 0;
}