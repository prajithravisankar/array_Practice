#include <iostream>

using namespace std;


int main() {

    int n, arr[3], value, temp;

    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter value : ";
        cin >> value;

        if (i < 3) {
            // put first 3 values in the array no matter how they are given doesn't matter the order
            arr[i] = value;
        } else {
            // if i >= 3
            // find the max index among the three element and replace it with the input value IF THE INPUT VALUE IS
            // LESS THAN THE VALUE AT THE MAXINDEX. If we replace the maxindex with the input value and input value
            // is greater than the value at max index, we will loose data and loose the point of the problem.

            // find index that has maximum value among the three
            int maxIndex = 0;
            for (int j = 1; j < 3; j++) {
                if (arr[maxIndex] < arr[j]) {
                    maxIndex = j;
                }
            }

            // replace the input value if it is less than max value in the array
            if (value < arr[maxIndex]) {
                arr[maxIndex] = value;
            }
        }
    }


    // now array will have 3 elements in some order but these three will be the 3 lowest of the inputs given

    // find the index in the array with maximum value
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (arr[maxIndex] < arr[i]) {
            maxIndex = i;
        }
    }

    // put the value in the maximum index in index 2
    if (maxIndex != 2) {
        temp = arr[2];
        arr[2] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    // sort the first 2 elements
    if (arr[1] < arr[0]) {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }

    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";

    return 0;
}
