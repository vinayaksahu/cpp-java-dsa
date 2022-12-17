#include<iostream>
#include<stack>
#include<string>
using namespace std;

void show(stack<string> s) {

    while (!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    } cout << endl;
    
}

int main() {
    
    stack<string> s;

    s.push("A");
    s.push("B");
    s.push("C");
    s.push("D");
    s.pop();
    s.push("E");
    s.push("F");

//show the stack
    show(s);
    cout << "Fir se Print karo" <<endl;
    show(s);

    return 0;
}
