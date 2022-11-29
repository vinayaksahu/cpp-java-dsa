#include<iostream>
using namespace std;

int main()
{
    // break statement using for loop
    int i;
    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            /* Loop will break from here */
            break;
        }
        
    }
    /* and print here i = 3 */
    cout <<i <<endl;


    // break statement using while loop
    int num = 0, sum = 0;
    while (i < 5)
    {
        
        cin >> num;
        if (num < 0)
        {
            /* code will break here if num is less then 0 */
            break;
        }
        sum += num;
        /* code */
    }
    cout<<"Sum of positive numbers are: "<<sum<<endl;


    // break with nested loop
    for (int i = 0; i < 5; i++)
    {
        /* code */
        int j;
        for (j = 0; j < 5; j++)
        {
            if (i == 3)
            {
                break;
            }
            
        }
        cout<<"i = "<<i<<"j = "<<j<<endl;
        
    }
    
    
    return 0;
}
