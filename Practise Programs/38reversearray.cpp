#include<iostream>
using namespace std;

int main()
{
    int a[] = {10,30,50,60,90,100};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<"SIZE :"<<size;
    size=size-1;
    cout<<"Elements stored in array :"<<endl;
    for (int i = 0; i <= size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nElements stored in reverse order :"<<endl;
    for (int j = size; j >= 0; j--)
    {
        cout<<a[j]<<" ";
    }
    
return 0;
}