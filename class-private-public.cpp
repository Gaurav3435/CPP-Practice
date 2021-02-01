#include<iostream>
using namespace std;

class employee
{
    private:
        int id, salary;
    public:
        int increment=1000;
        void setdata(int id,int salary);
        void getdata();
        void incre();

};

void employee::setdata(int a,int b)
{
    id=a;
    salary=b;
}

void employee::getdata()
{
    cout<<"THe id of person is: "<<id<<endl;
    cout<<"THe salary of person is: "<<salary<<endl;
}
void employee::incre()
{
    salary=salary+increment;
}

int main()
{
    employee gaurav;
    gaurav.setdata(1,10000);
    gaurav.getdata();

    gaurav.incre();
    gaurav.getdata();

    gaurav.increment=1200;//private variable cannot be accesssed!
    gaurav.incre();
    gaurav.getdata();


    return 0;
}
