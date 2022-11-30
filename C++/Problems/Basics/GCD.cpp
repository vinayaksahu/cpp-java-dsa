#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int n1 = 8, n2 = 12, max, GCD;

    max = (n1 > n2) ? n1 : n2;

    for (int i = 1; i <= max; ++i){
        if(n1 % i == 0 && n2 % i == 0){
            GCD = i;
        }
    }
    cout << GCD;

    return 0;
}
