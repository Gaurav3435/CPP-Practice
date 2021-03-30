#include<fstream>
#include<iostream>
using namespace std;

int main()
{

    ofstream fout;
    fout.open("Country");

    fout<<"America";
    fout<<"United Kingdom";
    fout<<"South Korea";
    fout.close();

    fout.open("Capital");
    fout<<"Washingtom";
    fout<<"London";
    fout<<"Seoul";
    fout.close();

    const int N=50;
    char line[N];

    ifstream fin;
    fin.open("Country");
    cout<<"The Content of Country is:";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    fin.open("Capital");
    cout<<"Contents of Capital";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
}

