
#include<iostream>
using namespace std;
float perimeter(float);
int perimeter(int,int);
float perimeter(float,float,float);
float perimeter(float,float,float);
int main()
{
        int s,l,b;
        float r,x,y,z;
        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height and third side of triangle:";
        cin>>x>>y>>z;
        cout<<"Perimeter of square is"<<perimeter(4*s);
        cout<<"\nPerimeter of rectangle is "<<perimeter(2*(l+b));
        cout<<"\nPerimeter of circle is "<<perimeter(2*3.14*r);
        cout<<"\nPerimeter of triangle is "<<perimeter(x+y+z);
}
int perimeter(int s)
{
    return(4*s);
}
int perimeter(int l,int b)
{
    return(2*(l+b));
}
float perimeter(float r)
{
    return(2*3.14*r);
}
float perimeter(float x,float y,float z)
{
   return(x+y+z);
}
