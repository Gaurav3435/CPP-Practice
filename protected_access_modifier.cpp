#include<iostream>
using namespace std;

class Base{
    protected:
        int a=10;
    private:
        int b=20;

};

class Derived: protected Base{
    public:
        void display()
        {
            cout<<a;
            //cout<<b;//this will give error
        }
};

int main(){
    Base b;
    Derived d;
    d.display();
    return 0;
}
