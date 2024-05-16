#include <iostream>

using namespace std;

int main() {

    // Idea
    // idea is the make positive shift of all the values making them positive and use these
    // numbers as index for frequency counter array. After counting the frequency of all the
    // values, when we print we say "maxPos - #Constraint Number of Negative numbers is repeated
    // frequency[maxPos]"
    // if total negative values can be taken upto -500, we can say maxPos - 500 is repated
    // frequency[maxPos]. ex, (498 - 500) -2 is repated frequencyArr[498] = 7, 7 times.


    // find the most frequent number
    // 1 -1 -1 0 5 -> -1 repeated 2 times

    int N, val;
    cout << "enter N: ";
    cin >> N;

    // constraints: -500 <= arr[i] <= 270;
    // to make all the numbers accomodate in the same array:
    int MAX = 500 + 1 + 270;
    int frequencyArr[MAX]= {0}; // initialize all the values to be 0

    for (int i = 0; i < N; i++) {
        cout << "enter value: ";
        cin >> val;

        // make all the values to be positive
        val = val + 500; // -20 -> 480, 55 -> 555
        frequencyArr[val] += 1; // increase frequency for that value
    }

    int maxPos = 0;
    for (int i = 1; i < MAX; i++) {
        if (frequencyArr[maxPos] < frequencyArr[i]) {
            maxPos = i;
        }
    }

    // maxPos - 500 is the actual value
    cout << maxPos - 500 << " is repeated " << frequencyArr[maxPos] << " times ... most of "
    << "any number " << endl;


    return 0;
}
