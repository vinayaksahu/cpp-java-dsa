#include <bits/stdc++.h> 
int fibonacciNumber(int n){
    // Write your code here.
    int fibo [100]={0};
    if (n<=1) {
        return n;
    }    
    else {
        fibo[n]=fibonacciNumber(n-1)+fibonacciNumber(n-2);
        return fibo[n];    
    }
}