#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;

int main() {
    
// vector initialization using vector librv1y
	vector<int> v1;
    //fetch data in vector
	for (int i = 1; i <= 5; i++)
	    v1.push_back(i * 3);
    
    //print data from vector
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] <<" ";

/* Element access */
    // at()
    cout << "The vector elements v1e using at():  ";
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

	cout << "The first element is " << *pos;

/*************************************************************************************/

/*Modifiers: */


    //Size
    cout << "The number of vector elements is: "<< v1.size() << endl;
    cout << "Maximum elements vector can hold is: "<< v1.max_size() << endl << endl;

    //Capacity
    cout << "The number of vector elements is: "<< v1.size() << endl;
    cout << "Maximum elements vector can hold is: "<< v1.max_size() << endl << endl;

    //Swap two same size vector
    cout <<"v1ray1 before swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) <<" ";
    } cout << endl;
    
    cout <<"v1ray2 before swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] <<" ";
    } cout << endl;
    v1.swap(v1);
    cout <<"v1ray1 after swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1.at(i) <<" ";
    } cout << endl;
    
    cout <<"v1ray2 after swapping: "<< endl;
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] <<" ";
    } cout << endl << endl;

    //empty()

    vector<int> v12;
    cout << "Empty or not: ";
    v12.empty() 
        ? cout << "(Empty)" << endl << endl
        : cout << "(Not empty)" << endl << endl;
    

    return 0;
}
