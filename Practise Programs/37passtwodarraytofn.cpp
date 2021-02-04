#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10];
    int m,n;
    cout<<"Enter the no of rows and cols:";
    cin>>m>>n;
    void read(int a[][10], int,int);
    void sum(int a[][10],int b[][10],int c[][10],int,int);
    void display(int c[][10],int,int);

    cout<<"Enter elements  of matrix A :\n";
    read(a,m,n);
    cout<<"Enter elements  of matrix B :\n";
    read(b,m,n);
    sum(a,b,c,m,n);
    cout<<"\n Addition of two matricies are: \n";
    display(c,m,n);
    getch();
}

void read(int x[][10],int m, int n)
{
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>x[i][j];
}
void sum(int x[][10], int y[][10], int z[][10], int m, int n)
{
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    z[i][j]=x[i][j]+y[i][j];
}
void display(int x[][10], int m, int n)
{
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cout<<x[i][j]<<"\t";
    }
    cout<<"\n";
    }
}