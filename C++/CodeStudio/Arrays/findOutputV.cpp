#include <iostream>
using namespace std;

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int p = (a + 1)[5];
    cout << p;
    return 0;

}