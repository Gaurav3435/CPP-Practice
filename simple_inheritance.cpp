#include<iostream>
using namespace std;

class base
{
    private:
        int d1,d2;
    public:
        void setdata(int data1,int data2)
        {
            d1=data1;
            d2=data2;
        }
        int  getd1(void)
        {
            return d1;
        }
        int  getd2(void)
        {
           return d2;
        }
};

class derived:public base
{
    int d3=0;
    public:
        void setdatad3(void)
        {
            d3=getd1()*getd2();
        }
        void display(void)
        {
            cout<<"The multiply is: "<<d3<<endl;
        }
};

int main()
{
    derived der;
    der.setdata(3,6);
    cout<<"Before multiply :"<<endl;
    der.display();
    der.setdatad3();
    cout<<"After multiply :"<<endl;
    der.display();
    return 0;
}
