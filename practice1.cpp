#include <iostream>

using namespace std;

int main() {
    int n, numbers[200];

    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "numbers[" << i << "] : ";
        cin >> numbers[i];
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (numbers[maxIndex] < numbers[i]) {
            maxIndex = i;
        }
    }

    int max1 = numbers[maxIndex];
    numbers[maxIndex] = -1000000000;

    maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (numbers[maxIndex] < numbers[i]) {
            maxIndex = i;
        }
    }

    int max2 = numbers[maxIndex];

    cout << "max1 : " << max1;
    cout << endl << "max2: " << max2;

}
