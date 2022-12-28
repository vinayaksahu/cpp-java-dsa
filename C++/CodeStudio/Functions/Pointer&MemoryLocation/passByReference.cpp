#include<iostream>
using namespace std;

int main() {

    int a = 5;
    int b = a;
    int &c = a;
    a++;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}