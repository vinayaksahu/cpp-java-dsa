#include<iostream>
using namespace std;

void display(int m[6]) {

    for (int i = 0; i < 5; i++) {
        cout <<m[i] <<" ";
    } 

    cout <<endl <<endl;

/*    for (const int &i : m) {
        cout <<i <<" "; 
    }   */ 
   
}

int main() {

    int marks[6] = {4, 5, 8, 2, 1, 7};

    //display marks using function
    display(marks);

    return 0;
}
