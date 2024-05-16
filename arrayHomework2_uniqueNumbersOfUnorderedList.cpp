#include <iostream>

using namespace std;


int main() {

    // IDEA:
    // use frequency array and set the input value (treat value as index) to 1 if it is not already 1.
    // and put it in another array in preserving the input order way (have a sepearate index and increment it inside
    // this if conditional). Then print the another array or print the value right after making the value (index)
    // to 1. In this way, if we visit the value again, we can see the index with value have 1 in it and
    // we skip this and don't print again.

    // 1 5 4 4 3 1 5 -> 1 5 4 3
    // 1 2 5 2 2 1 5 -> 1 2 5
    // 5 4 3 3 1 2 -> 5 4 3 1 2

    int N, value, MAX = 500, hasArray[MAX + 1] = {0};

    cout << "enter N: ";
    cin >> N;

    int arr[N];
    int j = 0;
    for (int i = 0; i < N; i++) {
        cout << "enter value: ";
        cin >> value;

        if (hasArray[value] != 1) {
            hasArray[value] = 1;
            arr[j] = value;
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
