#include<iostream>
using namespace std;

int main () {

    //Display number 1 to N
    int n = 10;
    int i = 1;
    do {
        cout << i <<endl;
        i++;
    } while (i <= n);

        cout <<endl<<endl;


    //Sum of even number only
    int sumeven = 0;
    int j = 0;
    do
    {
        if (j % 2 == 0)
        {
            sumeven += j;
        }
        j++;
    } while (j < n);
    cout<<sumeven;

    //Sum of +ve number only if user entered any -ve number loop terminates
    int sum = 0;
    int num = 0;
    do {
        sum += num;
        cin >>num;
    }while (num >= 0);
    cout <<sum;


    


    
    

    return 0;
}