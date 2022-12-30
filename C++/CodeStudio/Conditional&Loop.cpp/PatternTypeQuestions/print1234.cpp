#include <iostream>
using namespace std;

int main() {
    
    int n = 2;
    int i, j, toPrint = 1;
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << toPrint <<" ";
            toPrint++;
        }   cout << endl;        
    }

    return 0;
}