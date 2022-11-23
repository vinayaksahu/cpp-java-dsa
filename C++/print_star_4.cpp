// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;

int main () {

    int count = 5;

    for (int i = 0; i < count; i++)
    {
        for (int j = count-i; j < count; j++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }
    
}