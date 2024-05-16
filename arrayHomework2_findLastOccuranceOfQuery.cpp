#include <iostream>

using namespace std;

int main() {
    // get an array of input and output the index of last occurance of query in the array
    // N = 5
    // arr[i] = 1 1 5 1 7

    // Q = 2
    // queries = 1 -> 3
    //         = 10 -> -1

    // constraints:
    // 0 <= arr[i] <= 500
    // N <= 200;

    int N, arr[500] = {0}, val, Q, query;

    cout << "enter N: ";
    cin >> N;

    // get the value, in arr[val] put indexCount, where indexCount is used to find the lastIndex
    // of a particular number. if input is 1 1 5 2 3 1 2, for "1" indexCount is 5 which is stored in arr[val]
    // which is arr[1] = 5 ..... likewise we have arr[0] = 0, arr[1] = 5, arr[2] = 6, arr[3] = 4, arr[4] = 0,
    // .... arr[500] = 0.
    for (int i = 0, indexCount = 0; i < N; i++, indexCount++) {
        cout << "enter value to put in arr: ";
        cin >> val;

        arr[val] = indexCount;
    }

    cout << "enter number of queries: ";
    cin >> Q;

    // get number of queries, for each query, go to arr[query] and print it for the last occurence index.
    // if arr[query] = 0, print -1 as the value is not found.
    for (int i = 0; i < Q; i++) {
        cout << "enter the query: ";
        cin >> query;

        if (arr[query] != 0) {
            cout << "the last occurence of " << query << " is " << arr[query] << endl;
        }
        else {
            cout << "-1 query not found in the array" << endl;
        }
    }

    return 0;
}
