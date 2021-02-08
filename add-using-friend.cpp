#include<iostream>
using namespace std;

class second;

class first
{
    int value;
    friend void add(first ,second);
    public:
        int setdata(int data)
        {
            value=data;
        }
        void display()
        {
            cout<<"THe number is: "<<value<<endl;
        }
};
class second
{
    int value;
    friend void add(first ,second);
    public:
        int setdata(int data)
        {
            value=data;
        }
        void display()
        {
            cout<<"THe number is: "<<value<<endl;
        }
};

void add(first num1, second num2)
{
    cout<<"The Addition of Two Number is: "<<num1.value+num2.value<<endl;
}
int main()
{
    first num1;
    second num2;
    num1.setdata(10);
    num2.setdata(80);
    add(num1,num2);
    return 0;
}
