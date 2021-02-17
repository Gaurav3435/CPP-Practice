#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> vec1;
    for(int i=0;i<4;i++)
    {
        vec1.push_back(2);
    }
    for(int i=0;i<4;i++)
    {
        cout<<vec1[i]<<endl;
    }
    return 0;
}
