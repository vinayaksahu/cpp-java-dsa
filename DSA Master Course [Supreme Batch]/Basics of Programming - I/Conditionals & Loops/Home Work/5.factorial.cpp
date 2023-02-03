#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fact = 1; // let factorial of given number is n.

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    //print fact
    cout << "factorial of given number is : " << fact;    

    return 0;
}