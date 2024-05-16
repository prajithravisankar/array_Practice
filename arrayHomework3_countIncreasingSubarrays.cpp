#include <iostream>

using namespace std;

int main() {
    cout << "enter N:";
    int N, sum;
    cin >> N;

    sum = N;
    int arr[N];

    int j = 1;
    for (int i = 0; i < N; i++) {
        cout << "enter value to put in arr: ";
        cin >> arr[i];

        if (i > 0) {
            if (arr[i] > arr[i - 1]) {
                sum += j;
                j++;
            }
        }
    }

    cout << "total number of increasing sub arrays are: " << sum;

    return 0;
}
