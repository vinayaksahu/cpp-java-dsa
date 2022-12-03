#include<iostream>
using namespace std;

int main() {
    
    int n = -5, fact = 1;

    //cin >> n;

    if (n < 0) {

        cout << "A -ve number does not have factorial." << endl;
    }
    else {

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        cout << "Factorial: " << fact << endl;
    }

    
    

    return 0;
}
