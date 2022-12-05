#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n) {

    int i, j;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }   
    }
}

int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    
}

int main() {
    
    int arr[] = {4, 8 ,2, 1, 0, 6, 9, 7, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout <<"Sorted array: ";

    printArray(arr, n);

    return 0;
}