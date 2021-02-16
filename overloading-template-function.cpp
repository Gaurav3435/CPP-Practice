#include<iostream>
using namespace std;

template <class T>
class get_display
{
    private:
        T value;
    public:
        void get(T);
        void display();
};
template <class T>
void get_display<T>::get(T v)
{
    value=v;
}

template <class T>
void get_display<T>::display()
{
    cout<<"THe value is :"<<value<<endl;
}

template <class t2>
t2 addition(t2 v,t2 v2)
{
    cout<<"This is t2 class"<<endl;
    return v+v2;
}

int addition(int v,int v2)//if commented this function ,the above function will run with t2 return data type
{
    cout<<"This is int class"<<endl;
    return v+v2;

}
int main()
{
    get_display<float> gd;
    gd.get(12.12);
    gd.display();

    cout<<"THe addition is: "<<addition(2,6)<<endl;
    return 0;
}

