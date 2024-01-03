#include <iostream>

using namespace std;

int main()
{
    float r, d, c, ar;
    cout << "Hello!!" << endl;
    cout<<"\nThis is a program to calculate diameter, circumference and area of a circle.";
    cout<<"\nEnter radius of the circle please.";
    cin>>r;
    d=2*r;
    c=2*3.14*r;
    ar=3.14*r*r;
    cout<<"\nThe diameter of the circle is :"<<d<<"\nThe circumference is :"<<c;
    cout<<"\nThe area is :"<<ar;
    return 0;
}
