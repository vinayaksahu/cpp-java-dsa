#include <iostream>
using namespace std; 

void search(int *arr,int n,int key){    
    int f=-1;     
    for(int i=n-1; i>=0; i--){        
        if(arr[i]==key) {            
            f=i;         
            break;        
        }         
    }    
    cout<<f; 
}

int main() {    
    //Write your code here    
    int n = 12;    
    //cin>>n;    
    int key = -3; 
    int arr[] = {1, 2, 5, 4, 9, 6, 3, 2, 2, 5, 1, 4};    
    // int *a=new int [n];    
    // for(int i=0;i<n;i++){        
    //     cin>>a[i];    
    // } cout<<endl;    
    //cin>>key;    
    search(arr,n,key);    
    return 0; 
}