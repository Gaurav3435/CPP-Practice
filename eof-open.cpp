#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    string str1="Hello Gaurav patil ,How are you!!!",str2;
    ofstream out;
    out.open("eof-open.txt");
    out<<str1;
    out.close();

    ifstream in;
    in.open("eof-open.txt");
    while(in.eof()==0)
    {
        getline(in,str2);
        cout<<str2<<endl;
    }
    in.close();
    return 0;
}
