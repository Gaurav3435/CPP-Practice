#include<iostream>
using namespace std;

struct employee
{
    int id;
    char favchar;
    int salary;
};

typedef struct employees
{
    int id;
    char favchar;
    int salary;

} emp ;

int main()
{
    struct employee e1;
    e1.id=1;
    e1.favchar='a';
    e1.salary=1000;
    cout<<e1.id<<endl;
    cout<<e1.favchar<<endl;
    cout<<e1.salary<<endl;

    cout<<endl;


    emp e2;
    e2.id=1;
    e2.favchar='a';
    e2.salary=1000;
    cout<<e2.id<<endl;
    cout<<e2.favchar<<endl;
    cout<<e2.salary<<endl;

    return 0;
}
