#include<iostream>
using namespace std;

// function prototype
int substract(int, int);

int main()
{
    int sub;
    /* function calling before declaration */
    sub = substract(100, 30);
    cout <<"100 - 30 = " << sub <<endl;
    return 0;
}

// function defination
int substract(int a, int b) {
    return (a - b);
}
