#include <iostream>
using namespace std;

int factorial (int n) {

  return (n < 0) ? -1 : (n == 0) ? 1 : n * factorial (n - 1);
}

int main () {
  
  int n = 4;

  int fact = factorial (n);
  
  cout << "factorial of " <<n << " is: " << fact << endl; 
  
  return 0;
}