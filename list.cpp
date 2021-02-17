#include<iostream>
#include<list>
using namespace std;

void display(list<int> l)
{
    list<int> ::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<*itr<<endl;
    }

}
int main()
{
    list<int> lst1;
    lst1.push_back(2);
    lst1.push_back(3);
    lst1.push_back(5);
    lst1.push_back(3);
    lst1.push_back(9);
    lst1.push_front(1);
    cout<<"Check the enter element in list: "<<endl;
    display(lst1);
    lst1.sort();
    cout<<"Check the sorted element in list: "<<endl;
    display(lst1);
    lst1.reverse();
    cout<<"Check the reverse sorted element in list:"<<endl;
    display(lst1);
    cout<<"pop the front element: "<<endl;
    lst1.pop_front();
    display(lst1);
    cout<<"Pop the end element : "<<endl;
    lst1.pop_back();
    display(lst1);
    cout<<"remove the specific element: "<<endl;
    lst1.remove(3);
    display(lst1);


    list<int> lst2;
    lst2.push_back(10);
    lst2.push_back(11);
    lst2.push_back(12);
    lst2.push_back(13);
    lst2.push_back(14);
    cout<<"The second list is: "<<endl;
    display(lst2);

    cout<<"After merging two list: "<<endl;
    lst1.merge(lst2);
    display(lst1);

    return 0;
}
