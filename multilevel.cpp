#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    protected:
        string name;
    public:
        void set_name(string n)
        {
            name=n;
        }
        void display_name()
        {
            cout<<"The Student Name is :"<<name<<endl;
        }
};
class Details:public Student
{
    private:
        string tele_no;
    public:
        void set_tele(string t)
        {
            tele_no=t;
        }
        void display_tele()
        {
            cout<<"The Telephone Number of "<<name <<" is :"<<tele_no<<endl;
        }
};
class Stats:public Details
{
    private:
        int height;
    public:
        void set_height(int h)
        {
            height=h;
        }
        void display_height()
        {
            cout<<"The Height of "<< name <<" is :"<<height<<endl;
        }
        void display_details()
        {
            display_name();
            display_tele();
            display_height();
        }
};
int main()
{
    Stats s1;
    string person_name,tele_no;
    int hg;
    cout<<"Enter the Name: ";
    cin>>person_name;
    cout<<"Enter the No. : ";
    cin>>tele_no;
    cout<<"Enter height  : ";
    cin>>hg;
    s1.set_name(person_name);
    s1.set_tele(tele_no);
    s1.set_height(hg);
    s1.display_details();
    return 0;
}
