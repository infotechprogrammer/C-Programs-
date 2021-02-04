#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[80], s2[80];
    cout<<"Enter the string:\t";
    cin.getline(s1,80);
    strcpy(s2,s1);
    cout<<"Copied String:\t"<<s2;
return 0;
}