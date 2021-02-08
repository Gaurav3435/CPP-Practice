
#include<iostream>
using namespace std;

class second;

class first
{
    int value;
    friend void swap_class_value(first &,second&);
    public:
        int setdata(int data)
        {
            value=data;
        }
        void display()
        {
            cout<<"THe first number is: "<<value<<endl;
        }
};
class second
{
    int value;
    friend void swap_class_value(first& ,second& );
    public:
        int setdata(int data)
        {
            value=data;
        }
        void display()
        {
            cout<<"THe second number is: "<<value<<endl;
        }
};

void swap_class_value(first &num1, second &num2)
{
        int temp;
        temp=num1.value;
        num1.value=num2.value;
        num2.value=temp;
}

int main()
{
    first num1;
    second num2;
    num1.setdata(10);
    num1.display();
    num2.setdata(80);
    num2.display();
    swap_class_value(num1,num2);
    num1.display();
    num2.display();
    return 0;
}
