#include<iostream>
using namespace std;

class base1
{
    int data1,data2,data3;
    public:
        //base1(int i,int j ,int k):data1(i),data2(2),data3(3)
        //base1(int i,int j ,int k):data1(i),data2(2+data1),data3(3+data2)
        //base1(int i,int j ,int k):data1(i+data2),data2(2),data3(3) //will through garbage value since the varaible data2 is initalize later data1
        base1(int i,int j ,int k):data1(i),data2(2),data3(3)
        {
        }
        void printbase1()
        {
            cout<<"The value in data1 is: "<<data1<<endl;
            cout<<"The value in data2 is: "<<data2<<endl;
            cout<<"The value in data3 is: "<<data3<<endl;
        }
};

int main()
{
    base1 b(1,2,3);
    b.printbase1();
    return 0;
}

