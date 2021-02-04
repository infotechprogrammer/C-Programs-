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
    void display(employee);
    employee emp = {01,"Sahil", "IT",544532.89};
    cout<<"\nEmployee Details are:\n";
    display(emp);
return 0;
}
void display(employee e)
{
    cout<<"\nEmployee Code: "<<e.code;
    cout<<"\nEmployee Name: "<<e.name;
    cout<<"\nEmployee Department: "<<e.dept;
    cout<<"\nEmployee Salary: "<<e.sal;
}