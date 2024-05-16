#include <iostream>

using namespace std;

int main() {

    // IDEA:
    // use frequency array to put the frequency of value (index). Using this frequency array, print the
    // number of times the value is present. if freq[3] = 5 print ... 3 3 3 3 3 ... like wise go in order
    // from value (index) 0 to 500 if the value has frequency of at least 1.

    // 1 3 3 2 5 1 5 7 -> 1 1 2 3 3 5 5 7

    int N, value, MAX = 500+1, freqArray[MAX] = {0};
    cout << "enter N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "enter value: ";
        cin >> value;
        freqArray[value] += 1;
    }

    for (int j = 0; j < MAX; j++) {
        if (freqArray[j] != 0) {
            while (freqArray[j]--) {
                cout << j << " ";

            }
        }
    }

    return 0;
}
