#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    string st,str="Hello i am Gaurav Patil!!!";
    ifstream in("Gaurav2.txt");
    getline(in,st);
    cout<<st<<endl;

    ofstream out("Gaurav2.txt");
    out<<str;

    ifstream in2("Gaurav2.txt");
    getline(in,str);
    cout<<str<<endl;

    return 0;
}

