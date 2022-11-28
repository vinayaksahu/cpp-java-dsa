#include<iostream>
using namespace std;

int main()
{
    /* Variables */

    //1. Integers
    int age = 14;   // age is 14

    //The value of a variable can be changed, hence the name variable.
    age = 17;       // age is 17

    //2. Floating-point Literals
    float a = -2.0;

    float b = 0.0000234;

    float c = -0.22E-5; //Note: E-5 = 10^-5

    //3. Characters

    char ch1 = 'a'; // 'm', 'F', '2', '}'

    //5. String Literals

    string s1 = "good"; //string constant
    string s2 = ""; //	null string constant
    string s3 = " ";    //string constant of one white space
    string s4 = "x";	//string constant having a single character
    string s5 = "Earth is round\n";	//prints string with a newline
    


    /* Constant */
    const int LIGHT_SPEED = 299792458;
    //LIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant.

    
    return 0;
}
