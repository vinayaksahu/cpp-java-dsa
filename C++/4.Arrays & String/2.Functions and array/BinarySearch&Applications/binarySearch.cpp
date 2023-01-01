#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {

    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;     /*(s - e) / 2;*/
    
    while (s <= e) {
        
        if (key == a[mid]) {
            return mid;
        }
        if (key > a[mid]) {
            s = mid + 1;
        }
        else /* if (key < a[mid]) */ {
            e = mid - 1;
        }

        mid = /* (s + e) / 2; */ s + (e - s) / 2;
    }

    return -1;
    
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = -8, index;

    index = binarySearch(arr, size, key);
    
    if (index == -1)
        cout << key <<" is not present in the array." << endl;
    else
        cout << key <<" present at index: " << index << endl;

    return 0;
}
