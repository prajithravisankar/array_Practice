#include <iostream>


using namespace std;

int main() {

    // min max swap:
    // 1 2 3 4 5 -> 5 2 3 4 1
    // 1 1 2 3 4 -> 4 4 2 3 1
    // 1 2 3 5 5 -> 5 2 3 1 1
    // 1 2 1 3 4 5 5 5 -> 5 2 5 3 4 1 1 1

    int n, arr[200];
    // we have to be careful about the initial values of min and max value in
    // any questions related to min and max problems.
    // if the give problem and give something like all values are [0, 2000]
    // we can/ SHOULD INITIALIZE min = something > 2000. and max = something < 0.
    // min = 10000 and max = -1 and then use for loop to solve the problem find min and max
    // and do the rest of the problem.
    cout << "enter length of array: ";
    cin >> n;


    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[1];
    int temp;

    if (min > max) {
        temp = max;
        max = min;
        min = temp;
    }

    // find min and max numbers
    for (int i = 2; i < n; i++) {
        if (min >= arr[i]) {
            min = arr[i];
        }

        if (max <= arr[i]) {
            max = arr[i];
        }
    }

    // replace min and max numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) {
            arr[i] = max;
        } else if (arr[i] == max) {
            arr[i] = min;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    /*

    for (int i = 0; i < n; i++) {
    does not unnecessarily prints space at the end of the list and also at the beginning of the list
        if (i) {
            cout << " ";
        }

        cout << a[i];
    }

    */

    return 0;
}
