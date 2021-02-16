#include<iostream>
#include<string.h>
using namespace std;

template<class type1,class type2>
class get_display
{
    private:
        type1 num1;
        type2 num2;
    public:
        get_display(type1 a, type2 b)
        {
            num1=a;
            num2=b;
        }
        void display(void)
        {
            cout<<"THe value of 1st arguement is : "<<num1<<endl;
            cout<<"THe value of 2nd arguement is : "<<num2<<endl;
        }
};
int main()
{
    get_display<int,float> gd(1,1.1);
    gd.display();
    get_display<int,int> gd2(2,2);
    gd2.display();
    get_display<string,int> gd3("C",3);
    gd3.display();
    return 0;

}
