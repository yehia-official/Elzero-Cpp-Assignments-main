#include <iostream>
#include <string>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int size = 5;
    
    cout << "// For Loop Output\n";
    for (int i = 0; i < size; i++) {
        if (friends[i][0] == 'A') {
            cout << "\"" << friends[i] << "\"\n";
        }
    }
    
    cout << "\n// While Loop Output\n";
    int j = 0;
    while (j < size) {
        if (friends[j][0] == 'A') {
            cout << "\"" << friends[j] << "\"\n";
        }
        j++;
    }
    
    return 0;
}