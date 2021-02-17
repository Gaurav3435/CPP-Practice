#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1;
    int ele;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the element: ";
        cin>>ele;
        vec1.push_back(ele);
    }
    cout<<"THe element are: "<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }
    cout<<" 2 element are removed: "<<endl;
    for(int i=0;i<2;i++)
    {
        vec1.pop_back();
    }
    cout<<"Now ,THe element are: "<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }

    return 0;
}
