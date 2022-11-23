#include<iostream>
using namespace std;

int main(void)
{
    
    int n = 5;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i + 1)
        {
            cout <<" ";

            space = space + 1;
        }

        int k = 1;
        while (k <= i)
        {
            cout << k;

            k = k + 1;
        }

        int j = i - 1;
        while (j >= 1)
        {
            cout << j;

            j = j - 1;
        }
        cout <<endl;
        i = i + 1;
    }

    return 0;
}
