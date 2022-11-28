#include<iostream>
using namespace std;

int main(void)
{

    int n;
    cin >> n;

    int i = 2;
    while (i <= n/2) //The loop terminates at i == n/2 because we cannot find any factor for n beyond the number n/2. So, any iteration beyond n/2 is redundant.
    {
        if (n % i == 0)
        {
            cout << "Not Prime" <<endl;
        }
        
        i = i + 1;
    }

    cout << "Prime" <<endl;
    

    return 0;
}
