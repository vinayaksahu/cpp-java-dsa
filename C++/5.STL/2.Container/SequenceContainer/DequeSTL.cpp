#include<iostream>
#include<deque>
using namespace std;

void show(deque<int> d){
    //deque<int>::iterator i;
    for (auto i = d.begin(); i != d.end(); i++) {
        cout << *i <<" ";
    } cout << endl << endl;
}

int main() {

    deque<int> d;

    d.push_back(15);
    d.push_front(10);
    d.push_back(20);
    d.push_front(30);
    d.push_back(5);
    d.push_front(1);
    d.push_back(50);
    d.push_front(0);

//Show the Deque
    cout <<"Show the deque: " << endl;
    show(d);    

//Delete front
    cout <<"Delete front: " << endl;
    d.pop_front();
    show(d);

//Delete back
    cout <<"Delete back: " << endl;
    d.pop_back();
    show(d);

//show 1st element
    cout <<"Show 1st element: "<< d.front() << endl;
    

//show last element
    cout <<"Show last element: "<< d.back() << endl;

//show 2nd element
    cout <<"Show 2nd element: "<< d.at(1) << endl;

//is deque empty?
    cout << "\nis deque empty?: ";
    d.empty() ? cout << "empty" : cout << "Not empty";

//Delete 1st to 3rd element
    cout << "\nDelete 1st to 3rd element: ";
    d.erase(d.begin(), d.begin()+3);
    cout << endl;
    show(d);



    return 0;
}
