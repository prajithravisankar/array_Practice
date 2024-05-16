#include <iostream>

using namespace std;

int main() {

    // IDEA: using brute force, find the window with max sum, and make a note of the index,
    // from this we can get the window with max sum in an array. There is efficient way to do this.

    cout << "enter number of elements in array: ";
    int N;
    cin >> N;
    int arr[N] = {0};

    for (int i = 0; i < N; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "enter window size: ";
    int window;
    cin >> window;

    int dummyMax = -200000, slidingIndex = 0;

    for (int i = 0; i < N - window + 1; i++) {
        int sum = 0;
        for (int j = 0; j < window; j++) {
            sum += arr[i + j];
        }

        if (sum > dummyMax) {
            dummyMax = sum;
            slidingIndex = i;
        }
    }

    cout << "the max sum value is : " << dummyMax << " starting from : " << slidingIndex << " to ";
    cout << slidingIndex + window - 1 << endl;

    return 0;
}
