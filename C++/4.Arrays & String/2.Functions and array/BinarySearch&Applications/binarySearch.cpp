#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while (s <= e) {
        if (key ==  a[mid]) {
            return mid;
        }
        if (key <  a[mid]) {
            e = mid - 1;
        }
        if (key >  a[mid]) {
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return -1;    
}

int main() {
    
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 7, index;

    index = binarySearch(arr, size, key);

    cout << index;

    return 0;
}
