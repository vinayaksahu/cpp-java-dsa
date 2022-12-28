#include <iostream>
using namespace std;

int main() {
    int a[] = {5,1,15,20,25};

    int i, j, k;

    i = ++a[1]; //++1=2 -> k = a[i++]; -> 3
    j = a[1]++; //2++=2
    k = a[i++]; //a[2++]=15

    cout << i <<" "<< j <<" "<< k;
    return 0;
}