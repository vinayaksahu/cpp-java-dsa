#include<iostream>
using namespace std;

int main() {

    int a, b;
    char op;

    //cout<<"Enter a: ";
    cin>>a>>op>>b;

    //cin>>op;

    //cout<<"Enter b: ";
    //cin>>b;

    switch (op)
    {
    case '+':
        cout <<"a"<<op<<"b = "<<(a + b)<<endl;
        break;

    case '-':
        cout <<"a"<<op<<"b = "<<(a - b)<<endl;
        break;

    case '*':
        cout <<"a"<<op<<"b = "<<(a * b)<<endl;
        break;

    case '/':
        cout <<"a"<<op<<"b = "<<(a / b)<<endl;
        break;

    case '%':
        cout <<"a"<<op<<"b = "<<(a % b)<<endl;
        break;
    
    default:
        cout <<"Invalid Operation!";
        break;
    }


}