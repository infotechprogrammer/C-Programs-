// Operators are used to perform operations on variables and values.

#include <iostream>
using namespace std;

int main()
{
int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)

cout<<"Arithmetic Addition Operator '+' \n";
cout<<"Sum 1 :"<<sum1<<"\n";
cout<<"Sum 2 :"<<sum2<<"\n";
cout<<"Sum 3 :"<<sum3<<"\n";

int x = 10; //Assignment operator
x +=5; //Assignment operator
cout<<"x = "<<x;

int x = 5;
int y = 3;
cout << (x > y); // returns 1 (true) because 5 is greater than 3 (Comparison Operator)

return 0;
}

/*
Arithmetic
 Operator	Name	        Description	
    +       Addition	    Adds together two values	x + y	
    -       Subtraction	    Subtracts one value from another	x - y	
    *       Multiplication	Multiplies two values	x * y	
    /       Division	    Divides one value by another	x / y	
    %       Modulus	        Returns the division remainder	x % y	
    ++      Increment	    Increases the value of a variable by 1	++x	
    --      Decrement	    Decreases the value of a variable by 1	--x




Assignment
 Operator	Example	 Same As
    =	    x = 5	 x = 5	
   +=	    x += 3	 x = x + 3	
   -=	    x -= 3	 x = x - 3	
   *=	    x *= 3	 x = x * 3	
   /=	    x /= 3	 x = x / 3	
   %=	    x %= 3	 x = x % 3	
   &=	    x &= 3	 x = x & 3	
   |=	    x |= 3	 x = x | 3	
   ^=	    x ^= 3	 x = x ^ 3	
   >>=	    x >>= 3	 x = x >> 3	
   <<=	    x <<= 3	 x = x << 3


Comparison
 Operator	Name	                     Example	
   ==	    Equal to	                 x == y	
   !=	    Not equal	                 x != y	
   >	    Greater than                 x > y	
   <	    Less than	                 x < y	
   >=	    Greater than or equal to	 x >= y	
   <=	    Less than or equal to	     x <= y


Logical
Operator	Name	       Description	
  && 	    Logical and	   Returns true if both statements are true	x < 5 &&  x < 10	
  || 	    Logical or	   Returns true if one of the statements is true	x < 5 || x < 4	
   !	    Logical not	   Reverse the result, returns false if the result is true	!(x < 5 && x < 10)


FOr trying all must visit to w3schools.com/cpp/.. 
*/