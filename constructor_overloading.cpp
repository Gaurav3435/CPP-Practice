#include<iostream>
using namespace std;

class point
{
    private:
        int a,b;
    public:
        point(int nm1,int nm2)//parameterized constructor
        {
            a=nm1;
            b=nm2;
        }
        point(int nm1)//parameterized constructor
        {
            a=nm1;
            b=0;
        }
       void printNumber(void)
        {
            cout << "Your number is (" << a << ", " << b <<")" << endl;
        }
};
int main()
{
    point num1(2,2);
    num1.printNumber();
    point num2(4);
    num2.printNumber();
    return 0;
}
