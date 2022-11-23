#include<iostream>
using namespace std;

int main(void)
{
    
    int n;
    cin >> n;
    char ch = 'A';
    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch <<"  ";
            ch = ch + 1;
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
        //ch = ch + 1;
    }

    return 0;
}


// 3
// A  B  C  
// D  E  F  
// G  H  I   