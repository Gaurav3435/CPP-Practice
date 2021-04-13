
#include <iostream>
#include<fstream>
#include<iomanip>
# include<string.h>
using namespace std;

class inventory
{
    char name[10];
    char publisher[10];
    char title[10];
    int stock;
    int price;
    public:
        void getdata(void);
        void putdata(void);
        string return_book(){ return title;}
        string getname(){ return name;}
        string getpublisher( ){return publisher;}
        int getstock(){return stock;}
        int getprice(){return price;}
};

void inventory::getdata()
{
    cout<<"Enter Author Name :";
    cin>>name;
    cout<<"Enter Publisher Name :";
    cin>>publisher;
    cout<<"Enter title of book :";
    cin>>title;
    cout<<"Enter Stock of book :";
    cin>>stock;
    cout<<"Enter Price of book :";
    cin>>price;
}

void inventory::putdata()
{
    cout<<setw(10)<<name<<setw(10)<<publisher<<setw(10)
    <<title<<setw(10)<<stock<<setw(10)<<price<<endl;
}


int main()
{
   inventory item,itm,it[3];

    int choice=0;
    int location,last,n,object,required_count;
    string search;
    bool isFound;
    ifstream fin;
    while(choice!=5)
    {
        cout<<"1. Display the Content"<<endl<<"2. Add a Book "<<endl<<"3. Replace a Book detail"
        <<endl<<"4. Search a Book"<<endl<<"5. Exit "<<endl;
        cout<<"Enter the Choice: ";
        cin>>choice;
        fstream iofile;
        string temp;
        switch(choice)
        {
            case 1: iofile.open("stock",ios::in);
                   iofile.seekg(0);
                   cout<<"Current contents of Stock is: \n";

                    while(iofile.read((char *)& item,sizeof(item)))
                    {
                        item.putdata();

                    }
                    cout<<""<<endl;
                    iofile.close();
                    break;
            case 2: iofile.open("stock",ios::app);
                     cout<<"\nAdd book details below:\n";
                     item.getdata();
                    iofile.write((char *)& item, sizeof item);
                    iofile.close();
                    cout<<"Book Added in stock!!!"<<endl<<endl;
                    break;
            case 3: iofile.open("stock",ios::ate|ios::in|ios::out);
                    cout<<"Enter the object  number to be updated: \t";
                    cin>>object;
                    location=(object-1)*sizeof(item);
                    if(iofile.eof())
                        iofile.clear();
                    iofile.seekp(location);
                    cout<<"Enter new values of the book: \n";
                    item.getdata();
                    iofile.write((char *)& item,sizeof(item));
                    iofile.seekg(0);
                    iofile.close();
                    break;
            case 4: iofile.open("stock",ios::ate|ios::in|ios::out);
                    iofile.seekg(0);
                	cout << "Please enter a name of book: ";
                	cin  >> search;
                	while(iofile.read((char *)& item,sizeof(item)))
                    {
                        string a=item.return_book();
                        if(a==search)
                        {
                            cout<<"Book Found!!! The details are: \n"<<endl;
                            item.putdata();
                            cout<<"Enter the Amount of book required:";
                            cin>>required_count;
                            if(required_count<=item.getstock())
                            {
                                cout<<"The Price is :"<<required_count*item.getprice()<<endl;

                            }
                            else{
                                cout<<"Required Book not is Stock!!!"<<endl;
                            }
                            cout<<""<<endl;
                            iofile.close();
                            break;
                        }
                    }
                    cout<<"Search Completed!!!"<<endl;
                	iofile.clear();
                	iofile.close();
                	break;
            case 5:break;
        }
    }
    return 0;

}
