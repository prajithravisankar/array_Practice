#include <iostream>

using namespace std;

int main() {

    // find the sum of 2 integers that produce the max value
    // 1 2 3 4 -> 7
    // 2 4 5 13 -> 18
    // 1 3 7 5 12 -> 19

    int n, numbers[100];
    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "numbers[" << i << "]: ";
        cin >> numbers[i];
    }

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

    cout << "the sum of " << numbers[maxindex1] << " and " << numbers[maxindex2] << " = " << numbers[maxindex1] + numbers[maxindex2];

    return 0;
}
