#include<iostream>
using namespace std;

int firstOcc (int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e-s)/2;        
    }
    return ans;
}

int lastOcc (int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e-s)/2;        
    }
    return ans;
}


int main() {

    int arr[] = {0, 0, 0, 1, 1, 1, 1, 1, 1};

    int n = 9;

    int key = 1;

    int firstIndex = firstOcc(arr, n, key);

    int lastIndex = lastOcc(arr, n, key);
    
    cout << "First Occ: "<< firstIndex<<endl;
    cout << "Lasr Occ: "<< lastIndex<<endl;
    
    return 0;
}
