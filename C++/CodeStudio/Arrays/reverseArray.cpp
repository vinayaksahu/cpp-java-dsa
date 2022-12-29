#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int s = 0, e = n-1; 
    while(s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;    
    }
}


int main() {
    //Write your code here
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    } cout << endl;
    
    // Reverse
    reverse(arr, n);
    
    for(int i = 0; i < n ; i++) {
        cout << arr[i] <<" ";
    }  
    
    return 0;
}