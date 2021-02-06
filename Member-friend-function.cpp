#include<iostream>
using namespace std;
class comp_n;
class sumclass
{
    public:
        int sum(int number1, int number2)
        {
            return (number1+number2);
        }
        int sum_of_real(comp_n, comp_n);
        int sum_of_img(comp_n,comp_n);
};

class comp_n
{
    int a,b;
    friend comp_n sum_of_complex(comp_n ,comp_n );
    friend int sumclass::sum_of_real(comp_n,comp_n);
    friend int sumclass::sum_of_img(comp_n,comp_n);
    public:
        int setdata(int real,int img)
        {
            a=real;
            b=img;
        }
        int display()
        {
            cout<<"The imaginary number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};

int sumclass::sum_of_real(comp_n number1, comp_n number2)
{
    return (number1.a+number2.a);
}

int sumclass::sum_of_img(comp_n number1,comp_n number2)
{
    return (number1.b+number2.b);
}

comp_n sum_of_complex(comp_n n1,comp_n n2)
{
    comp_n n3;
    n3.setdata((n1.a+n2.a),(n1.b+n2.b));
    return n3;
}



int main()
{
    comp_n num1,num2,num3,num4;
    num1.setdata(2,4);
    num1.display();
    num2.setdata(2,4);
    num2.display();
    num3=sum_of_complex(num1,num2);
    num3.display();
    sumclass s;
    int a=s.sum_of_real(num1,num2);
    int b=s.sum_of_img(num1,num2);
    cout<<"The sum of real part is: "<<a<<endl;
    cout<<"The sum of real part is: "<<b<<endl;
    return 0;
}

