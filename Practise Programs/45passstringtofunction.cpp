#include<iostream>
#include<conio.h>
using namespace std;

int cal_occ(char s[], char ch){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count++;
        }
    }
    return(count);
}

int main()
{
    char a[80],ch;
    cout<<"Enter a string =\n";
    cin.get(a,80);
    cout<<"Enter character whose occurence you want to check :\n";
    cin>>ch;
    int k = cal_occ(a,ch);
    cout<<"Character "<<ch<<" occurs "<<k<<" times";

return 0;
}