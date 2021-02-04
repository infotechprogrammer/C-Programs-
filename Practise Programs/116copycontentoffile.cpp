#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream infile("stud.txt");
    ofstream outfile("BCD.txt");
    while(infile)
    {
        infile.get(ch);
        outfile.put(ch);
    }

return 0;
}