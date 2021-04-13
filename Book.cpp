#include <iostream>
#include<fstream>
#include<iomanip>
# include<string.h>


using namespace std;

class inventory
{
    char name[10];
    char author[10];
    int cost;
    int stock;
    public:
        void getdata(void);
        void putdata(void);

};

void inventory::getdata()
{
    cout<<"Enter Name of book :";
    cin>>name;
    cout<<"Enter author name of book :";
    cin>>author;
    cout<<"Enter cost :";
    cin>>cost;
    cout<<"Enter number of books:";
    cin>>stock;
}
void inventory::putdata()
{
    cout<<setw(10)<<name<<setw(10)<<author<<setw(10)<<cost<<setw(10)<<stock<<endl;

}



int main()
{
    inventory item,it[3];
    fstream iofile;
    int choice;

    while (choice!=4){
    cout<<"Choices are: \n1. Add three books\n2. Display Books\n3. Add new book\n";
    cout<<"Enter choice Number: ";
    cin>>choice;
    switch(choice){
        case 1: iofile.open("Stock",ios::out);
                cout<<"Enter details of a book: \n";
                it[i].getdata();
                iofile.write((char *)& it[i], sizeof(it[i]));
                iofile.close();
                break;

        case 2: iofile.open("Stock",ios::in);
                iofile.seekg(0);
                cout<<"Current contents of Stock \n";
                cout<<setw(10)<<"Name"<<setw(10)<<"Author"<<setw(10)<<"Cost"<<setw(10)<<"Quantity"<<endl;

                while(iofile.read((char *)& item,sizeof(item)))
                {
                    item.putdata();
                }
                iofile.close();
                break;

        case 3: ;

        case 4: ;
    }
    }
    return 0;

}
