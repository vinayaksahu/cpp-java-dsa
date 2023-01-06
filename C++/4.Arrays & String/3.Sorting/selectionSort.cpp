#include <iostream>
using namespace std;

void swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort (int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        //Find minimum element
        int min = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        //swap
        swap (&a[min], &a[i]);
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

    cout <<"Selection Sort: "<<endl;
    selectionSort (arr, size);
    printArray(arr, size);

    return 0;
}
