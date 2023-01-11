#include <iostream>
using namespace std;

void swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort (int a[], int n) {

    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap (&a[j], &a[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
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

    cout <<"Bubble Sort: "<<endl;
    bubbleSort (arr, size);
    printArray(arr, size);

    return 0;
}
