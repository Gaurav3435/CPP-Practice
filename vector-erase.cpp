#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1(4,2);
    cout<<"Before erase"<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }

    vec1.erase (vec1.begin()+1);

    cout<<"After erase at location 1 "<<endl;

    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }
    return 0;
}

