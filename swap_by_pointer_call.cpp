#include<iostream>
using namespace std;

void exchange(int *a,int * b)
{
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}
int main()
{
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    exchange(&a,&b);
    cout<<"Now the two number are: "<<endl<<a<<endl<<b;
    return 0;
}

