#include <iostream>

using namespace std;


int main() {

    int lastVal = -1; // setting dummy value
    int currentVal;
    int n;
    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter val: ";
        cin >> currentVal;

        if (lastVal != currentVal) {
            cout << currentVal << endl;
        }

    }



    return 0;
}
