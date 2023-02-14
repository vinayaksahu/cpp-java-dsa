#include<iostream>
using namespace std;

int main() {

    int row = 10;
    int col = 15;
    
    for (int i = 0; i < row; i+=1) {
        if (i == 0 || i == row-1) {
            for (int j = 0; j < col; j+=1) {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < col-2; j++) {
                cout << "  ";
            }
            
            cout << "* ";
        }
        
        
        cout << endl;
    }
    

    return 0;
}
