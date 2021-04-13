#include <iostream>
#include<fstream>
#include<iomanip>
# include<string.h>
using namespace std;

class Bank
{
    char name[10];
    int code;
    int cost;
    public:
        void getdata(void);
        void putdata(void);

};

void inventory::getdata()
{
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter code :";
    cin>>code;
    cout<<"Enter cost :";
    cin>>cost;
}
void inventory::putdata()
{
    cout<<setw(10)<<name<<setw(10)
    <<code<<setw(10)<<cost<<endl;

}



int main()
{
    inventory item,it[3];
    fstream iofile;
   iofile.open("stock",ios::out);
   //iofile.seekg(0,ios::beg);
    cout<<"Enter details for 3 items\n";

   for(int i=0;i<3;i++)
   {
       it[i].getdata();
       iofile.write((char *)& it[i], sizeof(it[i]));

   }
   iofile.close();
   iofile.open("stock",ios::in);
   iofile.seekg(0);
   cout<<"Current contents of Stock \n";

    while(iofile.read((char *)& item,sizeof(item)))
    {
        item.putdata();

    }
    iofile.close();
    iofile.open("stock",ios::app);
     cout<<"\nAdd one more item\n";
    item.getdata();
   // char ch;
   // cin.get(ch);
    iofile.write((char *)& item, sizeof item);
    iofile.close();

    iofile.open("stock",ios::ate|ios::in|ios::out);
    iofile.seekg(0);
    cout<<"Contents of appended file \n";
    while(iofile.read((char *)& item,sizeof(item)))
    {
        item.putdata();

    }
    //Find the number of objects in the file
    iofile.clear();
    int last=iofile.tellg();
    cout<<"\nlast : "<<last;
    int n=last/sizeof(item);

    cout<<"Number of objects ="<<n<<"\n";
    cout<<"Total bytes in the file ="<<last<<"\n";

    //Modify the details of an item

    cout<<"ENter the object  number to be updated \n";
    int object;
    cin>>object;

    //cin.get(ch);

    int location=(object-1)*sizeof(item);

    if(iofile.eof())
        iofile.clear();

    iofile.seekp(location);

    cout<<"Enter new values of the object \n";
    item.getdata();
    //cin.get(ch);

    iofile.write((char *)& item,sizeof(item));

    //Show updated file
     iofile.seekg(0);
    cout<<"Contents of updated file \n";
    while(iofile.read((char *)& item,sizeof(item)))
    {
        item.putdata();

    }
    iofile.close();

    return 0;

}
