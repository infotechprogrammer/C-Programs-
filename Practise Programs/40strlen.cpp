#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[80];
    cout<<"Enter a string\t";
    cin.get(a,80);
    int z = strlen(a);
    cout<<"Length of String : "<<z;
return 0;
}