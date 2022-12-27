#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int sf, ef, w, c;
    cin >> sf >> ef >> w;
    
  /*  for (int i = sf; i <= ef; i += w) {
        c = (sf - 32) * 5/9;
        cout << sf << "\t" << c << endl;
        sf += w;
    }*/
    
    while (sf <= ef) {
        c = (sf - 32) * 5/9;
        cout << sf << "\t" << c << endl;
        sf += w;
    }
   
    return 0;
}