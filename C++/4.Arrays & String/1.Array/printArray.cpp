#include<iostream>
using namespace std;

int main()
{
    //initializing the array
    int arr[6] = {1, 5, -5, 8, 6, 2};

    //print the array using traditional for loop
    for (int i = 0; i < 6; i++) {
        cout << arr[i] <<" ";
    }

    cout << endl << endl;

    //print the array using ranged based array
    for (const int &n : arr) {
        cout << n <<" ";
    }

    


    


    return 0;
}
