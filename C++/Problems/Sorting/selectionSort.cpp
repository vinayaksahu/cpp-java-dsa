#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> v, int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
			if (v[j] < v[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element 
		if(min_idx != i)
			swap(v[min_idx], v[i]);
	}
}

//Function to print the data
void print(vector<int> v, int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << v[i] << " ";
	cout << endl;
}

// Main Function
int main()
{
	vector<int> v = {64, 25, 12, 22, 11};
	int n = v.size();
	selectionSort(v, n);
	cout << "Sorted array: " << endl;
	print(v, n);
	return 0;
}
 