#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {

    //base case
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;
    
    //Recursion call
    else {
        bool remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }

}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int size = 5;

    int key = 4;

    bool ans = linearSearch(arr, size, key);

    if (ans)
        cout << "Present" << endl;
    else
        cout << "Not present" << endl;

    return 0;

}