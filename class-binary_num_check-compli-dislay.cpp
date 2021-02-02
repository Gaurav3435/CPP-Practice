#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string a;
    public:
        void read_num(void);
        int check_binary(void);
        void ones_compliment(void);
        void display(void);
};

void binary::read_num(void)
{
    cout<<"Enter the binary number: ";
    cin>>a;
    cout<<"The length of string is: "<<a.length()<<endl;
}
void binary::display(void)
{
    cout<<"The String is: "<<a<<endl;
}

int binary::check_binary()
{
    for(int i=0;i<a.length();i++){
        if(a.at(i)!='1' && a.at(i)!='0'){
            cout<<"The number is not binary!!!"<<endl;
            return 0;
        }
    }
    cout<<"The number is binary!!!"<<endl;
    return 1;
}
void binary::ones_compliment()
{
    for(int i=0;i<a.length();i++){
        if(a.at(i)=='1'){
            a.at(i)='0';

        }
        else
        {
            a.at(i)='1';
        }
    }
    cout<<"After Complimenting...."<<endl;
}
int main()
{
    binary num;
    num.read_num();
    num.display();
    num.check_binary();
    num.ones_compliment();
    num.display();
    return 0;
}
