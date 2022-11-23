#include<iostream>
using namespace std;

int main(void)
{
    
    int n;
    cin >> n;
    int toPrint = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n * n - toPrint +1 <<"  ";
            toPrint = toPrint + 1;
            j = j + 1;
        }
        cout <<endl;
        i = i + 1;
    }

    return 0;
}
