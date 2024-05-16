#include <iostream>
#include <cassert>

using namespace std;


int main() {

    // unique numbers ordered list
    // 1 2 3 4 -> 1 2 3 4
    // 1 1 2 3 4 -> 1 2 3 4
    // 1 2 2 3 4 4 -> 1 2 3 4

    // constraints:
    // no nested loops
    // only one array
    // do it even without arrays

    int n, arr[1000];
    cout << "enter n < 1000: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

//    for (int i = 0; i < n; i++) {
//        if (i - 1 == n - 2 && i + 1 == n) {
//            if (arr[i-1] == arr[i]) {
//                continue;
//            } else {
//                cout << arr[i];
//            }
//        }
//
//        if (i + 1 < n && arr[i] != arr[i + 1]) {
//            cout << arr[i] << " ";
//        }
//    }

    cout << arr[0] << " ";

    for (int i = 1; i < n; i++) {
        assert(arr[i] >= arr[i-1]);

        if (arr[i] != arr[i-1]) {
            cout << arr[i] << " ";
        }
    }


    return 0;
}
