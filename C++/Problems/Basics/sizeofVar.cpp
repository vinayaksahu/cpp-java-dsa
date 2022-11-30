# include<iostream>
using namespace std;

int main () {

    int a = 1;
    float b = 1.1;
    double c = 1.12;
    char d = 'A';

    int sizeInt = sizeof(a), sizeFloat = sizeof(b), sizeDouble = sizeof(b), sizeChar = sizeof(b);

    cout <<sizeInt <<endl;
    cout <<sizeFloat <<endl;
    cout <<sizeDouble <<endl;
    cout <<sizeChar <<endl;

}