#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int t1 = 0, t2 = 1, nextTerm = 0, count = 10;
    cout <<nextTerm<<endl;
    while (nextTerm <= count)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        cout <<nextTerm<<endl;
    }
    
    

    return 0;
}
