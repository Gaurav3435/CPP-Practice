#include<iostream>
using namespace std;

int multiple(int a ,int b)
{
    return a*b;
}
int multiple(int a,int b,int c)
{
    return a*b*c;
}
int main()
{
    cout<<"THe multiplication of two number is:"<<multiple(2,4)<<endl;
    cout<<"THe multiplication of three number is:"<<multiple(2,4,6)<<endl;
    return 0;
}
