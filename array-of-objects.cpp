#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        int salary;
    public:
        void setdata(void)
        {
            salary=100;
            cout<<"Enter the id :"<<endl;
            cin>>id;

        }
        void getdata(void)
        {
            cout<<"The id of employee is: "<<id<<endl;
            cout<<"The salary of employee is: "<<salary<<endl;
        }

};

int main()
{
    Employee G[3];
    for(int i=0;i<3;i++)
    {
        G[i].setdata();
        G[i].getdata();
    }
    return 0;
}
