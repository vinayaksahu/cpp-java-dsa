#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;

int main() {

/**********************************************/
/*Begin and End*/

    vector<int> v;
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
    } cout << endl;
    
    cout <<"output begin and end: "<<endl;
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i <<" ";
    } cout <<endl <<endl;

    cout <<"Reverse output begin and end: "<<endl;
    for (auto i = v.rbegin(); i != v.rend(); i++) {
        cout << *i <<" ";
    } cout <<endl <<endl;
    
    
    
// vector initialization using vector library
	vector<int> v1;
    //fetch data in vector
	for (int i = 1; i <= 5; i++)
	    v1.push_back(i * 3);
    
    //print data from vector
    cout << "Vector Data: "<< endl;
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] <<" ";
    cout << endl << endl;

    cout << "********#  Element access  #*********"<< endl<< endl;

/* Element access */
    // at()
    cout << "The vector elements using at(): "<< endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) << " ";
    } cout << endl << endl;

    // operator[]
    cout << "The vector elements using operator[]:"<<endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] <<" ";
    } cout << endl << endl;
    
    // front()
    cout << "Front element: "<< v1.front() << endl;
    
    // back()
    cout << "Back element: "<< v1.back() << endl << endl;

    // pointer to the first element
	int* pos = v1.data();

	cout << "The first element using pointer data " << *pos << endl << endl << endl;

/*************************************************************************************/

/*Modifiers: */
    cout << "********#  Modifiers  #*********"<< endl<< endl;

    //assign vector
    vector<int> v2;

    //fill the array with 5 three times
    cout <<"Fill the array with 5 three times: "<< endl;
    v2.assign(3,5);
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] <<" ";
    } cout << endl<< endl;
    

    //Size
    cout << "Size: "<< v1.size() << endl;
    cout << "Max size: "<< v1.max_size() << endl << endl;

    //Capacity
    cout << "Capacity: "<< v1.capacity() << endl;

    //Swap two same size vector
    cout <<"Vector before swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) <<" ";
    } cout << endl;
    
    cout <<"Vector before swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] <<" ";
    } cout << endl;
    v1.swap(v1);
    cout <<"Vector after swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) <<" ";
    } cout << endl;
    
    cout <<"Vector after swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] <<" ";
    } cout << endl << endl;

    //empty or not
        //vector<int> v12;
    cout << "Empty or not: ";
    v1.empty() 
        ? cout << "(Empty)" << endl << endl
        : cout << "(Not empty)" << endl << endl;

    //Insert 18 at last position
    cout <<"Insert 18 at last position: " <<endl;
    v1.push_back(18);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) <<" ";
    } cout << endl;

    //Remove last element
    cout <<"Remove last element: " <<endl;
    v1.pop_back();
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) <<" ";
    } cout << endl << endl;    

    //Insert 1 at begining
    cout <<"Insert 1 at begining: "<< endl;
    v1.insert(v1.begin(), 1);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) <<" ";
    } cout << endl;

    //Insert 1 at third position 
    cout <<"Insert 2 at begining: "<< endl;
    v1.insert(v1.begin()+2, 4);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) <<" ";
    } cout << endl << endl;    

    //Erase the 3rd element
    cout <<"Erase  at begining: "<< endl;
    v1.erase(v1.begin()+2);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1.at(i) <<" ";
    } cout << endl << endl;   

    // erases the vector
    v1.clear();
    cout << "Vector size after erase(): " << v1.capacity();

    // swap
    vector<int> v3, v4;
    v3.push_back(1);
    v3.push_back(2);
    v4.push_back(3);
    v4.push_back(4);
 
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";
 
    // Swaps v1 and v2
    v3.swap(v4);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v4.size(); i++)
        cout << v4[i] << " ";

    

    return 0;
}
