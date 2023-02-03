#include <iostream>
using namespace std;

int main()
{
    int n = 5, flag = 0;
    //cin >> n;

    for (int i = 2; i < n; i++) //  1, 2, 3, 4, 5 -> divide by 2, 3, 4
    {
        if (n % i == 0) // if dividing by 2, 3, 4 ans is 0
        {
            cout << "Not prime";    // then it is not prime
            flag = 1; // return flag 1 as a not prime
            break;  // break the loop
        }
    }
       
    if (flag == 0)  // if flag remains 0
    {
        cout << "Prime";    //it is prime
    }

    return 0;
}