#include <iostream>
using namespace std;

int main(void)
{
    int n=20;
    //cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0) {

            sum = sum + i;
        }
        i = i + 1;
    }
    
    cout << sum <<endl;

    return 0;
}