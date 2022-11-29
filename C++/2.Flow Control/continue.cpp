#include<iostream>
using namespace std;

int main () {
/*
    In a while loop, continue skips the current iteration 
    and control flow of the program jumps back to the while condition
*/
    /*Contitnue statement using For loop*/
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            /* this iteration will skip */
            continue;
        }
    cout <<i<<endl; 
    }
    

    /*
    program to calculate positive numbers till 50 only
    if the user enters a negative number,
    that number is skipped from the calculation
    negative number -> loop terminate
    numbers above 50 -> skip iteration
    */
    int num = 0;
    int sum = 0;
    while (num >= 0)
    {
        //all +ve numbers only
        sum += num;
        cout<<"Enter number: "<<endl;
        cin>>num;

        //continue
        if (num > 50)
        {   
            cout<<"Number won't be calculate because its greater then 50."<<endl;
            num = 0;    //value of number will become 0 again
            /* Number will skip if greater then 50 */
            continue;
        }
        
    }
    // Display the sum
    cout<<sum;

    return 0; 
}