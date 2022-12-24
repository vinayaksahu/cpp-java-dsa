#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a[5] = {1, 2, 3, 4 ,5};
    int n = 5;
    //cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;
    
    
    //print array
    for (int i = n-1; i!=-1; i--) {
        cout << a[i] << " ";
    }
      
    return 0;
}
