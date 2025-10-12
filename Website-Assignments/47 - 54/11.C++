#include <iostream>
#include <string>
using namespace std;

int main() {
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int friendsCount = 3;

    for (int i = 0; i < friendsCount; i++) {
        // حساب طول الخطوط بناءً على طول الاسم
        int lineLength = friends[i].length() * 4 + 3; // كل حرف يأخذ 4 مسافات (حرف + فاصلة + مسافتين)
        
        // طباعة الرأس
        cout << "=========\n";
        cout << "= " << friends[i] << " =\n";
        
        // طباعة الخط العلوي
        for (int j = 0; j < lineLength; j++) {
            cout << "=";
        }
        cout << "\n";
        
        // طباعة الحروف مفصولة بفواصل
        cout << "== ";
        for (int k = 0; k < friends[i].length(); k++) {
            cout << friends[i][k];
            if (k < friends[i].length() - 1) {
                cout << ", ";
            }
        }
        cout << " =\n";
        
        // طباعة الخط السفلي
        for (int j = 0; j < lineLength; j++) {
            cout << "=";
        }
        cout << "\n\n";
    }

    return 0;
}