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
        static void getdata(void)
        {
            //cout<<"The id of employee is: "<<id<<endl;//This will through error
            cout<<"The count of employee is: "<<counts<<endl;
        }

};

int Employee::counts;

int main()
{
    Employee Gaurav,G2,G3;
    Gaurav.setdata();
    Employee::getdata();
    G2.setdata();
    Employee::getdata();
    G3.setdata();
    Employee::getdata();
    return 0;
}
