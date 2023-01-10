#include <iostream>
using namespace std;

//swap function
void swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//Reverse array
void ReverseArray (int a[], int n) {
    for (int i = 0; i < n/2; i++) {
        swap (&a[i], &a[n-i-1]);
    }
}

//print sorted array element
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;    
}

int main() {
    
    int arr[] = {5, 4, 2, 6, 3, 9, 7};

    int size = sizeof(arr) / sizeof (arr[0]);

    cout <<"Reverse Array: "<<endl;
    ReverseArray (arr, size);
    printArray(arr, size);

    return 0;
}
