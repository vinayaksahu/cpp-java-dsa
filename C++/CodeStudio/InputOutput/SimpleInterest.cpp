#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    float principal;
    float rate ;
    int time;
    cin>>principal >> rate >> time ;
    int interest=principal*rate*time/100;
    cout<<interest;

    return 0;
}