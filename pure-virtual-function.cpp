#include<iostream>
using namespace std;

class Base{
    public:
        int b=10;
        virtual void getData()=0; //pure virtual function
};
class derived: public Base{
    public:
        int d=20;
        void getData(){
            cout<<"The value element d in derived class is "<<d<<endl;
        }
};
class derived2: public Base{
    public:
        int d=30;
        void getData(){
            cout<<"The value element d in derived class is "<<d<<endl;
        }
};
int main(){
    derived b1;
    Base * b1_pointer=&b1;
    b1_pointer->getData();
    return 0;
}

