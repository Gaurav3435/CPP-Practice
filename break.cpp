#include<iostream>
using namespace std;

int main()
{
    for(int i=10;i>0;i--){
        if(i==5){
            cout<<"Hey!! i am too lazy to print till 0!!!"<<endl;
            break;
        }
        cout<<"THe value of i is:"<<i<<endl;
    }
    return 0;
}
