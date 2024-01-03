#include <iostream>

using namespace std;

int main()
{
    float x, y, z, mx;

    cout<<"\nProgram to find maximum between three numbers.";
    cout<<"\nEnter the first number:";
    cin>>x;
    cout<<"\nEnter the second number:";
    cin>>y;
    cout<<"\nEnter the third number:";
    cin>>z;

    mx=z;
    if(y>x)
    {
     if(y>mx) mx=y;
    }

    else if(x>y)
    {
     if(x>mx) mx=x;
    }

    cout<<"\nThe greatest number between the three is:" <<mx;

    return 0;
}
