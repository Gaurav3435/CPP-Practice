#include<iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<"The value of a is:"<<a<<endl;
    a=12;
    cout<<"The value of a is changed as:"<<a<<endl;

    const int b=15;
    cout<<"The value of b is:"<<b<<endl;
    //b=12; //The value of b now cannot be changes , if uncomment the code then it will throw an error on running
    cout<<"The value of b is cannot be changed ,it is:"<<b<<endl;
    return 0;
}
