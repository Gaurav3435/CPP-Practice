#include<iostream>
using namespace std;

template <class d_type>
d_type Maximun(d_type a, d_type b)
{
    return (a>b)?a:b;
}

int main()
{
    int num1=10,num2=20;
    float nu1=10.1,nu2=20.1;
    double n1=1000.111, n2=20.2222;
    cout<<Maximun(num1,num2)<<endl;
    cout<<Maximun(nu1,nu2)<<endl;
    cout<<Maximun(n1,n2)<<endl;

    return 0;
}
