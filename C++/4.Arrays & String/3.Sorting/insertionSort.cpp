#include <iostream>
using namespace std;

void insertionSort (int a[], int n) {

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j;
        for (j = i-1; j >= 0 ; j--) {
            if (a[j] > key)
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = key;
    }
}

//print sorted array element
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;    
}

int main() {
    
    int arr[] = {5, 4, 2, 6, 3, 9, 7, 4, 5, 2};

    int size = sizeof(arr) / sizeof (arr[0]);

    cout <<"insertion Sort: "<<endl;
    insertionSort (arr, size);
    printArray(arr, size);

    return 0;
}
