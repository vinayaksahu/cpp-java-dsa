#include<iostream>
using namespace std;
int main() {

    int a = 4;
    int b = 6;

    cout<<" a&b :" << (a&b) << endl;
    cout<<" a|b :" << (a|b) << endl;
    cout<<" ~a :" << ~a << endl;
    cout<<" a%b :" << (a%b) << endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<(a>>1) <<endl;
    cout<<(b>>2) <<endl;
    cout<<(a<<1) <<endl;
    cout<<(a<<2) <<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;

    int i = 7;

    cout<< (++i) <<endl;
    //8
    cout<< (i++) <<endl;

    //8, i=9
    cout<< (i--) <<endl;
    //9, i=8

    cout<< (--i) <<endl;
    //7, i=7

    cout<<endl;
    cout<<endl;
    cout<<endl;

    int aa, bb = 1;
    aa = 10;
    if (++aa)
        cout << bb;
    else
        cout << ++bb;

    
}