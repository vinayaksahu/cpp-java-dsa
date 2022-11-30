#include <iostream>
using namespace std;

int main() {
    
    int i, n, arr[50];
    float sum = 0.0, avg;
    cin >> n;
    //take input from user
    for (i = 0; i < n; i++) {
        cin >>arr[i];
        sum += arr[i];
    }

    avg = sum / i;

    cout <<avg <<endl;        

    return 0;
}
