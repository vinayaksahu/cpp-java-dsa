#include<iostream>
using namespace std;

int main() {
    
    int a = 65;
    char *ch = (char*) &a;

    cout << *ch;

    return 0;
}
