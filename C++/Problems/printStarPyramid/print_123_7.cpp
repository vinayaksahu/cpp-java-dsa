#include<iostream>
using namespace std;

int main(void)
{
    
    int n = 5;

    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j <<"  ";

            j = j - 1;
        }
        cout <<endl;
        i = i + 1;
    }

    return 0;
}
