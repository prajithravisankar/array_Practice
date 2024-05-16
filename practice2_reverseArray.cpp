#include <iostream>

using namespace std;

int main() {
    // reverse array "in place" - in the same array
    // 1 2 3 -> 3 2 1
    // 1 2 3 4 -> 4 3 2 1
    // 1 2 3 4 5 -> 5 4 3 2 1
    // 1 10 12 22 -> 22 12 10 1


    int n, numbers[200], temp;
    cout << "enter number of array elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter numbers[" << i << "] : ";
        cin >> numbers[i];
    }

    for (int i = 0, j = n - 1; i <= (n / 2); i++, j--) {
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }


    return 0;

}
