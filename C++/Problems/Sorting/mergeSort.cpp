// C++ program for Merge Sort
#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int  e)
{
	int arr1Len = mid - s + 1; //array 1 (left) array length
	int arr2Len = e - mid; //array 2 (right) array length

	// Create temp arrays
	int *arr1 = new int[arr1Len];
	int	*arr2 = new int[arr2Len];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (int i = 0; i < arr1Len; i++)
		arr1[i] = arr[s + i];
	for (int j = 0; j < arr2Len; j++)
		arr2[j] = arr[mid + 1 + j];

	// Merge the temp arrays back into main array[left..right]
	int i = 0; // Initial index of first sub-array
	int j = 0; // Initial index of second sub-array
	int k = s; // Initial index of merged array
	while (i < arr1Len && j < arr2Len) {
		if (arr1[i] <= arr2[j]) {
			arr[k] = arr1[i];
			i++;
		}
		else {
			arr[k] = arr2[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of left[], if there are any
	while (i < arr1Len) {
		arr[k] = arr1[i];
		i++;
		k++;
	}
	// Copy the remaining elements of right[], if there are any
	while (j < arr2Len) {
		arr[k] = arr2[j];
		j++;
		k++;
	}
	delete[] arr1;
	delete[] arr2;
}

void mergeSort(int arr[], int s, int e)
{   //base case
	if (s >= e)
		return; //Returns recursively

	int mid = s + (e - s) / 2;
	mergeSort(arr, s, mid);  //RC. - sort left part
	mergeSort(arr, mid + 1, e); //RC. - sort right part
	merge(arr, s, mid, e); //merge 
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