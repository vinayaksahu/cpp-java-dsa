#include<iostream>
using namespace std;

int main(void) {

        int n = 3454, rev, rem;
        rev = 0;

        while (n != 0) {
            rem = n % 10; //last digit
            rev = rev * 10 + rem;
            n /= 10; //remove last digit
        }
        cout << rev;

}