#include<iostream>
using namespace std;

class A
{
    public:
       void display(void)
       {
           cout<<"Hello World!!! from A class"<<endl;
       }
};
class B
{
    public:
       void display(void)
       {
           cout<<"Hello World!!! from B class"<<endl;
       }
};
class C:public A,public B
{
    //uncommeting the below code in class can let to ambiguity error!!!!
    public:
        void display(void)
        {
            B::display();
        }
};
int main()
{
    C c;
    c.display();
    return 0;
}
