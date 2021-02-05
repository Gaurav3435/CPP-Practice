#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        static int counts;
    public:
        void setdata(void)
        {
            cout<<"Enter the id :"<<endl;
            cin>>id;
            counts++;
        }
        void getdata(void)
        {
            cout<<"The id of employee is: "<<id<<endl;
            cout<<"The count of employee is: "<<counts<<endl;
        }

};

int Employee::counts;

int main()
{
    Employee Gaurav,G2,G3;
    Gaurav.setdata();
    Gaurav.getdata();
    G2.setdata();
    G2.getdata();
    G3.setdata();
    G3.getdata();
    return 0;
}
