//It is a program calculates sum, sub, mul, div, and modulus of 2 numbers
#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int sum;
    int sub;
    int mul; 
    int div;
    int mod;

    cout << "Type a number:\n";
    cin >> x;
    cout << "Type another number:\n";
    cin >> y;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = x % y;

    cout << "Addition is: " << sum << "\n";
    cout << "Subtraction is: " << sub << "\n";
    cout << "Multiplication is: " << mul << "\n";
    cout << "Division is: " << div << "\n";
    cout << "Modulus is: " << mod;

    return 0;
}