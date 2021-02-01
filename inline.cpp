#include<iostream>
using namespace std;

inline multiple(int a,int b){
    return a*b;
}
int main()
{
    int a, b;
    cout<<"Enter two number to multiply:"<<endl;
    cin>>a>>b;
    cout<<"THe multiplication of this two is:"<<multiple(a,b)<<endl;
    return 0;
}
