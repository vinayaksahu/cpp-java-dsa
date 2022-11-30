#include<iostream>
using namespace std;

void reverse (int a[], int n) {

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        swap (a[start], a[end]);
        start++;
        end--;
    }
    
}

void printArray (int a[], int size) {

    //values of reverse() will return to this function
    //print the final array here

    for (int i = 0; i < size; i++) {
        cout << a[i] <<" ";
    }

}

int main() {
    
    int arr[50], i, n;

    //take input from user
    cout <<"Input array element: "<<endl;
    cin >>n;
    for (i = 0; i < n; i++)    {
        cin >> arr[i];
    }

    //print the entered element
    cout <<"Array: ";
    for (i = 0; i < n; i++) {
        cout <<arr[i] <<" ";
    }

    cout <<endl<<endl;

    reverse (arr, n);

    printArray (arr, n);
    
    return 0;
}
