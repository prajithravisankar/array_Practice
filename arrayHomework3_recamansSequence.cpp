#include <iostream>

using namespace std;

int main() {

    // index 6 -> value 13

    // IDEA:
    // get the first 5 sequence, and have a yesNo array (1 = has it and 0 = does not have it yet).
    // for 6 to 200 get the previous index and calculate the value based on 2 method, and if the
    // first method has the value in yesNo array, put the value calculated by 2nd method in remacan
    // array otherwise go for first method.

    // THE 201 * 10 IS AN EXPERIMENTAL VALUE. WE HAVE TO GUESS A LOT, SINCE THE VALUE OF THE REMACAN
    // SEQUENCE MAY OR MAY NOT JUMP A LOT, HAVING AN ARRAY IN THE THOUSANDS OF INDEX IS A GOOD
    // EXPERIMENT TO CONSIDER.

    int index, remacan[201] = {0}, yesNo[201 * 10] = {0};
    cout << "enter index: ";
    cin >> index;

    remacan[0] = 0;
    yesNo[remacan[0]] = 1;
    remacan[1] = 1;
    yesNo[remacan[1]] = 1;
    remacan[2] = 3;
    yesNo[remacan[2]] = 1;
    remacan[3] = 6;
    yesNo[remacan[3]] = 1;
    remacan[4] = 2;
    yesNo[remacan[4]] = 1;
    remacan[5] = 7;
    yesNo[remacan[5]] = 1;

    for (int i = 6; i < 201; i++) {
        int val1 = remacan[i - 1] - (i - 1) - 1;
        if ((val1 > 0) && (yesNo[val1] != 1)) {
            remacan[i] = val1;
            yesNo[val1] = 1;
        } else {
            remacan[i] = remacan[i - 1] + (i - 1) + 1;
        }
    }

    cout << "index : " << index << " has " << remacan[index] << endl;

    return 0;
}
