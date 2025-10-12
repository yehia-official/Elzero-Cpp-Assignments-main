#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 1100; i += 100) {
        if (i == 100) {
            cout << i << "\n";
        } else {
            cout << i << "\n";
            cout << i << "\n";
        }
    }
    
    return 0;
}
// ====================================

#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 1100; i += 100) {
        cout << i << "\n";
        if (i != 100) {
            cout << i << "\n";
        }
    }
    
    return 0;
}