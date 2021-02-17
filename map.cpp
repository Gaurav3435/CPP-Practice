#include<iostream>
#include<string.h>
#include<map>
using namespace std;

void display(map<string, int> l)
{
    map<string ,int> ::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

}
int main()
{
    map<string,int> m1;
    cout<<"The Entered element are: "<<endl;
    m1["Gaurav"]=12;
    m1["GP"]=123;
    display(m1);
    cout<<"After entering the element: "<<endl;
    m1.insert({"Hello",2});
    m1.insert({"Hello2",2});
    m1.insert({"Hello3",2});
    display(m1);
    return 0;
}
