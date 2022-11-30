#include<iostream>
using namespace std;

int linearSearch (int arr[], int size, int key) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) 
            return i;
    }
    return -1;
    

}

int main() {
    
    int arr[50] = {2, 4, 7, 8, 10, 12, 16, 19, 26, 50, 11};

    int size =sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int index = linearSearch(arr, size, key);

    if (index == -1)
        cout <<"Key is not present";
    else
        cout <<"Key is present at index of " <<index;

    return 0;
}
