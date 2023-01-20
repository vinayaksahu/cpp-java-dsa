#include <iostream>
using namespace std;

void reverse(string &str, int s, int e) {

    //base case
    if (s > e)
        return;

    //processing
    swap(str[s], str[e]);
    s++;
    e--;

    //Recursion call
    reverse(str, s, e);
    
}

int main() {

    string str = "abcde";

    int n = str.length()-1;

    reverse(str, 0, n);

    cout << str << endl;

    return 0;

}