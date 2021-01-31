#include<iostream>
using namespace std;

int sum_of_int(int a,int b){
    int s;
    s=a+b;
    return s;
}
float sum_of_float(int a,int b){
    float s;
    s=a+b;
    return s;
}
int main(){
    int a=10,b=20,m;
    float c=12.5,d=12.5,n;
    char e='a';
    cout<<"The value of character e is:"<<e;
    cout<<"\nThe Value of a is:"<<a<<"\nThe value of b is:"<<b;
    m=sum_of_int(a,b);
    cout<<"\nThe sum of numbers is:"<<m;
    cout<<"\nThe Value of c is:"<<c<<"\nThe value of d is:"<<d;
    n=sum_of_float(c,d);
    cout<<"\nThe sum of numbers is:"<<n;
    return 0;
}
