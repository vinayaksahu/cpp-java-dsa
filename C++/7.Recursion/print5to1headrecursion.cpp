#include <iostream>
using namespace std;

void print(int n) {

    //base case
    if (n == 0)
        return ;

    //print
    cout << n << endl;

    //tail recursion
    print (n - 1);
}

int main() {

    int n = 5;

    print (n);

    return 0;

}