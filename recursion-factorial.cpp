#include<iostream>
using namespace std;

int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"THe Factorial is: "<<factorial(num)<<endl;
    return 0;
}
