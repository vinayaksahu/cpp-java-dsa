#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, a, sumE = 0, sumO = 0;
    cin >> n; 
    
    while (n > 0) {
        a = n % 10;
        if (a % 2 == 0)
            sumE += a;
        else
            sumO += a;
        n /= 10;
    } 

cout << sumE <<" "<< sumO << endl;
    
    return 0;
}