#include <iostream>
using namespace std;

int main() {
    
    int n = 2;
    int i, j;
    // for (i = 1; i <= n; i++) {
    //     for (j = n; j > 0; j--) {
    //         cout << i;
    //     }   cout << endl;        
    // }

    // for (i = n; i > 0; i--) {
    //     for (j = n; j > 0; j--) {
    //         cout << i;
    //     }   cout << endl;        
    // }
        
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cout << n-i+1;
        }   cout << endl;        
    }

    return 0;
}