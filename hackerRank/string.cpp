#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;

    char a_ = b[0];
    char b_ = a[0];
    a[0] = a_;
    b[0] = b_;
    cout<<a;
    cout<<" "<<b;
    return 0;
}
