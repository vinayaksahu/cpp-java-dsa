#include<iostream>
#include<queue>
#include<string>
//#include<vector>
using namespace std;

/*void print_queue(queue<string> q) {

    queue<string> temp = q;
    while (!q.empty()) {
        cout << q.front() <<" ";
        pq.pop();
    } cout << endl;
    
}*/

int main() {
    
    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");
    q.push("D");
    q.pop();
    q.push("E");
    q.push("F");

//show the queue
    cout <<"Print Queue: ";
    //print_queue(q);
    queue<string> temp = q;
    while (!temp.empty()) {
        cout << temp.front() <<" ";
        temp.pop();
    } cout << endl;

    cout <<"Print Queue again: ";
    //print_queue(q);
    queue<string> temp1 = q;
    while (!temp1.empty()) {
        cout << temp1.front() <<" ";
        temp1.pop();
    } cout << endl << endl;

    priority_queue<int> maxi;

    maxi.push(10);
    maxi.push(5);
    maxi.push(7);
    maxi.push(2);
    maxi.pop();
    maxi.push(55);
    maxi.push(9);

//show the queue
    cout <<"Print Priority_queue: ";
    //print_queue(q);
    priority_queue<int> tempPQ = maxi;
    while (!tempPQ.empty()) {
        cout << tempPQ.top() <<" ";
        tempPQ.pop();
    } cout << endl;

    cout <<"Print Priority_queue again: ";
    //print_queue(q);
    priority_queue<int> tempPQ1 = maxi;
    while (!tempPQ1.empty()) {
        cout << tempPQ1.top() <<" ";
        tempPQ1.pop();
    } cout << endl;



    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(10);
    mini.push(5);
    mini.push(7);
    mini.push(2);
    mini.pop();
    mini.push(55);
    mini.push(9);

//show the queue
    cout <<"Print Priority_queue asce: ";
    priority_queue<int, vector<int>, greater<int>> tempPQmini = mini;
    for (int i = 0; i < tempPQmini.size(); i++) {
        cout << tempPQmini.top() <<" ";
        tempPQmini.pop();
    } cout << endl;

    cout <<"Print Priority_queue again asce: ";
    priority_queue<int, vector<int>, greater<int>> tempPQmini1 = mini;
    for (int i = 0; i < tempPQmini1.size(); i++) {
        cout << tempPQmini1.top() <<" ";
        tempPQmini1.pop();
    } cout << endl;


    return 0;
}
