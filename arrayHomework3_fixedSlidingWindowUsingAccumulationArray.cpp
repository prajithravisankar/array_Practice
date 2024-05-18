#include <iostream>

using namespace std;

int main() {

    // IDEA: using accumulation array

    const int N = 200;
    int windowSize, n, arr[N] = {0}, min_index, max_sum = -10000000; // dummy value

    cout << "enter window size: ";
    cin >> windowSize;

    cout << "enter the number of elements in the array: ";
    cin >> n;

    // accumulation array works best if the starting index is 1 and 0th index is initialized to 0
    for (int i = 1; i < n; i++) {
        cout << "enter arr[" << i << "]: ";
        cin >> arr[i];

        // here is how accumulation array works
        // if input array is like 1 2 3 4 5
        // accumulation array is  1 3 6 10 15
        // 3 = 1 + 2
        // 6 = 1 + 2 + 3
        // 15 = 1 + 2 + 3 + 4 + 5
        arr[i] = arr[i] + arr[i - 1]; // since 0th index has 0 we don't have to bother about that
    }

    // now arr has become an accumulation array

    for (int i = windowSize; i <= n; i++) {
        // now what is the relation between accumulation array and our problem of sliding window
        // if we need a sum from a window, all we need to do is
        // SUBTRACT kth term before from our current term and we have the sum from that window.
        // if k = 2
        // original array = 1 2 3 4 5
        // current i = 3
        // accumulation array = 1 3 6 10 15
        // 10 - 3 = 7 = (3 + 4 from original array) is the sum of that window (check in the original array)
        int sum = arr[i] - arr[i - windowSize];
        if (sum > max_sum) {
            max_sum = sum;
            min_index = i - windowSize + 1;
        }
    }

    cout << "array window with max sum is : " << min_index << " to " << min_index + windowSize - 1 << endl;
    cout << "the sum is : " << max_sum;

    return 0;
}
