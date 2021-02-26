#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    friend Complex operator+(Complex, Complex);
    public:
        void set_data(int f,int i)
        {
            real=f;
            img=i;
        }
        void display()
        {
            cout<<real<<" + "<<img<<" i "<<endl;
        }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

int main()
{
    Complex d1,d2,d3;
    d1.set_data(2,9);
    cout<<"First Complex Number is        : ";
    d1.display();
    d2.set_data(4,9);
    cout<<"Second Complex Number is       : ";
    d2.display();
    cout<<"After Adding  Complex Number is: ";
    d3 =operator+(d1,d2);
    d3.display();
    return 0;
}
