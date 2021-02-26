//Gaurav Patil A-33
#include<iostream>
using namespace std;
class seconds;
class minute
{
    private:
        int min_;
        int _hr=0;
    friend int addition(minute ,seconds);
    public:
        void get_min(int m)
        {
            min_=m;
            if (min_>=60)
            {
                _hr=min_/60;
                min_=min_%60;
            }

        }
        void display_min()
        {
            cout<<"hour: "<<_hr;
            cout<<" minute: "<<min_<<endl;
        }
};
class seconds
{
    private:
        int sec_;
        int _min=0;
    friend int addition(minute ,seconds);
    public:
        void get_sec(int s)
        {
            sec_=s;
            if (sec_>=60)
            {
                _min=sec_/60;
                sec_=sec_%60;
            }
        }
        void display_sec()
        {
            cout<<"Minutes: "<<_min;
            cout<<" Seconds: "<<sec_<<endl;
        }
};

int addition(minute m1,seconds s1)
{
    minute m2;
    m2.get_min(s1._min);
    cout<<"\nThe Addition of time is : "<<endl;
    cout<<"hr: "<<m1._hr+m2._hr<<"\nmin: "<<m1.min_+m2.min_<<"\nsec: "<<s1.sec_<<endl;
    return 0;
}
int main()
{
    minute m1;
    seconds s1;
    int m,s;

    cout<<"Enter the number of minutes: ";
    cin>>m;
    m1.get_min(m);
    m1.display_min();

    cout<<"Enter the number of Seconds: ";
    cin>>s;
    s1.get_sec(s);
    s1.display_sec();

    addition(m1,s1);

    return 0;
}
