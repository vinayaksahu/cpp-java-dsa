#include<iostream>
using namespace std;

int main() {

    // Display numbers from 1 to 5
    int i = 1;
    while (i <= 50)
    {
        cout << i<<" ";
        i++;
    }

    cout <<endl<<endl;;

    //Sum of Positive numbers only
    int sum = 0;
    int n = 10;
    int j = 0;
    while (j < n)
    {
        sum += j;
        j++;
    }
    cout<< sum<<endl;
    
    

    return 0;
}