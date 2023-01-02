#include <iostream> 
using namespace std; 

int main() { 

    // Null Pointer
    /* int *nullPointer = 0; */
    int *nullPointer = NULL;
    cout << "Null Pointer: " << nullPointer << endl;
    cout << "----------------------------" << endl;

    // Wild Pointer returns garbage value
    int *wildPointer;
    cout << "Wild Pointer (garbage value): " << wildPointer << endl;
    cout << "----------------------------" << endl;

    // double Pointer returns garbage value
    cout << "Double pointer: " << endl;
    int a = 7;
    int *p = &a;
    int **q = &p;
    cout << "address of a: " << &a << endl;
    cout << "address of a: " << p << endl;
    cout << "address of a: " << *q << endl;
    cout << "address of p: " << &p << endl;
    cout << "address of p: " << q << endl;
    cout << "value of a: " << a << endl;
    cout << "value of a: " << *p << endl;
    cout << "value of a: " << **q << endl;
    cout << "----------------------------" << endl;

    // void Pointer can be typecasted to anyone
    cout << "Void Pointer: " << endl;
    int num = 7;
    void *voidPointer;
    voidPointer = &num; 
    cout << "void Pointer (returns int value): " << *(int *)voidPointer << endl;
    char ch = 'A';
    voidPointer = &ch;
    cout << "void Pointer (returns char value): " << *(char *)voidPointer << endl;
    cout << "----------------------------" << endl;
    cout << "Dangling pointer: " << endl;
    //A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer.
    // (a) Function Call
    cout << "(a) Function Call: " << endl;
    /* int *fun = fun(); // fun pointing to something whih is not valid anymore
    cout << *fun << endl; */ 
    cout <<"fun points to something whih is not valid anymore." << endl;
    // (b) Dealloaction of memory
    cout << "(b) Dealloaction of memory: " << endl;
    int *d = (int *)(malloc(sizeof(int)));
    free(d); cout << "after calling free() d becomes dangling pointer: " << endl;
    d = NULL; // Now d no more dangling pointer.

    cout << "(c) Variables goes out of scope: " << endl;
    int *scope;
    {
        int ch = 4;
        scope = &ch;
        cout << "in the scope scope: "<< *scope << endl;
    }

    cout << "out of scope scope: "<< *scope << endl;    

    return 0; 
} 