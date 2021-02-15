#include<iostream>
using namespace std;
class Class{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    Class a;
    a.setData(4);
    a.getData();
    return 0;
}
