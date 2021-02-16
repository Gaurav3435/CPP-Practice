#include<iostream>
#include<string.h>
using namespace std;

template<class type1>
type1 swapp(type1 &a, type1 &b)
{
    type1 temp=a;
    a=b;
    b=temp;

}
int main()
{
    int a=10,b=20;
    cout<<"Before Swapping..."<<endl;
    cout<<"The Value of A is : "<<a<<endl;
    cout<<"The Value of B is : "<<b<<endl;
    swapp(a,b);
    cout<<"After Swapping..."<<endl;
    cout<<"The Value of A is : "<<a<<endl;
    cout<<"The Value of B is : "<<b<<endl;

    float a1=10.10,b1=20.10;
    cout<<"Before Swapping..."<<endl;
    cout<<"The Value of A is : "<<a1<<endl;
    cout<<"The Value of B is : "<<b1<<endl;
    swapp(a1,b1);
    cout<<"After Swapping..."<<endl;
    cout<<"The Value of A is : "<<a1<<endl;
    cout<<"The Value of B is : "<<b1<<endl;

    string a2="Hello",b2="gaurav";
    cout<<"Before Swapping..."<<endl;
    cout<<"The Value of A is : "<<a2<<endl;
    cout<<"The Value of B is : "<<b2<<endl;
    swapp(a2,b2);
    cout<<"After Swapping..."<<endl;
    cout<<"The Value of A is : "<<a2<<endl;
    cout<<"The Value of B is : "<<b2<<endl;

    return 0;

}


