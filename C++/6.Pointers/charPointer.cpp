#include <iostream>
using namespace std;

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptrArr  = &arr[0]; 
    cout <<"Address of array: "<< arr << endl;
    cout <<"Address of array: "<< ptrArr << endl;
    cout <<"Value of 1st element in array: "<< *ptrArr << endl;

    cout <<"----------------------------"<< endl;

    char ch[6] = "abcde";
    char *ptrCh  = &ch[0];
    cout <<"Address of array: "<< ch << endl;
    cout <<"Address of array: "<< ptrCh << endl;
    cout <<"Value of 1st element in array: "<< *ptrCh << endl;


    return 0;
}
