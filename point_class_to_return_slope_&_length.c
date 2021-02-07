#include<iostream>
#include <math.h>
using namespace std;


class point()
{
    float a,b;
    public:
        float set_data(float num1,float num2)
        {
            a=num1;
            b=num2;
        }
        float slope_of_line(point pt2);
        float length_of_line(point pt2);
        void display()
        {
            cout<<"Point is: x="<<a<<" "<<"y="<<b<<endl;
        }
};

float point::slope_of_line(point pt2)
{
    return ((pt2.b-b)/(pt2.a-a))
}

float point::length_of_line(point pt2)
{
        float xd=p2.a-a;
        float yd=p2.b-b;
        return (sqrt(xd*xd+yd*yd))
}
int main()
{
    point pt1,pt2;
    float slope,length;
    pt1.set_data(2,4);
    pt2.set_data(3,5);
    slope=pt1.slope_of_line(pt2);
    length=pt1.length_of_line(pt2);
    cout<<"Length :"<<length<<"Slope :"<<slope<<endl;
    return 0;

}
