#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,45,0,3,4,2,4,7,2,33,4,4};
    sort(arr,arr+14,greater<int>());
    for(int i=0;i<14;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
