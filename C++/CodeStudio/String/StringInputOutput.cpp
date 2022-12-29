#include <iostream>
using namespace std;

int main() {
    char str1[50];
    cin >> str1;
    cout << str1 <<endl<<endl;

    char str2[50];
    cin.get(str2, 50);
    cout << str2<<endl<<endl;
    
    string s1;
    cin >>s1;
    cout << s1<<endl<<endl;
    
    string s2;
    getline(cin, s2);
    cout << s2<<endl<<endl;
    

    return 0;
}