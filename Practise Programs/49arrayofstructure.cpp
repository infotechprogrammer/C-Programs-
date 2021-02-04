#include<iostream>
using namespace std;

struct employee
{
    int code;
    char name[20];
    char dept[6];
    float sal;
};

int main()
{
    employee emp[2] = {01,"Sahil", "IT",710000.89,02,"Sahil Batra", "ITdep",720000.89};
    cout<<"\nEmployee 1 Details:\n";
    cout<<emp[0].code<<endl;
    cout<<emp[0].name<<endl;
    cout<<emp[0].dept<<endl;
    cout<<emp[0].sal<<endl;
    cout<<"\nEmployee 2 Details:\n";
    cout<<emp[1].code<<endl;
    cout<<emp[1].name<<endl;
    cout<<emp[1].dept<<endl;
    cout<<emp[1].sal<<endl;

return 0;
}