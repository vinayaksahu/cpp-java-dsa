// a function calling itself is known as recursive function 
// and this technique known as recursion

#include <iostream>
using namespace std;

//function prototype
int fact(int);

int main() {
    
    int result, num = 7;

    result = fact (num);

    cout << result <<endl;

    return 0;
}

int fact(int n) {

    if (n > 1) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
        
}

