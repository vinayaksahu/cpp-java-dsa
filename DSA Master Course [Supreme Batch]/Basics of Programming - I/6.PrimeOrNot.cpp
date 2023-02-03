#include <iostream>
using namespace std;

int main()
{
    int n = 5, flag = 0;
    //cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            flag = 1;
            break;
        }
    }
       
    if (flag == 0)
    {
        cout << "Prime";
    }

    return 0;
}