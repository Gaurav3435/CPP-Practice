#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};

int main()
{
    Complex c1;
    c1.setData(2,4);
    c1.getData();

    Complex *ptr=&c1;
    (*ptr).getData();

    Complex *ptr2=new Complex;
    ptr2->setData(3,6);
    ptr2->getData();

    return 0;
}
