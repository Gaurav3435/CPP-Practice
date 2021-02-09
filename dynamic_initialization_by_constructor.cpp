#include<iostream>
using namespace std;

class simple
{
    int a,b,d;
    double c;
    public:
        simple(int n1,int n2,int n3)
        {
            a=n1;
            b=n2;
            d=n3;
            cout<<"The integer are: "<<a<<" "<<b<<" "<<d<<endl;
        }
        simple(int n1,int n2,double n3)
        {
            a=n1;
            b=n2;
            c=n3;
            cout<<"The interger are :"<<a<<" "<<b<<" "<<"THe float is: "<<c<<endl;
        }
};

int main()
{
    simple a(1,2,3),b(1,2,3.45);

}
