#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    
    for (int i = 0; i < n-1; i++) {
        
        //minimum of the next array from i+1
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }

        //swap the found element with the 1st element
        swap(arr[minIdx], arr[i]);         
    }    
}

void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
    
}

int main(){
    
    int arr[] = {7, 8, 2, 9, 3, 0, 1, 4, 2, 6, 7, 1};

    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printArray(arr, size);

    return 0;
}
