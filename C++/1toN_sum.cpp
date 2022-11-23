#include <iostream>
using namespace std;

int main(void)
{
    int n=5;
    //cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {

        sum = sum + i;

        i = i + 1;
    }
    
    cout << sum <<endl;

    return 0;
}