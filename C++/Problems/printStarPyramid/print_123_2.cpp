#include<iostream>
using namespace std;

int main(void)
{
    
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 <<"  ";
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }

    return 0;
}

// 3
// 3  2  1  
// 3  2  1  
// 3  2  1 