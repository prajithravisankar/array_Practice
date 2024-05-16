#include <iostream>

using namespace std;

int main() {

    // sliding window brute force method

    int N = 200;
    int n, K, arr[N] = {0}, min_index, max_sum = -100000000; // dummy max value for comparison

    cout << "enter number of elements in array: ";
    cin >> n;
    cout << "enter sliding window size: ";
    cin >> K;

    for (int i = 0; i < n; i++) {
        cout << "enter arr[" << i << "]: ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - K + 1; i++) {
        int sum = 0;
        for (int j = 0; j < K; j++) {
            sum += arr[i + j];
        }

        if (sum > max_sum) {
            max_sum = sum;
            min_index = i;
        }
    }


    cout << "max sum in a window is : " << max_sum << " starting from : " << min_index << " to ";
    cout << min_index + K - 1;

    return 0;

}
