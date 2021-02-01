#include<iostream>
using namespace std;

inline multiple(int a,int b=12){
    return a*b;
}
int main()
{
    int a, b;
    cout<<"Enter two number to multiply:"<<endl;
    cin>>a;
    cout<<"THe multiplication of this two is:"<<multiple(a)<<endl;
    return 0;
}
