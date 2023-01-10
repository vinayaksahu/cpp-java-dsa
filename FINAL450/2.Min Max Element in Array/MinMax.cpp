#include <iostream>
using namespace std;

void MinMax(int a[] , int n) {

   int min = a[0];
   int max = a[0];
   for (int i = 0; i < n; i++) {
      if (min > a[i])
         min = a[i];
      
      if (max < a[i])
         max = a[i];
   }
   cout << "Minimum value: " << min << endl;   
   cout << "Maximum value: " << max << endl;   
}

int main() {

   int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
   int size = sizeof(arr) / sizeof (arr[0]);

   MinMax(arr, size);
   return 0;
}