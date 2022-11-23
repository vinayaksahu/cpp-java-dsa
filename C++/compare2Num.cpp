#include<iostream>
using namespace std;

int main(void)
{
    int a,b;

    cout <<"Enter the numbers: \n";
    cin >> a;
    cin >> b;

    if (a > b)
    {
        cout << a <<" is greater than "<< b <<endl;
    }

    if (a < b)
    {
        cout << a <<" is less than "<< b <<endl;
    }

    else
        cout << a <<" and "<< b <<" are equal" <<endl;
    
    


    return 0;
}
