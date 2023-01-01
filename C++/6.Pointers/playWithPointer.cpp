#include <iostream>
using namespace std;

int main() {
    int a = 5;

    /* int *ptr;

    ptr = &a; */
    // or we can write like this
    int *ptr = &a;
    
    cout << ptr << endl;

    cout << *ptr << endl;

    return 0;
}
