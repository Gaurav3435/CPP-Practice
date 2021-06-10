//Exceeded time limit

#include<iostream>
using namespace std;
int main(){
    int t,D,d,P,Q;

    cin>>t;

    int i=0;
    while(i!=t)
    {
        int result=0;
        cin>>D>>d>>P>>Q;
        for(int j=1;j<=D;j++)
        {
            if((j)%d==0)
            {
                result=result+P;
                P=P+Q;
            }
            else{
                result=result+P;
            }

        }
        i++;
        cout<<result<<endl;

    }
    return 0;
}

