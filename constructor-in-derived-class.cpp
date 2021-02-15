#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int i)
        {
            data1=i;
        }
        void printbase1()
        {
            cout<<"The value in base1 is: "<<data1<<endl;
        }
};
class base2
{
    int data2;
    public:
        base2(int i)
        {
            data2=i;
        }
        void printbase2()
        {
            cout<<"The value in base1 is: "<<data2<<endl;
        }
};
class base3:public base1,public base2
{
    int data3;
    public:
        base3(int a,int b,int c):base1(a),base2(b)
        {
            data3=c;
        }
        void printbase3()
        {
            cout<<"The value in base1 is: "<<data3<<endl;
        }
};

int main()
{
    base3 b(1,2,3);
    b.printbase1();
    b.printbase2();
    b.printbase3();
    return 0;
}
