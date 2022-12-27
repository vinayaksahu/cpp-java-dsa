#include <bits/stdc++.h> 
#include <iostream>
#include <cmath>
using namespace std;

#define HRA 0.2
#define DA 0.5
#define PF 0.11

int main() {
    //Write your code here
    unsigned int basic, allow, ans;
    char grade;
    float hra , da , pf , totalSalary;
    
    cin >> basic;
    cin >> grade;
    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else 
        allow = 1300;
    
    hra = basic * HRA;
    da = basic * DA;
    pf = basic * PF;
    totalSalary = basic + hra + da + allow - pf;
    ans = round(totalSalary);
    
    cout << ans;
    
    return 0;
}