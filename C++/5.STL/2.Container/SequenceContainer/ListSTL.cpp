#include<iostream>
#include<list>
using namespace std;

void show(list<int> l){
    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++) {
        cout << *i <<" ";
    } cout << endl << endl;
}

int main() {
    
    list<int> l;

    l.push_back(15);
    l.push_front(10);
    l.push_back(20);
    l.push_front(30);
    l.push_back(5);
    l.push_front(1);
    l.push_back(50);
    l.push_front(0);


//Show the List
    cout <<"Show the list: " << endl;
    show(l);

//Delete front
    cout <<"Delete front: " << endl;
    l.pop_front();
    show(l);

//Delete back
    cout <<"Delete back: " << endl;
    l.pop_back();
    show(l);

//show 1st element
    cout <<"Show 1st element: "<< l.front() << endl;
    

//show last element
    cout <<"Show last element: "<< l.back() << endl;

//show 2nd element
    //cout <<"Show 2nd element: "<< l.at(1) << endl;

//is deque empty?
    cout << "\nis deque empty?: ";
    l.empty() ? cout << "empty" : cout << "Not empty";

//Delete 1st to 3rd element
    cout << "\nDelete 1st to 3rd element: ";
    l.erase(l.begin());
    cout << endl;
    show(l);



    return 0;
}
