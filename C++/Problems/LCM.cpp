#include<iostream>
using namespace std;

int main(void) {

    int n1 = 4, n2 = 6, max;
    
    max = (n1 > n2) ? n1 : n2;

    do{

      if (max % n1 == 0 && max % n2 == 0)      {
        cout << max;
        break;
      }else{
        ++max;
      }  

    } while (true);
    
    

}