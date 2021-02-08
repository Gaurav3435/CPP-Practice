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
       void printNumber(void)
        {
            cout << "Your number is (" << a << ", " << b <<")" << endl;
        }
};
int main()
{
    point num1(2,2);
    num1.printNumber();
    return 0;
}
