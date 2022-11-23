#include <iostream>
using namespace std;

int main(void)
{
    int n=10;
    //cin >> n;

    // int i = 1;
    // while (i <= n/2)
    // {
    //     cout << 2*i <<" ";
    //     i = i + 1;
    // }

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i <<" ";
        }
        
        i = i + 1;
    }
    

    return 0;
}