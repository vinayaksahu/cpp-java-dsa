#include<iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout <<"Size of array: "<< n <<endl;

    int i, sum = 0;
    int avg;

    for (i = 0; i < n; i++) {
        sum += arr[i];
    } 

    cout <<"Sum: "<< sum <<endl;

    avg = sum / i;

    cout <<"Average: "<<avg;

    return 0;
}
