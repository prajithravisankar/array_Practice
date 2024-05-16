#include <iostream>

using namespace std;

int main() {

    // IDEA: to find the number of increasing sub arrays for a given array,
    // keep a side track of a counter where, if a current number is > than previous number
    // count++ and add count to the number of items in the array (size of the array). If the
    // current number in the iteration is less than the previous number, count--. Keep iterating
    // through the array, and we will have the number of increasing sub arrays.

    cout << "enter N < 200: ";
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cout << "enter arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = N;
    int cnt = 0; // counter
    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[i - 1]) {
            // if current number is greater than previous number
            cnt++;
            sum += cnt;
        }
        else if (arr[i] < arr[i - 1]) {
            // if current number is less than previous number
            cnt--;
        }
    }

    cout << "number of increasing sub arrays are: " << sum;

    return 0;
}
