#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int *p=arr;

    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i<<"th element in array: ";
        cin>>*(p+i);
    }
    for(int i=0;i<5;i++){
        cout<<"The "<<i<<"th element in array is: "<<arr[i]<<endl;
    }
    return 0;
}
