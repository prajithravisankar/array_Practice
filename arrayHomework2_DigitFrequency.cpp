#include <iostream>

using namespace std;

int main() {

    // digit frequency
    // 999 11 -> 0 - 0 times
    //           1 - 2 times
    //           2 - 0 times
    //           3 - 0 times
    //           ...
    //           9 - 3 times

    int N, frequencyArr[10] = {0}, input, remainder;

    cout << "enter N: ";
    cin >> N;

    while (N--) {
        cout << "enter input: ";
        cin >> input;

        if (input == 0) {
            frequencyArr[0]++;
        }

        while (input >= 10) {
            remainder = input % 10;
            frequencyArr[remainder]++;
            input /= 10;
        }

        frequencyArr[input]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << i << " - " << frequencyArr[i] << " times " << endl;
    }

    return 0;
}
