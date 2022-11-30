#include<iostream>
using namespace std;

void printNum(int num1, double num2) {

    cout << num1 <<endl;    //7
    cout << num2 <<endl;    //555.54
}

int main()
{   
    int n1 = 7;
    double n2 = 555.540;
    
    /* 
        Calling a function
        n value is passed to the function as argument
     */

    printNum(n1, n2);

    
    return 0;
}
