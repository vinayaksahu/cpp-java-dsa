#include<iostream>
#include<math.h>
using namespace std;

int main() {


        int arr[6] = {4, 6, 1 ,-5, 4, 5};

        // Loop to store largest number to arr[0]
        for(int i = 0; i < 6; ++i) {

            // Change < to > if you want to find the smallest element
            if(arr[0] < arr[i])
            arr[0] = arr[i];
        }

        cout <<"Maximum element = " <<arr[0]<<endl;

                // Loop to store largest number to arr[0]
        for(int i = 0; i < 6; ++i) {

            // Change < to > if you want to find the smallest element
            if(arr[0] > arr[i])
            arr[0] = arr[i];
        }

        cout <<"Minimum element = " <<arr[0]<<endl;

    return 0;

}