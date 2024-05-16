#include <iostream>

using namespace std;


int main() {

    // find the most frequent number
    // 1 -1 -1 0 5 -> -1 repeated 2 times

    // idea: put the numbers in 2 different frequency array (array that counts the number of times
    // a value is repeated). One for positive values, and one for negative values. As we get input, depending
    // on if they are positive or negative increase the frequency in corresponding arrays. Next get the
    // max frequency in these arrays, ie max frequency of a negative value, and positive values. Compare for
    // which among these 2 is the maximum, and print them with their frequency value, where index
    // is the actual value (make it -ve for -ve value) and frequency value in the array is the number of times
    // a number is repeatedly got input.

    int N, val, negArr[500] = {0}, posArr[270] = {0}, maxNeg, maxPos;

    cout << "enter N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "enter array value to put in the array positive or negative:  ";
        cin >> val;

        if (val >= 0) {
                posArr[val] += 1;
        }
        else if (val < 0) {
                val *= -1;
                negArr[val] += 1;
        }
    }

    maxNeg = 0;
    for (int i = 1; i < 500; i++) {
        if (negArr[maxNeg] < negArr[i]) {
            maxNeg = i;
        }
    }

    maxPos = 0;
    for (int i = 1; i < 500; i++) {
        if (posArr[maxPos] < posArr[i]) {
            maxPos = i;
        }
    }

    if (negArr[maxNeg] < posArr[maxPos]) {
        cout << maxPos << " is repeated the maximum of " << posArr[maxPos] << endl;
    }
    else {
        cout << "-" << maxNeg << " is repeated the maximum of " << negArr[maxNeg] << endl;
    }

    return 0;

}
