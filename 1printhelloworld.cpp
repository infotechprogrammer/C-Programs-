//Program to print Hello World
#include <iostream>
using namespace std;
int sum(int,int);
int main() {
  cout <<sum(10,20);
}
int sum(int a, int b)
{
  return a+b;
}
/* Example Explained below:
Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

Line 2: using namespace std means that we can use names for objects and variables from the standard library.

Don't worry if you don't understand how #include <iostream> and using namespace std works. Just think of it as something that (almost) always appears in your program.

Line 3: A blank line. C++ ignores white space.

Line 4: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.

Line 5: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World". 
*/


//In turbo C++ and other old compliers it is like this :
//#include<iostream.h>  //For input output operations
//#include<conio.h> For  //using getch() or clrscr()
//void main()  //For main function we use void to avoid writing return 0 in end of program
//{
//  cout<<"Hello World";
//  getch();
//} 
