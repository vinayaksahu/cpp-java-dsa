#include <iostream>

using namespace std;

const int N = 10;  // size of the array

// Function to perform right rotation on the array
void rotateRight(int a[], int n)
{
    int temp = a[n - 1];  // store the last element in a temporary variable

    // shift all the elements one position to the right
    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];

    // insert the element stored in the temporary variable at the beginning of the array
    a[0] = temp;
}

int main()
{
    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // perform right rotation on the array
    rotateRight(a, N);

    // print the rotated array
    for (int i = 0; i < N; i++)
        cout << a[i] << " ";

    return 0;
}