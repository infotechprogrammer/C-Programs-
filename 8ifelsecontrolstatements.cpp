#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 30, c = 15;
    if (a > b && a > c) //ifstatement && meand AND operator (means this and this both conditions must be true)
    {
        cout << "A is big";
    }
    else if (b > a && b > c) //else if statement
    {
        cout << "B is big";
    }
    else //else statement
    { 
        cout << "C is big";
    }
    return 0;
}

/*

C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

*/