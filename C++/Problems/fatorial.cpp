#include<iostream>
using namespace std;
    
int main() {
        
        int num, fact = 1;

        cin >> num;

        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout <<fact;

}
