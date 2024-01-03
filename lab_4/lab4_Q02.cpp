#include<iostream>

using namespace std;

void diameter(float r)
{
 float diameter=2*r;
 cout<<"\nThe diameter is :"<<diameter;
}

void circumference(float r)
{
 float circum=3.14159*2*r;
 cout<<"\nThe circumference is :"<<circum;
}

void area(float r)
{
 float area=3.14159*r*r;
 cout<<"\nThe area is :"<<area<<endl;
}

int main()
{
 float r;
 cout<<"\nProgram to find diameter, circumference and area of circle using functions.";
 cout<<"\nEnter the radius of circle :";
 cin>>r;

 diameter(r);
 circumference(r);
 area(r);
 
 return 0;
}
