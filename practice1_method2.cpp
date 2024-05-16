#include <iostream>

using namespace std;


int main() {

    int n, numbers[200];

    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "enter numbers[" << i << "] : ";
        cin >> numbers[i];
    }

    // iterate first 2 and setup 0th index and 1st index as max1 and max2
    int maxindex1 = 0;
    int maxindex2 = 1;
    int temp;

    if (numbers[maxindex1] <= numbers [maxindex2]) {
        temp = maxindex1;
        maxindex1 = maxindex2;
        maxindex2 = temp;
    }

    for (int i = 2; i < n; ++i) {
        if (numbers[maxindex1] <= numbers[i]) { // if max1 is less than or equal to i swap max2 and max1 and then max1 and i
            maxindex2 = maxindex1;
            maxindex1 = i;
        } else if (numbers[maxindex2] < numbers[i]) { // else if max1 not less than i but max2 is less than i swap i and max2
            maxindex2 = i;
        } else {
        continue;
        }
    }

    cout << numbers[maxindex1] << " is max1" << endl;
    cout << numbers[maxindex2] << " is max2" << endl;


    return 0;
}
