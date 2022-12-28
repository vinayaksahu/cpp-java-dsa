#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
unsigned int countBits (int n) {
    
    unsigned int count = 0;
    while (n) {             // n = 0001
        count += n & 1;     // count = 0011 + 0010 & 1 = 0011
        n >>= 1;            // 0010 >> 1 = 0001
    }
    return count;
    
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}