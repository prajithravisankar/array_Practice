#include <iostream>

using namespace std;


int main() {

    int n, arr[1000];
    cout << "enter n < 1000: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

//    for (int i = 0, j = n - 1; i < (n / 2); i++, j--) {
//        if (arr[i] != arr[j]) {
//            cout << "not a palindrome";
//            return 0;
//        }
//    }

    for (int i = 0; i < (n/2); i++) {
        if (arr[i] == arr[n - 1 - i]) {
            continue;
        } else {
            cout << "not palindrome";
            return 0;
        }
    }

    cout << "palindrome";

    return 0;
}
