#include <iostream>
using namespace std;

int main() {
    //Write your code here

    int n = -5, fact = 1;
    
    if (n < 0)
        cout << "Error";

    else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i; 
        } cout << fact;
    }
    
    return 0;
}