#include<iostream>
#include<array>
using namespace std;

int main() {
    
    // basic type initialization 
    int arr[] = {1, 5, 7, 4, 9};

    // array initialization using array library
    array<int, 8> ar = {7, 4, 9, 8, 2, 3, 6, 1};

    array<int, 8> ar1 = {2, 3, 6, 1, 0, 5, 4, 2};

/* Element access */
    // at()
    cout << "The array elements are using at():  ";
    for (int i = 0; i < ar.size(); i++) {
        cout << ar.at(i) << " ";
    } cout << endl << endl;

    // get()
    cout << "The array elements are using get(): ";
    /* for (int i = 0; i < ar.size(); i++) {   // this is invalid accessing
         cout << get<i>(ar) <<" ";
    } */
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << get<6>(ar) << " " << get<7>(ar) << " ";
    cout << endl << endl;

    // operator[]
    cout << "The array elements are using operator[]:"<<endl;
    for (int i = 0; i < ar.size(); i++) {
        cout << ar[i] <<" ";
    } cout << endl << endl;
    
    // front()
    cout << "Front element: "<< ar.front() << endl;
    
    // back()
    cout << "back element: "<< ar.back() << endl << endl;

/*************************************************************************************************/

/*Modifiers: */

    //Size
    cout << "The number of array elements is: "<< ar.size() << endl;
    cout << "Maximum elements array can hold is: "<< ar.max_size() << endl << endl;

    //Swap two same size array
    cout <<"Array1 before swapping: "<< endl;
    for (int i = 0; i < ar.size(); i++){
        cout << ar.at(i) <<" ";
    } cout << endl;
    
    cout <<"Array2 before swapping: "<< endl;
    for (int i = 0; i < ar1.size(); i++){
        cout << ar1[i] <<" ";
    } cout << endl;
    ar.swap(ar1);
    cout <<"Array1 after swapping: "<< endl;
    for (int i = 0; i < ar.size(); i++){
        cout << ar.at(i) <<" ";
    } cout << endl;
    
    cout <<"Array2 after swapping: "<< endl;
    for (int i = 0; i < ar1.size(); i++){
        cout << ar1[i] <<" ";
    } cout << endl << endl;

    //empty or not
    array<int, 0> ar2;
    cout << "Empty or not: ";
    ar2.empty() 
        ? cout << "(Empty)" << endl << endl
        : cout << "(Not empty)" << endl << endl;

    //// fill the array with 1 six times
    array<int, 6> ar3;
    ar3.fill(1);
    cout <<"Array after filling operation" << endl;
    for (int i = 0; i < ar3.size(); i++) {
        cout << ar[i] << " ";
    } cout << endl;
    

    return 0;
}
