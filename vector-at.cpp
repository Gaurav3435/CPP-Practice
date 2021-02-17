#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1(4,2);

    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }
    return 0;
}
