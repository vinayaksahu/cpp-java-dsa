#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key) {

/* Binary search using while loop*/
   int mid = (s + e) / 2;

   while (s <= e) {
      if (arr[mid] == key)
         return mid;

      if (arr[mid] < key)
         s = mid + 1;

      else //if (arr[mid] > key)
         e = mid - 1;

      return -1;
   }
   



/* Binary search using recursion
   if (s <= e) {
      int mid = (s + e) / 2;
      if (arr[mid] == key) 
         return mid;
      
      if (arr[mid] > key) 
         return binarySearch(arr, s, mid-1, key);
      
      if (arr[mid] < key) 
         return binarySearch(arr, mid+1, e, key);
      
   }
*/
   return -1; 

}

int main() {
   
   int arr[] = {2, 4, 7, 8, 10, 12, 16, 19, 26, 50, 11};
   int size = sizeof(arr) / sizeof(arr[0]);

   int key = 12;
   //cout <<"Enter key to search in the array: ";
   //cin >> key;

   int index = binarySearch(arr, 0, size - 1, key);

   if (index == -1) {
      cout <<"Key is not present in the array. ";
   } else {
      cout <<key<<" is present in the array index of "<<index;
   }
   

   return 0;
}
