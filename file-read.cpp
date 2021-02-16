#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    string st,str;
    ifstream in("Gaurav.txt");
    /*in>>st;
    cout<<st<<endl;*/ //prints only first word

    getline(in,str);//prints complete line
    cout<<str;
    return 0;
}
