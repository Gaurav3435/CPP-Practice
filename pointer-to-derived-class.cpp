#include<iostream>
using namespace std;
class Base{
    public:
        int b;
        void getData(){
            cout<<"The value element b in base class is "<<b<<endl;
        }
};
class derived: public Base{
    public:
        int d;
        void getData(){
            cout<<"The value element d in derived class is "<<d<<endl;
        }
};

int main(){
    Base b1;
    Base * b1_pointer=&b1;
    b1_pointer->b=10;
    b1_pointer->getData();

    derived d1;
    Base * d1_pointer=&d1;
    d1_pointer->b=20;
    d1_pointer->getData();

    derived d2;
    derived * d2_pointer=&d2;
    d2_pointer->d=30;
    d2_pointer->getData();

    derived d3;
    Base * d3_pointer=&d3;
    /*d3_pointer->d=20; //this willgive error
    d3_pointer->getData();*/

    derived d5;
    d5.d=40;
    Base b5;
    b5.b=60;
    Base * d4_pointer=&d5;
    d4_pointer->getData();
    return 0;
}
