#include <iostream>
using namespace std;

void print(int n) {

    //base case
    if (n == 0)
        return ;
    
    //head recursion
    print (n - 1);

    //print
    cout << n << endl;
}

int main() {

    int n = 5;

    print (n);

    return 0;

}