#include<iostream>
using namespace std;

int main() {

    int i, sum = 0, num = 0;
    float avg;
    while (i < 5)
    {
        cin>>num;
        if (num < 0)
        {
            goto jump;
        }
        sum += num;
        i++;
    }

jump:
    avg = sum / (i - 1);
    cout <<"Average: "<< avg <<endl;

}