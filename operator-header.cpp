#include<iostream>   //this is to add the in build header file
// #include 'file.h'    this is to add user define header files
using namespace std;

int main(){

    //assign operator
    int a=10,b=2;

    //Arithematic operator
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"a+b:"<<a+b<<endl;
    cout<<"a-b:"<<a-b<<endl;
    cout<<"a*b:"<<a*b<<endl;
    cout<<"a%b:"<<a%b<<endl;
    cout<<"a++:"<<a++<<endl;
    cout<<"a--:"<<a--<<endl;
    cout<<"++a:"<<++a<<endl;
    cout<<"--a:"<<--a<<endl;

    //relational operator
    cout<<"a==b:"<<(a==b)<<endl;
    cout<<"a!=b:"<<(a!=b)<<endl;
    cout<<"a>b:"<<(a>b)<<endl;
    cout<<"a<b:"<<(a<b)<<endl;
    cout<<"a<=b:"<<(a<=b)<<endl;
    cout<<"a>=b:"<<(a>=b)<<endl;

    //logical operator
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;
}

