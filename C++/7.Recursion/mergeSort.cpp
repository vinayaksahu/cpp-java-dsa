#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    //array mid
    int mid = s-(e+s)/2;

    //left and right array lenght
    int len1 = mid - s + 1; //left part array lenght
    int len2 = e - mid; //right part array lenght

    //create 2 new array in heap memory
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values at those arrays
    int k = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[k++];

    int k = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = arr[k++];

    //merge 2 sorted
    int index1 = 0;        
    int index2 = 0;

    k = s;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2])
            arr[k++] = first[index1++];
        else
            arr[k++] = second[index2++];
    }

    while(index1 < len1)
        arr[k++] = first[index1++];
    while(index2 < len2)
        arr[k++] = second[index2++];
    
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e)
        return;

    // array mid
    int mid = s-(e+s)/2;

    //RC - sort left side
    mergeSort(arr, s, mid-1);

    //RC - sort right side
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int power(int a, int b) {

    //base case
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    
    //Recursive call
    int ans = power(a, b/2);

    //processing
    if (b % 2 == 0) //if b is even
        return ans * ans;    
    else //if b is odd
        return a * ans * ans;
    
}

int main() {

    int arr[] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;

}