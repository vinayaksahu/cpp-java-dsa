#include<iostream>
using namespace std;

int main() {
    
    int arr[] = {4, 5, 7, 8, 9, 6, 3, 7, 0};
    double sum = 0, avg = 0;
    //int i;
    double count = 0;

    cout <<"Array elements: "<<endl;
    for(const double &i : arr/*i = 0; i < 9; i++*/) {
        //cout <<arr[i]<<" ";
        cout <<i<<" ";
        //sum += arr[i];    
        sum += i;
        count++;
    }

    cout <<endl;

    //avg = sum / (i - 1);
    avg = sum / count;

    cout <<"sum: "<<sum <<endl;

    cout <<"Average: "<<avg <<endl;

    return 0;
}
