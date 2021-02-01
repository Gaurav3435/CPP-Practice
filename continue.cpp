#include<iostream>
using namespace std;

int main()
{
    for(int i=10;i>0;i--){
        if(i==5){
            cout<<"Hey!! WE reached half to our goal!!!"<<endl;
            continue;
        }
        cout<<"THe value of i is:"<<i<<endl;
    }
    return 0;
}
