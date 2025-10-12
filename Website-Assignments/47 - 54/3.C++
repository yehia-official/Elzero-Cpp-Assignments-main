#include <iostream>
using namespace std;

int main() {
    int num1, num2, start, end;
    
    cout << "Number One: ";
    cin >> num1;
    cout << "Number Two: ";
    cin >> num2;
    
    if (num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }
    
    bool first = true;
    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) { // Check for odd
            if (!first) {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    }
    
    return 0;
}