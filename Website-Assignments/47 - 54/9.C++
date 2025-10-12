#include <iostream>
#include <string>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    
    cout << "// For Loop Output\n";
    for (int i = 1; i <= 2; i++) {
        cout << "\"" << friends[i] << "\"\n";
    }
    
    cout << "\n// While Loop Output\n";
    int j = 1;
    while (j <= 2) {
        cout << "\"" << friends[j] << "\"\n";
        j++;
    }
    
    return 0;
}