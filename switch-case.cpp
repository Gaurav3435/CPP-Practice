#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your Age:"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:cout<<"Try next year"<<endl;
        break;
        case 20:cout<<"Have you got you pancard done?"<<endl;
        break;
        default:
            cout<<"Not applicable to your age!!!"<<endl;
            break;
    }
    return 0;
}
