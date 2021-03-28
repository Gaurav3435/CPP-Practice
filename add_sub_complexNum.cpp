#include<iostream> //Gaurav Patil A-33
using namespace std;
class ComplexNum
{
    private :
    int real, imag;
    public:
    ComplexNum(int r,int i)
    {
        real=r;
        imag=i;
    }
    //Copy constructor
    ComplexNum(const ComplexNum &c1)
    {real=c1.real; imag = c1.imag ;}
    int getX(){return real;}
    int getY(){return imag;}

    ComplexNum operator-(ComplexNum const &obj1)
    {
        ComplexNum obj2(0,0);
        obj2.real = real - obj1.real;
        obj2.imag = imag - obj1.imag;
        return obj2;
    }
    ComplexNum operator+(ComplexNum const &obj1)
    {
        ComplexNum obj2(0,0);
        obj2.real = real + obj1.real;
        obj2.imag= imag + obj1.imag;
        return obj2;
    }

    void print(void)
    {
        if(imag>=0)
        {
            cout <<real << "+ i" << imag <<endl;
        }
        else
        {
            cout << real << "+ (" << imag <<")i" <<endl;
        }

    }
};

int main()
{
    ComplexNum comp1(15, -2);
    ComplexNum comp2(5, 10);
    cout<<"The two complex numbers are:"<<endl;
    comp1.print();
    comp2.print();
    cout<<"The result of the subtraction is: ";
    ComplexNum comp3=comp1-comp2;
    ComplexNum comp5=comp3;
    comp5.print();
    cout<<"The result of the Addition is: ";
    ComplexNum comp4=comp1+comp2;
    ComplexNum comp6=comp4;
    comp6.print();
    return 0;
}
