#include<iostream>
using namespace std;

int main()
{
    int n1, n2, temp;

    cout <<"Enter 2 numbers:";
    cin >>n1 >>n2;


    //swap numbers using temp
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout <<"n1: "<<n1 <<endl<<"n2: "<<n2<<endl;
    
    return 0;
}

