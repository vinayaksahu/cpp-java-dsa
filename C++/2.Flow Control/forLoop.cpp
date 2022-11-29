#include <iostream>

using namespace std;

int main() {

    // Printing number 1 to 5
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

    // Display a text 5 times
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        cout << "Hello"<<endl;
    }

    int n = 10, sum = 0;
    // Find the sum of first n Natural Numbers
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    cout << sum<<endl;

    //Ranged Based Loop
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i : arr)
    {
        cout << i<<endl;  
    }
        


    return 0;
}