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
class B:virtual public A
{
    public:
       void display_B(void)
       {
           cout<<"Hello World!!! from B class"<<endl;
       }
};
class C:virtual public A //without virtual , display function would raise an ambiguity
{
    public:
        void display_C(void)
        {
            cout<<"Hello World!!! from C class"<<endl;
        }
};
class D: public B,public C
{

};
int main()
{
    D d;
    d.display();
    return 0;
}
