#include<iostream>
using namespace std;

int main()
{

    int t,xa,xb,XA,XB,result;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>xa>>xb>>XA>>XB;
        result=(XA/xa)+(XB/xb);
        cout<<result<<endl;
    }
    return 0;
}
