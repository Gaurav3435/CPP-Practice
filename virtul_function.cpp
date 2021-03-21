#include<iostream>
using namespace std;

class shape
{
    protected:
        double height,width;
    public:
        void get_data(double v1,double v2)
        {
            height=v1;
            width=v2;
        }
        virtual void display_area()
        {

        }
};

class traingle:public shape
{

    public:
    void display_area()
        {
            cout<<"The Area of Triangle is: "<<(0.5*height*width)<<endl;
        }
};
class rectangle:public shape
{

    public:
    void display_area()
        {
            cout<<"The Area of Rectangle is: "<<(height*width)<<endl;
        }
};

int main()
{
    double h ,w;
    cout<<"Enter the Height: ";
    cin>>h;
    cout<<"Enter the Width: ";
    cin>>w;

    rectangle r;
    shape*s=&r;
    s->get_data(h,w);
    s->display_area();

    traingle t;
    s=&t;
    s->get_data(h,w);
    s->display_area();

}
