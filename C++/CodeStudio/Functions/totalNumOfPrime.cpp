#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
bool isPrime(int num) {
    if(num < 2)
        return false;
    for (int i = 2; i <= num; i++) {
        if(num % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int totalPrime(int S, int E) {
    int count = 0;
    for (int i = S; i <= E; i++) {
        if (isPrime (i))
            count++;
    }
    return count;
}

int main() {
    int S = 2, E = 20;
    //cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}