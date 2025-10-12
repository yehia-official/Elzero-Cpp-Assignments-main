#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int size = 6;
    
    for (int i = 0; i < size; i++) {
        if (names[i].length() == 5) {
            cout << "\"" << names[i] << "\"\n";
        }
    }
    
    return 0;
}