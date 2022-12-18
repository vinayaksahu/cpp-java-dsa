#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int ar[], int n) {

    for (int i = 0; i < n-1; i++) {
        int mi = i;
        for (int j = i+1; j < n; j++) {
            if (ar[j] < ar[mi]) {
                mi = j;
            }
        }
        //swap
        if (mi != i)
            swap(ar[i], ar[mi]);
    }
    

}

void insertionSort(int ar[], int n) {
    int i, j, key;
    for (i = 0; i < n; i++) {
        key = ar[i];
        for (j = i-1; j >=0 ; j--) {
            if (ar[j] > key)
                ar[j+1] = ar[j];
            else
                break;
        }
        ar[j+1] = key;
    }
    

}

void bubbleSort(int ar[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (ar[j] > ar[j+1]) {
                swap(ar[j], ar[j+1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void print(int ar[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    } cout << endl;
    
}

int main() {
    
    int arrS[] = {7, 9, 8, 3, 1, 2, 0, 5, 4, 6};
    int sizeS = sizeof(arrS) / sizeof(arrS[0]);
    selectionSort(arrS, sizeS);
    print(arrS, sizeS);

    int arrI[] = {7, 9, 8, 5, 4, 6};
    int sizeI = sizeof(arrI) / sizeof(arrI[0]);
    insertionSort(arrI, sizeI);
    print(arrI, sizeI);

    int arrB[] = {2, 1, 3, 5, 4, 6};
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);
    bubbleSort(arrB, sizeB); 
    print(arrB, sizeB);

    return 0;
}
