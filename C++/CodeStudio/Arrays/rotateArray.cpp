#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    
    int k;
    cin>>k;
    
    int temp[k];
    for(int i = 0; i<k; i++) temp[i] = a[i];
    for(int i = k; i<n; i++) a[i-k] = a[i];
    for(int i = 0; i<k; i++) a[n-k+i] = temp[i];
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}