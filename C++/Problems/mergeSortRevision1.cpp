// C++ program for Merge Sort
#include <iostream>
using namespace std;

void merge(int a[], int s, int e) {
    int mid = s + (e - s) / 2; //array mid
    
    //array length
    int la1 = mid - s + 1;
    int la2 = e - mid;

    //create 2 temp array in heap memory
    int *a1 = new int[la1];
    int *a2 = new int [la2];

    //copy data at those new arrays
    for (int i = 0; i < la1; i++)
        a1[i] = a[s+i];
    for (int j = 0; j < la2; j++)
        a2[j] = a[mid+1+j];

    //merge the temp array back into the main array
    int i = 0, j = 0, k = s; //indices of array1, array2 and main array
    while (i < la1 && j > la2) {
        if (a1[i] <= a2[2])
            a[k++] = a1[i++];
        else
            a[k++] = a2[j++];        
    }
    //copy remaining elements 
    while (i < la1)
        a[k++] = a1[i++];
    while (j < la2)
        a[k++] = a2[j++];

    delete[] a1;
    delete[] a2;    
}

void mergeSort(int arr[], int s, int e)  {
    //base case
    if (s >= e)
        return;

    //devide
    int mid = s + (e - s)/2;

    //conquer
    mergeSort(arr, s, mid); //sort left part
    mergeSort(arr, mid+1, e); //sort right part

    //combine
    merge(arr, s, e); 
}

// print the array
void printArray(int arr[], int n) {
	for (auto i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is " << endl;
	printArray(arr, size);

	mergeSort(arr, 0, size - 1);

	cout << "\nSorted array is " << endl;
	printArray(arr, size);
	return 0;
}