#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, string> m) {

    for (auto i : m) {
        cout << i.first <<" => "<<i.second << endl;
    } cout << endl;
    
}

int main() {

    map<int, string> m;
    m[1] = "A";
    m[4] = "D";
    m[2] = "B";
    m.insert({3, "C"});
    
// Pirnt Map
    printMap(m);

    return 0;
}
