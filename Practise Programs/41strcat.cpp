#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[80], s2[80];
    cout<<"Enter the destination string:\t";
    cin.getline(s1,80);
    cout<<"Enter the source string:\t";
    cin.getline(s2,80);
    strcat(s1,s2);
    cout<<"Resulting string after concentration\t:"<<s1;
return 0;
}