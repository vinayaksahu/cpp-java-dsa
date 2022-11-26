#include<iostream>
using namespace std;

int main()
{
    int n1, n2, temp;

    cout <<"Enter 2 numbers:";
    cin >>n1 >>n2;


    //swap numbers using temp
  /*  temp = n1;
    n1 = n2;
    n2 = temp;*/

    //swap without using temp
    n2 = n1 + n2;   //total = n1 + n2
    n1 = n2 - n1;   //n1(n2 value) = total - n1
    n2 = n2 - n1;   //n2 (n1 value)= total - n1

    
    cout <<"n1: "<<n1 <<endl<<"n2: "<<n2<<endl;
    
    return 0;
}

