#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int ** arr = new int * [n];

    for (int i = 0; i< n; i++) {
        arr[i] = new int[m];
        cout << arr[i] <<" ";
    }

    return 0;

}