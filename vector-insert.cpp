#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1(4,2);
    cout<<"The vector is: "<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }
    cout<<"inserted vector at end: "<<endl;
    vector<int> :: iterator  iter=vec1.end();
    vec1.insert(iter, 20);
    cout<<"inserted vector at begin: "<<endl;
    vector<int> :: iterator  iter2=vec1.begin();
    vec1.insert(iter2, 20);
    cout<<"After inserting vector is: "<<endl;
     for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1.at(i)<<endl;
    }

    return 0;
}
