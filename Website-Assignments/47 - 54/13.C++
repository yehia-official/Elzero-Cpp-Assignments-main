#include <iostream>
using namespace std;

int main() {
    cout << "// Output Needed\n";
    for (int i = 30; i >= 3; i -= 3) {
        cout << i << "\n";
    }
    
    cout << "\n// Without Even Numbers\n";
    for (int i = 30; i >= 3; i -= 3) {
        if (i % 2 != 0) { // التحقق إذا كان الرقم فردي
            cout << i << "\n";
        }
    }
    
    return 0;
}