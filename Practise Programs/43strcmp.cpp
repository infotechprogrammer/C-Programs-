#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[80], s2[80];
    cout<<"Enter first string : ";
    cin.getline(s1,80);
    cout<<"Enter second string : ";
    cin.getline(s2,80);
    int k = strcmp(s1,s2);
    if(k==0){
        cout<<"Both strings are alphabetically identical";
    }else if(k>0){
        cout<<s1<< " is alphabetically greater than "<<s2;      
    }else{
        cout<<s1<< " is alphabetically less than "<<s2;
        }

return 0;
}