#include <iostream> 
using namespace std; 

int main() { 

    // MCQ 1
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;

    (*ptr)++;
    *ptr = p;
    cout << *ptr <<" "<< f <<" "<< p << endl; // Output: 2.5 2.5 2.5

    int *a = 0;
    int b = 10;
    *a = b;
    cout << *a << endl;

    double aa = 10.54;
    double *dd = &aa;
    dd = dd + 1;
    cout  << dd << endl;


    return 0; 
}