#include <iostream>

using namespace std;


int main() {

    // most frequent number in an array
    // 1 1 2 3 4 4 5 5 5 -> 5
    // 1 1 2 3 4 5 -> 1

    int n, arr1[200], arr2[200] = {0}; // initially setting all the values of arr2 to 0 otherwise it might contain
    //                                    garbage values
    cout << "number of array elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "arr1[" << i << "]: ";
        cin >> arr1[i];
        arr2[arr1[i]] += 1;
    }

    int max = 0;
    for (int j = 1; j < n; j++) {
        if (arr2[max] < arr2[j]) {
            max = j;
        }
    }

    cout << "maximum repeated numbers is: " << max;

    return 0;

}
