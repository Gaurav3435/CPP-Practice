#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int* b=&a;
    int d=20;
    int **c=&b;
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The address stored by b is:"<<b<<endl;
    cout<<"THe value of a is:"<<a<<endl;
    cout<<"THe derefernce of b is:"<<*b<<endl;
    cout<<endl;
    cout<<"The address of b is:"<<&b<<endl;
    cout<<"The value of b is:"<<b<<endl;
    cout<<"The address of  c is:"<<&c<<endl;
    cout<<"THe address stored by c is:"<<*c<<endl;
    cout<<"THe value at address of address  of c is:"<<**c<<endl;
    return 0;
}
