#include<iostream>
using namespace std;

int main()
{
    
    int arr[5];

    //take input of the array element using for loop

    cout << "Take input of array element:" <<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    //print the array elements inputs from the user
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
    
    

    return 0;
}
