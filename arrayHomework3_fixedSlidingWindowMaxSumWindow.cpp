#include <iostream>


using namespace std;

int main() {

    // 0 1 2 - 2 3  -> a sub array of index 3 4 5 because sum of values at 3 , 4 , 5 = max sum in the window

    int N, K;
    cout << "enter N: ";
    cin >> N;

    cout << "enter window size: ";
    cin >> K;

    int arr[N] = {0}, sub[K] = {0};

    for (int i = 0; i < N; i++) {
        cout << "enter input value to array: ";
        cin >> arr[i];
    }

    int i = 0;
    int j = i + 1;
    int k = j + 1;
    for (; k < N; i++, j++, k++) {
        sub[i] = arr[i] + arr[j] + arr[k];
    }

    int maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (sub[maxIndex] < sub[i]) {
            maxIndex = i;
        }
    }

    cout << "max window is : " << maxIndex << " " << maxIndex + 1 << " " << maxIndex + 2 << endl;
    cout << "max sum is : " << arr[maxIndex] + arr[maxIndex + 1] + arr[maxIndex + 2] << endl;

    return 0;
}
