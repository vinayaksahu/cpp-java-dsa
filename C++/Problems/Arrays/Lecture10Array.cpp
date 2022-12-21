#include<iostream>
using namespace std;

void reverseArray (int ar[], int n) {

    int start = 0;
    int end = n-1;

    while (start <= end) {
        swap (ar[start], ar[end]);
        start ++;
        end --;
    }
    

}

void printArray (int ar[], int n) {

    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    } cout << endl;
}

int main() {
    
    int arr[] = {7, 4, 8, 5, 6, 3, 2, 1, 9};

    int size = sizeof(arr) / sizeof(arr[0]);;

    reverseArray (arr, size);
    printArray (arr, size);

    return 0;
}
