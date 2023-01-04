#include <iostream>
using namespace std;

void selectionSort (int a[], int n) {

    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++)
            if (a[min] > a[j])
                min = j;
        swap(a[min], a[i]);
    }
    
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;
    
}

int main() {
    
    int arr[] = {1, 5, 4, 2, 6, 3, 9, 7, 4, 5, 2};

    int size = sizeof(arr) / sizeof (arr[0]);

    cout <<"Selection Sort: "<<endl;
    selectionSort (arr, size);
    printArray(arr, size);

    return 0;
}
