#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;

    cout<<"THe value of X:"<<x<<endl;
    cout<<"the value of y:"<<y<<endl;

    x++;
    cout<<"After Increment in X:"<<endl;
    cout<<"THe value of X:"<<x<<endl;
    cout<<"the value of y:"<<y<<endl;

    y--;
    cout<<"After decrement in Y:"<<endl;
    cout<<"THe value of X:"<<x<<endl;
    cout<<"the value of y:"<<y<<endl;

    return 0;
}
