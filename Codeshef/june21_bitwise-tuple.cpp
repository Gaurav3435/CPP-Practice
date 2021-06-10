#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    int n,m;
    long long int h;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        h=pow(pow(2,n)-1,m);
        cout<<h<<endl;

    }
    return 0;
}


