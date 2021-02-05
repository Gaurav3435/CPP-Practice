#include<iostream>
using namespace std;
class complex_number
{
    int a,b;
    public:
        void getcomplex(void)
        {
            cout<<"Enter the real number: ";
            cin>>a;
            cout<<"Enter the imaginary part: ";
            cin>>b;
        }
        void displaycomplex(void)
        {
            cout<<"THe complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
        void add_complex(complex_number c1,complex_number c2)
        {
            a=c1.a+c2.a;
            b=c1.b+c2.b;
        }
};
int main()
{
    complex_number c1,c2,c3;
    c1.getcomplex();
    c1.displaycomplex();
    c2.getcomplex();
    c2.displaycomplex();
    c3.add_complex(c1,c2);
    c3.displaycomplex();
    return 0;
}
