#include<iostream>
using namespace std;

int main(void)
{
    int a, b;

    cout <<"Enter 2 numbers: "<<endl;
    cin >> a;
    cin >> b;

    if (a > b){
        cout <<"a is greater than b.\n";
    }
    else {
        if (a < b) {
        cout <<"a is less than b.\n";
        }
        else{
        cout <<"a and b are equal.\n";
        }
    }

    return 0;
}
