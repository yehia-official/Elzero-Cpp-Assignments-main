#include <iostream>
using namespace std;

int main() {
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int size = 5;

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " + " << nums[help_num - i] << " = " << nums[i] + nums[help_num - i] << "\n";
    }

    return 0;
}