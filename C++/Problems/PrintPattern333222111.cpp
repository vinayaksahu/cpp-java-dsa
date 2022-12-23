#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
    printPat(3);
    cout<<endl;
}

void printPat(int n)
{

    for (int i = n; i > 0; --i) {
        for (int j = n; j > 0; --j) {
            for(int k = i; k > 0; --k) {
                cout << j;
            }
        }
        cout << endl;
    }
}