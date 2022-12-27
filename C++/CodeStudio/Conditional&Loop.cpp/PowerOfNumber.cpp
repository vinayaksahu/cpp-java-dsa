#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int ans = 1, x, n;
    x = 3;
    n = 4;

    //cin >> x >> n;
    
    for (int i = 1; i <= n; i++) {
        ans = ans*x;
    }

    cout << ans;
    
    

    return 0;
}