#include <iostream>
using namespace std;

int factorial (int n) {
    int f = 1;

    for (int i = 1; i <= n; ++i) {
    f *= i; 
  }
	
  return (n < 0) ? -1 : (n == 0) ? 1 : f ;
	  
}

int main () {
  
  int n = 5;

  int fact = factorial (n);
  
  cout << "factorial of " <<n << " is: " << fact << endl; 
  
  return 0;
}