#include <iostream>
#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int S, int E) {
    for (int i = S; i <= E; i++) {
        if (i == 0 || i == 1)
            continue;
        
        int flag = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
}

int main() {
    int S = 10, E = 20;

    totalPrime(S, E);
    return 0;
}