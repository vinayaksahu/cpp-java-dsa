#include<iostream>    
using namespace std;  

int main() {   

    int factorial(int);  
      
    int fact, value = 0;  

    fact = factorial(value);   

    cout<<"Factorial of a number is: "<<fact<<endl;    

    return 0;    
}    
    
int factorial(int n) 
{

    int fact = 1;

    if (n < 0)    
        return -1; /*Wrong value*/      
    if (n == 0)    
        return 1;  /*Terminating condition*/    
    else {    
        //return n * factorial (n - 1);        

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;     
    }    
}  