#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers a,b,c : "<<endl;
    cin>>a>>b>>c;
    int d=(a>b)?((a>c)?a:c) : ((b>c)?b:c);
    cout<<"Greatest Number = "<<d;

return 0;
}