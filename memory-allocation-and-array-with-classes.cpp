#include<iostream>
using namespace std;

class shop
{
    private:
       int id[100],price[100],counter;
    public:
        void initalize(void);
        void setprice(void);
        void display(void);
};

void shop::initalize(void)
{
    counter=0;

}

void shop::setprice(void)
{
    cout<<"Enter the id: ";
    cin>>id[counter];
    cout<<"Enter the price: ";
    cin>>price[counter];
    counter=counter+1;

}
void shop::display(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The id "<<id[i]<<" has the price of "<<price[i]<<endl;
    }
}
int main()
{
    shop s1;
    s1.initalize();
    s1.setprice();
    s1.setprice();
    s1.setprice();
    s1.display();
    return 0;
}
