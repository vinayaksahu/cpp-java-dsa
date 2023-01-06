#include <iostream>
using namespace std;

void insertionSort (int a[], int n) {


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
