#include <iostream>

using namespace std;

int main() {

    const int N = 200;
    int n, K, arr[N] = {0};
    cout << "enter n: ";
    cin >> n;
    cout << "enter window size: ";
    cin >> K;

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = 0;
    int max_sum = 0;
    int min_index = 0;
    for (int i = 0; i < K; i++) {
        max_sum += arr[i];
    }

    for (int i = K; i < n; i++) {
        sum = sum - arr[i - K] + arr[i]; // subtract 1st element of previous thing, and add the current element
        if (sum > max_sum) { // check if current sum from prev step is greater than largest of previous sums
            max_sum = sum;
            min_index = i - K + 1;
        }
    }

    cout << "max sum is : " << max_sum << " from " << min_index << " to " << min_index + K - 1;

    return 0;
}
