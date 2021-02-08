#include<iostream>
using namespace std;

class point
{
    private:
        int a,b;
    public:
        point(void)//constructor
        {
            a=0;
            b=0;
        }
       void printNumber(void)
        {
            cout << "Your number is (" << a << ", " << b <<")" << endl;
        }
};
int main()
{
    point num1;
    num1.printNumber();
    return 0;
}
