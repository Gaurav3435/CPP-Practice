#include<iostream>
using namespace std;

int main()
{
    float a=10.10;
    int b=10;
    cout<<"The Value of int a is: "<<(int)a<<"  Size is: "<<sizeof((int)a)<< endl;
    cout<<"The Value of long int a is:"<<(long int)a<<"  Size is: "<<sizeof((long int)a)<<endl;
    cout<<"The Value of long long int a is:"<<(long long int)a<<"  Size is: "<<sizeof((long long int)a)<<endl;
    cout<<"The Value of float a is:"<<(float)a<<"  Size is: "<<sizeof((float)a)<<endl;
    cout<<"The Value of double a is:"<<(double)a<<"  Size is: "<<sizeof((double)a)<<endl;


    cout<<"The addition of a and b is:"<<a+b<<endl;
    cout<<"The addition of (int)a and b is:"<<(int)a+b<<endl;
    cout<<"The addition of int(a) and b is:"<<int(a)+b<<endl;
    return 0;
}
