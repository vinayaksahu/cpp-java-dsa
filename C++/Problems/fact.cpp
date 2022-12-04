#include<iostream>
using namespace std;

/**
 * write a program to return factorial
 * num = 3 -> 3 * 2 * 1 = 6
 * num 5 = -> 5 * 4 * 3 * 2 * 1 = 120
 */

int factorial(int num)
{
    //return (num <= 1) ? 1 : num * factorial (num - 1);
if (num < 0 )
{
    return 0;
}

  for(int i = num-1; i > 0; i--)
  {
    num *= i;
  }
  return num;

}
/*

num = 5
    return (5 == 0) ? 1 : 5 * factorial (4); //5*4 * 3 * 2 *  1 * factorial (0);

num = 4
    return (4 == 0) ? 1 : 4 * factorial (3);

num = 3
    return (3 == 0) ? 1 : 3 * factorial (2);

num = 2
    return (2 == 0) ? 1 : 2 * factorial (1);

num = 1
    return (1 == 0) ? 1 : 1 * factorial (0);

num = 0
    return (0 == 0) ? 1 : 





*/




int main() {
    
    int n = -5; 

    int fact; 
    fact = factorial(n);

    cout <<fact;

    return 0;
}
