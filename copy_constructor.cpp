#include<iostream>
using namespace std;

class simple
{
    int a,b,d;
    double c;
    public:
        simple(int n1,int n2,int n3)
        {
            a=n1;
            b=n2;
            d=n3;
            cout<<"The integer are: "<<a<<" "<<b<<" "<<d<<endl;
        }
        simple(int n1,int n2,double n3)
        {
            a=n1;
            b=n2;
            c=n3;
            cout<<"The interger are :"<<a<<" "<<b<<" "<<"and the float is: "<<c<<endl;
        }
        simple( simple &obj)//commmenting the below method can even run the code ,because c++ proie default copy constructor
        {
            cout<<"copy constructor created!!! ";
            cout<<"the value of copies item is:"<<obj.a<<" "<<obj.b<<" "<<obj.d<<endl;
        }

        void display()
        {
            cout<<a<<" "<<b<<" "<<d<<endl;
        }
};

int main()
{
    simple a(1,2,3),b(1,2,3.45);
    simple z1(a);
    //z1.display();
    return 0;

}
