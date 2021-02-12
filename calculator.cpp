#include<iostream>
#include <cmath>
using namespace std;

class simple_calci
{
    protected:
        int num1,num2;
    public:
        void setdata(int n1,int n2)
        {
            num1=n1;
            num2=n2;
        }
        int add()
        {
            return (num1+num2);
        }
        int sub()
        {
            return (num1-num2);
        }
        int multiply()
        {
            return (num1*num2);
        }int divide()
        {
            return (num1/num2);
        }

};

class scientific_calci
{
    protected:
        int num1=1;
    public:
        float logarithmic()
        {
            return (log10(num1));
        }
        float cosine()
        {
            return (cos(num1));
        }
        float sine()
        {
            return (sin(num1));
        }

};

class show: public scientific_calci,public simple_calci
{
    public:
        void display()
        {
            cout<<"THe addition is: "<<add()<<endl;
            cout<<"THe subsraction is: "<<sub()<<endl;
            cout<<"THe multiply is: "<<multiply()<<endl;
            cout<<"THe divide is: "<<divide()<<endl;
            cout<<"THe logarithm is: "<<logarithmic()<<endl;
            cout<<"THe cosine is: "<<cosine()<<endl;
            cout<<"THe sine is: "<<sine()<<endl;
        }
};

int main()
{
    show s1;
    s1.setdata(10,5);
    s1.display();
    return 0;
}
