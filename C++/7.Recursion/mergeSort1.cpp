#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e) { 
    //array length 
    int arr1len = mid-s+1;
    int arr2len = e-mid; 

    //create 2 temp arrays
    int *arr1 = new int [arr1len];
    int *arr2 = new int [arr2len];

    //copy values to temp arrays
    for (int i = 0; i < arr1len; i++)
        arr1[i] = arr[s+i];

    for (int j = 0; j < arr1len; j++)
        arr1[j] = arr[mid+1+j];

    //merge the temp array back into main array
    int i = 0, j = 0, k = s; //index array1, array2 and merged array
    while (i < arr1len && j < arr2len) {
        if (arr1[i] <= arr2[j] )
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }

    //copy remaining array element
    while(i < arr1len)
        arr[k++] = arr1[i];
    while(j < arr2len)
        arr[k++] = arr2[j];
    
    delete[] arr1;
    delete[] arr2;


}

void mergeSort(int arr[], int s, int e) {
    //base case
    if(s >= e)
        return;

    //divide
    int mid = s + (e - s) / 2;

    //sort left part
    mergeSort(arr, s, mid);

    //sort right part
    mergeSort(arr, mid+1, e);

    //combine
    merge(arr, s, mid, e);

}

void print(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

int main() {
    
    int arr[] = {6, 5, 9, 8, 4, 3, 6, 5, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before merge sort: " <<endl;
    print(arr, n);

    //mergeSort(arr, 0, n-1);

    cout << "After merge sort: " <<endl;
    print(arr, n);

    return 0;
}
