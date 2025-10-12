#include <iostream>
using namespace std;

int main() {
    cout << "// For Loop Output\n";
    for (long long i = 10; i <= 100000000; i *= i) {
        cout << i << "\n";
    }
    
    cout << "\n// While Loop Output\n";
    long long j = 10;
    while (j <= 100000000) {
        cout << j << "\n";
        j *= j;
    }
    
    return 0;
}