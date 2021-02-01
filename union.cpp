#include<iostream>
using namespace std;

union employee{
    int id;
    int favchar;
    int salary;
};
int main()
{
    union employee e1;

    e1.id=1;
    cout<<e1.id<<endl;
    cout<<endl;

    e1.favchar='a';
    cout<<e1.id<<endl;
    cout<<e1.favchar<<endl;
    cout<<"they got Overwrite!!!"<<endl;
cout<<endl;

    e1.salary=1000;
    cout<<e1.id<<endl;
    cout<<e1.favchar<<endl;
    cout<<e1.salary<<endl;
    cout<<"they got Overwrite!!!"<<endl;
cout<<endl;

    return 0;
}
