#include <iostream>
using namespace std;

void selectionSort (int a[], int n) {

    for (int i = 0; i < n-1; i++) {
        int mi = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[mi])
                mi = j;
        swap(a[mi], a[i]);        
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
}

int main() {
    
    int arr[] = {1, 5, 4, 2, 6, 3, 9, 7, 4, 5, 2};

    int size = sizeof(arr) / sizeof (arr[0]);

    selectionSort (arr, size);

    printArray(arr, size);

    return 0;
}
