#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<endl;

    cout<<"Enter four element in array:"<<endl;
    for(int i=0;i<4;i++){
        cout<<"THe "<<i <<" element:";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<"THe "<<i <<" element is:"<<arr[i]<<endl;
    }
    return 0;
}
