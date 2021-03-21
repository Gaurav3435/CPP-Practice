#include<iostream>
#include<string.h>
using namespace std;

class book
{
    protected:
        string author,title,publisher;
        int stock_position,price;
    public:
        void set_data(string a,string t,int p,string pb,int sp)
        {
            author=a;
            title=t;
            price=p;
            publisher=pb;
            stock_position=sp;
        }
        void get_data()
        {
            cout<<endl<<"The Author is: "<<author<<endl;
            cout<<"The Title is: "<<title<<endl;
            cout<<"The Price is: "<<price<<endl;
            cout<<"The Publisher is: "<<publisher<<endl;
            cout<<"The Stock Position is: "<<stock_position<<endl;
        }
        string check_author()
        {
            return author;
        }
        string check_title()
        {
            return title;
        }
        int check_count()
        {
            return stock_position;
        }
        int check_price()
        {
            return price;
        }
};

class get_book: public book
{
    protected:
        int b_cnt;
    public:
        get_book(book* b_pointer,string auth,string title)
        {

            for(int i=0;i<3;i++)
            {
                if(b_pointer[i].check_author()==auth && b_pointer[i].check_title()==title )
                {
                    cout<<""<<endl;
                    b_pointer[i].get_data();
                    cout<<"\nEnter the Count of Book required: ";
                    cin>>b_cnt;
                    if(b_pointer[i].check_count()>=b_cnt)
                    {
                        cout<<b_cnt<<" Required copies available in stock !!!"<<endl;
                        cout<<"The price of "<<b_cnt<<" books is :"<<b_pointer[i].check_count()*b_pointer[i].check_price()<<endl;
                        break;
                    }
                    else
                    {
                        cout<<b_cnt<<" Required copies not in stock!!!"<<endl;
                        break;
                    }

                }
                if(i==3)
                {
                    cout<<"Book not found!!!"<<endl;
                }

            }

        }
};

int main()
{
    int choice;
    int book_stock=0;
    string author_name,title_name;
    book b[10];
    book* add_point=b;
    book * display_point=b;
    for(int j=0;j<3;j++)
    {
        b[j].set_data("a1","t1",10,"pb1",3);
        book_stock=book_stock+1;
    }

    cout<<"1. Display the Detail"<<endl<<"2. Add a Book "<<endl<<"3. Search a Book "<<endl<<"4. Exit "<<endl;
    cout<<"Enter the Choice: ";
    cin>>choice;

    string name,title,publiction;
    int prce=0,stck=0,i;
    while(choice!=4)
    {
        switch (choice){

        case 1: cout<<"Below is the " <<book_stock<<" books stored in code :"<<endl;
                for(i=0;i<book_stock;i++){
                    b[i].get_data();
                }
                break;

        case 2: cout<<endl<<"Name the Book you want to add: ";
                cin>>name;
                cout<<"Title the Book you want to add: ";
                cin>>title;
                cout<<"Price the Book you want to add: ";
                cin>>prce;
                cout<<"Publication the Book you want to add: ";
                cin>>publiction;
                cout<<"Stock of Book you want to add: ";
                cin>>stck;
                b[book_stock+1].set_data(name,title,prce,publiction,stck);
                book_stock=book_stock+1;
                break;

        case 3: cout<<"\nEnter the book author name: ";
                cin>>author_name;
                cout<<"Enter the book title name: ";
                cin>>title_name;
                get_book(b,author_name,title_name);
                break;

        case 4: choice=4;
                break;
        }

    }
    return 0;

}
