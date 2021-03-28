#include<iostream>
#include<string.h>
using namespace std;

class Bank
{

    protected:
        static int objectCount;
        int acc_no,balance=500;
        string name;
    public:
        void OpenAccount(string n)
        {
            acc_no=objectCount;
            objectCount++;
            name=n;
        }
        void ShowAccount(void)
        {
            cout<<"The Account Number is    : "<<acc_no<<endl;
            cout<<"The Account Name is      : "<<name<<endl;
            cout<<"THe balance in Account is: "<<balance<<endl;
        }
        void deposit(int d)
        {
            balance=balance+d;
            cout<<"Your current balance of account name "<< name<< " is "<<balance<<endl;
        }
        void Withdrawal(int w)
        {


            if(balance>w)
            {
                balance=balance-w;
            }
            else
            {
                cout<<"Cannot Withdraw , not sufficient money in the account!!!"<<endl;
            }
            cout<<"Your current balance of account name "<<name<<" is "<<balance<<endl;
        }
        int Search(Bank *b,string a_n)
        {
            for(int i=0;i<5;i++)
            {
                if(b[i].name==a_n)
                {
                    b[i].ShowAccount();
                    return (b[i].acc_no-1);
                    break;
                }
                if(i==4)
                {
                    cout<<"Account Not Found!!!"<<endl;
                }
            }


        }
};

int Bank::objectCount = 1;
int main()
{
    int choice,acc_count=0,value=0;
    string acc_name,person_name;
    Bank b[5];
    b[acc_count].OpenAccount("Gaurav Patil");
    //b[0].Search(b,"Gaurav Patil");

    while(choice!=6)
    {
        cout<<"\nSelect the Operation:"<<endl;
        cout<<"1. Open Account \n2. Deposit Money \n3. WithDraw Money \n4. Search Acount \n5. Display Account Information \n6. Exit"<<endl;
        cout<<"Enter the Choice Number:\t";
        cin>>choice;

        int *count_no=&acc_count;
        switch(choice)
        {

            case 1:(*count_no)++;
                    acc_count=*count_no;
                    cout<<"Enter the Name :\t";
                    cin.ignore();
                    getline(cin,acc_name);
                    //cin>>acc_name;
                    b[acc_count].OpenAccount(acc_name);
                    b[acc_count].ShowAccount();
                    break;
            case 2:cout<<"Enter the Value you want to add :\t";
                    cin>>value;
                    b[acc_count].deposit(value);
                    break;
            case 3:cout<<"Enter the amount you want to withdraw :";
                    cin>>value;
                    b[acc_count].Withdrawal(value);
                    break;
            case 4:cout<<"Enter Name of Person to search :\t";
                    cin.ignore() ;
                    getline(cin,person_name);
                    //cin>>person_name;
                    cout<<"The Detail of the Account is as follows:"<<endl;
                    acc_count=b[acc_count].Search(b,person_name);
                    break;
            case 5: b[acc_count].ShowAccount();
                    break;
            case 6:break;
        }
    }

    return 0;
}
