#include<iostream>
using namespace std;

class simple
{
    int a,b,c;
    public:
        simple(int n1,int n2,int n3)
        {
            a=n1;
            b=n2;
            c=n3;
            cout<<"The integer are: "<<a<<" "<<b<<" "<<c<<endl;
        }


        void display()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        ~simple()
        {
            cout<<"The integer are: "<<a<<" "<<b<<" "<<c<<" are destructor !!!"<<endl;
        }
};

int main()
{
    simple a(1,2,3),b(1,2,3.45);
    return 0;

}
