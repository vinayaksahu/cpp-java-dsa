#include<iostream>
using namespace std;

int main() {
    
    int r = 5;
    int c = 5;

    for (int i = 0; i < r; i++){
        if (i == 0 || i == 4)
        {
            for (int j = 0; j < c; j++) {
            cout << "*";
        }
        }
        
        cout << "*";
        for (int j = 0; j < c-2; j++) {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}
