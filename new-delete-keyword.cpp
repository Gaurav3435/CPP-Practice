#include<iostream>
using namespace std;

int main()
{
    int *ptr =new int(12);
    cout<<"The Value of ptr is: "<<*ptr<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"Before Deleting....."<<endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;
    cout<<"After Deleting....."<<endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}

