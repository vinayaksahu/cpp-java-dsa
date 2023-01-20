#include <iostream>
using namespace std;

void print (int *arr, int s, int e) {

    for (int i = s; i < e; i++) {
        cout << arr[i] << " ";
    } cout <<endl;
    
}

bool binarySearch(int arr[], int s, int e, int key) {

    print (arr, s, e);

    //base case - not found
    if (s > e)
        return false;

    //base case - found
    int mid = (s + e) / 2;
    if (arr[mid] == key)
        return true;
    
    //Recursion call
    if (arr[mid] < key) {
        return binarySearch(arr, mid+1, e, key);
    } else {
        return binarySearch(arr, s, mid-1, key);
    }

}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 21, 22, 55, 88, 99};

    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0;

    int end = size-1;

    int key = 5;

    bool ans = binarySearch(arr, start, end, key);

    if (ans)
        cout << "Present" << endl;
    else
        cout << "Not present" << endl;

    return 0;

}