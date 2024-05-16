#include <iostream>

using namespace std;

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                numbers[i] = i + 10;
            } else {
                numbers[i] = 12;
            }
    }

    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << endl;
    }

    int minimum;
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            minimum = numbers[i];
        } else {
            if (minimum > numbers[i]) {
                minimum = numbers[i];
            }
        }
    }
    cout << minimum << " is minimum number" << endl;
    return 0;
}
