#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter the Age:"<<endl;
    cin>>age;
    cout<<"Your age is:"<<age<<endl;
    if(age>17){

        if(age==18){
            cout<<"Try next year!!!"<<endl;
        }
        else{
            cout<<"You are adult"<<endl;
        }
    }
    if(50<age){
        cout<<"You can too Adult"<<endl;
    }
    else{
        cout<<"Sorry Kid!!! not for you!!!"<<endl;
    }
}
