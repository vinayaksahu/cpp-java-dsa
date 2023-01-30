#include <bits/stdc++.h>
using namespace std;

void permute (string &a, int l, int r) {
    //base case
    if(l == r)
        cout << a << endl;
    else
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);  //swaping to make 1st
            permute(a, l + 1, r); //recursion call to repeat 
            swap(a[l], a[i]); //backtrack swapping to find original string
        }
}

int main() {

    string str = "abc";

    int n = str.size();

    permute(str, 0, n-1);
    
    return 0;
}