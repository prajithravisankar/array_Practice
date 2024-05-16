#include <iostream>

using namespace std;

int main() {

    // is increasing array
    // 1 2 4 10 -> yes
    // 1 2 10 4 -> no

    const int N = 200;
    int n, arr[N];
    cout << "enter number of array numbers: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter arr[" << i << "]: ";
        cin >> arr[i];
    }

//    for (int i = 0, j = i + 1; i < n; i++, j++) {
//        if (arr[i] < arr[j]) {
//            continue;
//        } else {
//            cout << "not an increasing array";
//            return 0;
//        }
//    }

    bool increasing = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            increasing = 0;
            break;
        }
    }

    if (increasing) {
        cout << "increasing";
    }
    else {
        cout << "not increasing";
    }


    return 0;
}
