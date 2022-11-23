#include<iostream>
using namespace std;

int main(void)
{
    
    int n = 4;
    
    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= i)
        {
            cout << ch <<" ";
            j = j + 1;
            ch = ch + 1;
        }
        cout <<endl;
        i = i + 1;


    }

    return 0;
}