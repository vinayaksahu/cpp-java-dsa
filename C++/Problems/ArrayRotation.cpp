#include <iostream>
using namespace std;

void rotate_by_one(int a[], int n) {
    int temp = a[n-1];
    int i;
    for (i = n-1; i > 0; i--) {
        a[i] = a[i-1];
    }
    a[i] = temp;
    
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    int n = 5;

    k %= n;

    //rotate k times
    for (int i = 0; i < k; i++) {
        rotate_by_one (arr, n);
    }

    //print final array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
