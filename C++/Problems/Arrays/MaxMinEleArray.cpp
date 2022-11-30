#include<iostream>
using namespace std;

int main() {
    
    /* Find the Min & Max element of the array*/

    int arr[50], i, n;

    cout <<"Enter the size of the array: ";
    cin >>n;
    cout <<"Enter the elements of the array."<<endl;
    //Loop for the array element
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the entered element
    cout <<"Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    
    //find max of the array
    for (i = 0; i < n; i++) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }      
    }
    cout <<"\nMax: "<<arr[0];

    //find min of the array
    for (i = 0; i < n; i++) {
        if (arr[0] > arr[i]) {
            arr[0] = arr[i];
        }           
    }
    cout <<"\nMin: "<<arr[0];
    
    return 0;
}
