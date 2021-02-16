#include<iostream>
using namespace std;
class rectangle
{
    private:
        float length ,breadth;
    public:
        float set_data(float l,float b)
        {
            length=l;
            breadth=b;
        }
        float area()
        {
            return (length*breadth);
        }
        float perimeter()
        {
            return (2*(length+breadth));
        }
};

int main()
{
    rectangle r1;
    r1.set_data(2.5,2.5);
    cout<<"The area is :"<<r1.area()<<endl;
    cout<<"The perimeter is:"<<r1.perimeter()<<endl;
    return 0;
}





