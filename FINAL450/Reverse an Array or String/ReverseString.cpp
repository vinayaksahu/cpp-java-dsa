#include <iostream>
using namespace std;

//swap function
/* void swap (int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} */

//Reverse array
void ReverseArray (char *a, int n) {
    int s = 0;
    int e = n-1;
    while (s <= e) { //till start = end
        //swap start and end element
        swap (a[s], a[e]);
        s++; //increment start
        e--; //decrement end
    }
    
}

//print sorted array element
void printArray(char *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } cout << endl;    
}

int main() {
    
    char str[] = "abcd";
    int size = sizeof(str) / sizeof (str[0]);

    cout <<"Reverse String: "<<endl;
    ReverseArray (str, size);
    printArray(str, size);

    return 0;
}
