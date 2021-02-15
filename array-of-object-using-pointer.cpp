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

    Complex *c1=new Complex[2];
    Complex *c2=c1;
    for(int i=0;i<2;i++)
    {
        c1->setData(2,6);
        c1++;
    }
    c1=c2;
    for(int i=0;i<2;i++)
    {
        c1->getData();
        c1++;
    }


    return 0;
}
