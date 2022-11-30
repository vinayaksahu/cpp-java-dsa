#include <iostream>
using namespace std;

int main(void)
{
    
    float f, c;

    cout << "Enter farenheit value: "<<endl;
    cin >> f;

    c =  (5.0 / 9) * (f - 32);

    cout << c <<" celcius"<<endl;

    return 0;
}
