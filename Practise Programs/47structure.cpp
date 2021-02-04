#include<iostream>
using namespace std;

struct student
{
    int rollno;
    char name[20];
    float marks;
}s2;

int main()
{
    student s1;
    cout<<"Enter roll no, name and percentage for student 1 = \n";
    cin>>s1.rollno>>s1.name>>s1.marks;  
    cout<<"Enter roll no, name and percentage for student 2 = \n";
    cin>>s2.rollno>>s2.name>>s2.marks;  
    cout<<"\nStudent 1 Details:\n";
    cout<<"Name : "<<s1.name;
    cout<<"\nRollno : "<<s1.rollno;
    cout<<"\nPrecentage : "<<s1.marks;  
    cout<<"\nStudent 2 Details:\n";
    cout<<"Name : "<<s2.name;
    cout<<"\nRollno : "<<s2.rollno;
    cout<<"\nPrecentage : "<<s2.marks;
return 0;
}