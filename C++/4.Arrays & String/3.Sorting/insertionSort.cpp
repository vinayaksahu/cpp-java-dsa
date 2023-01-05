#include <iostream>
using namespace std;

void insertionSort (int arr[], int n) {
  for (int i = 1; i < n; ++i) {
    int temp = arr[i];
    int j;

    // Shift all elements that are greater than the key to the right by one position
    for (j = i-1; j >= 0; j--) {
        if (arr[j] > temp)
            arr[j+1] = arr[j];
    }

    // Insert the key in its correct position
    arr[j+1] = temp;
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
