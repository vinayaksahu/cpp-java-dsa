#include <iostream>
using namespace std;

int main() {

    int a = 3;
    int b = 6;

    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans = ans * a;
    }

    cout << ans;

    return 0;

}