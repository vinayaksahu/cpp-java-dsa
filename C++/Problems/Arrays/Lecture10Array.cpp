#include<iostream>
using namespace std;

void reverseArray (int ar[], int n) {

    int start = 0;
    int end = n-1;

    while (start <= end) {
        swap (ar[start], ar[end]);
        start ++;
        end --;
    }
}

void swapAlternate (int ar[], int n) {

    for (int i = 0; i < n; i+=2) {
        if (i+1 < n)
        swap (ar[i], ar[i+1]);
    }
    
}

void printArray (int ar[], int n) {

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    } cout << endl;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(arr) / sizeof(arr[0]);;

    //reverseArray (arr, size);
    //printArray (arr, size);

    swapAlternate (arr, size);
    printArray (arr, size);

    return 0;
}
