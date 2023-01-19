#include <iostream>
using namespace std;

int factorial(int n) {

    //base case
    if (n == 0)
        return 1;
    
    //recursive relation
    int ans = n * factorial(n-1);

    //return
    return ans;

}

int main() {

    int n = 5;

    int ans = factorial(n);

    cout << ans;

    return 0;

}