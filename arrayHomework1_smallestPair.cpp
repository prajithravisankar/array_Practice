#include <iostream>

using namespace std;


int main() {

    // smallest pair : A[i] + A[j] + j (second smallest) - i (smallest)
    // 1 2 3 -> 1 + 2 + 1 - 0 = 4
    // 3 2 1 -> 1 + 2 + 1 - 0 = 4
    // 7 4 1 3 2 -> 1 + 2 + 4 - 2 = 5


    int n, s, ss, temp, arr[200];

    cout << "enter n <= 200: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    s = 0;
    ss = 1;

    if (s > ss) {
        temp = s;
        s = ss;
        ss = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[s] >= arr[i]) {
            ss = s;
            s = i;
        }
        else if (arr[ss] > arr[i]) {
            ss = i;
        }
        else {
            continue;
        }
    }


    cout << arr[s] + arr[ss] + ss - s << " is the required smallest pair";

    return 0;
}
