#include<iostream>
using namespace std;

//declaring a function
int add(int a, int b) {
    return (a + b);
}

int main()
{
    
    int a = 4, b = 3;

    /* Calling a funtion and storing value in sum */
    int sum = add(a, b);

    cout << sum;


    return 0;
}
