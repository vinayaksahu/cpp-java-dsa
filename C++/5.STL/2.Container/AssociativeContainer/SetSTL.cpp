#include<iostream>
#include<set>
using namespace std;

void printSet(set<int, greater<int> > s) {

    for (int i : s) {
        cout << i << " ";
    } cout << endl;
    
}

int main() {

    set<int, greater<int> > s;

    s.insert(2);
    s.insert(4);
    //s.erase(4);
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(8);
    s.insert(2);

// Print Set
    cout << "Print Set: ";
    printSet(s);

//Erase
    cout << "Erase: ";
    set<int, greater<int> >::iterator it = s.begin();
    it++;
    s.erase(it);
    printSet(s);

//Is -5 present (Count())
    s.count(-5) ? cout <<"Present"<<endl : cout <<"Not present"<<endl;

//Find 5
    set<int, greater<int> > :: iterator itr = s.find(5);
    for (auto i = itr; i != s.end(); i++) {
        cout <<"Find 5: "<<*i << " ";
    } cout << endl;
    


     
    return 0;
}
