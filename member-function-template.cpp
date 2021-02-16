#include<iostream>
using namespace std;

template <class T>
class get_display
{
    private:
        T value;
    public:
        void get(T v)
        {
            value=v;
        }
        void display();
};

template <class T>
void get_display<T>::display()
{
    cout<<"THe value is :"<<value<<endl;
}
int main()
{
    get_display<float> gd;
    gd.get(12.12);
    gd.display();
    return 0;
}
