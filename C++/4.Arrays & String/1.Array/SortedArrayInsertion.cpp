#include <iostream>
using namespace std;

int intsertSorted(int arr[], int n, int key, int capacity) {

    if (n >= capacity)
        return n;
 
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
 
    arr[i + 1] = key;
 
    return (n + 1);
}

int main(){
    
    int arr[20] = {1, 2, 4, 5, 7};

    int capacity = sizeof (arr) / sizeof (arr[0]);

    int n = 5;

    int key = 6;

    // Before Insertion
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    intsertSorted(arr, n, key, capacity);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
