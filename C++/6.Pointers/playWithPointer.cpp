#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // int *ptr; cin >> ptr;    // bad practice

    /* int *ptr = 0; 

    ptr = &a; */
    // or we can write like this
    int *ptr = &a;
    
    cout <<"Address of a: "<< ptr << endl;
    cout <<"Value of a: "<< *ptr << endl;
    cout <<"------------------"<< endl;

    int *p = 0;
    cout <<"Address of p: "<< p << endl;
    cout <<"Value of *ptr: "<< *p << endl;

    return 0;
}
