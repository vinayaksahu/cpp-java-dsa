#include <iostream>
using namespace std;

bool checkPalidrome(string &str, int s, int e) {

    //base case
    if (s > e)
        return true;

    if (str[s] != str[e])
        return false;
    else {
        //Recursive call
        return checkPalidrome(str, s+1, e-1);
    }
}

int main() {

    string str = "aaaabbbaaaa";

    int n = str.length()-1;

    bool isPalidrome = checkPalidrome(str, 0, n);

    if(isPalidrome)
        cout << "Palidrome";
    else
        cout << "Not palidrome";

    return 0;

}