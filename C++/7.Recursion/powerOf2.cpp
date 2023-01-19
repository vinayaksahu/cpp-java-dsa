#include <iostream>
using namespace std;

int power(int n) {

    //base case
    if (n == 0)
        return 1;
    
    //recursive relation
    int ans = 2 * power(n-1);

    //return
    return ans;
}

int main() {

    int n = 5;

    int ans = power(n);

    cout << ans;

    return 0;

}