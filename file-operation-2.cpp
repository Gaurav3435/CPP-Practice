#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;
class inventory
{
    char name[10];
    int code;
    int cost;

public:
    void readdata(void);
    void writedata(void);
};

void inventory::readdata()
{
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter code :";
    cin >> code;
    cout << "Enter cost :";
    cin >> cost;
}

void inventory::writedata()
{
    cout << setiosflags(ios::left)
         << setw(10) << name << setiosflags(ios::right)
         << code << setw(10) << cost << endl;
}

int main()
{
    inventory item[3];
    ofstream file;
    file.open("input", ios::app);
    cout << "Enter details for three items \n";
    for (int i = 0; i < 3; i++)
    {
        item[i].readdata();
        file.write((char*)&item[i], sizeof(item[i]));
        file.close();
        ifstream f;
        f.open("input", ios::app);
        inventory elt[6];
        f.seekg(0);
        for (i = 0; i < 6; i++)
        {
            f.read((char *)&elt[i], sizeof(elt[i]));
        }
        for (i = 0; i < 6; i++)
        {
            elt[i].writedata();
        }
    }
}
