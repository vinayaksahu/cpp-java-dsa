// C++ program for Merge Sort
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    
    int pivot = arr[s]; //let pivot starting index

    //count all element < pivot
    int cnt = 0; 
    for (int i = s+1; i <= e; i++) {
        if(arr[i] <= pivot)
            cnt++;
    }

    //place pivot at right place
    int pI = s + cnt;
    swap(arr[pI], arr[s]);
    
    //left and right wala part sambhal lete hain
    int i = s, j = e;
    while (i < pI && j > pI) {
        while (arr[i] <= pivot)
            {i++;}
        while (arr[j] > pivot)
           { j--;}
        if(i < pI && j > pI)
            swap(arr[i++], arr[j--]);
    }
    return pI;
}

void quickSort(int arr[], int s, int e)
{   //base case
	if (s >= e)
		return; //Returns recursively

	int p = partition(arr, s, e);
	quickSort(arr, s, p-1);  //RC. - sort left part
	quickSort(arr, p+1, e); //RC. - sort right part

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

	quickSort(arr, 0, size - 1);

	cout << "\nSorted array is " << endl;
	printArray(arr, size);
	return 0;
}