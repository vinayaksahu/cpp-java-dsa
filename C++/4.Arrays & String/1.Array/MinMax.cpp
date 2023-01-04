#include <iostream>
using namespace std;

void min (int a[], int n) {
    for (int i = 0; i < n; i++)
        if (a[0] > a[i])
            a[0] = a[i];
    cout << "Min: " << a[0] << endl;
}

void max (int a[], int n) {
    for (int i = 0; i < n; i++)
        if (a[0] < a[i])
            a[0] = a[i];
    cout << "Max: " << a[0] << endl;
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;    
}

int main() {
    
    int arr[] = {1, 5, 4, 6, 3, 9, 7, 2};

    int size = sizeof(arr) / sizeof (arr[0]);

    cout <<"Minimum element from the given array: "<<endl;
    printArray(arr, size);
    min (arr, size);
    max (arr, size);

    return 0;
}
