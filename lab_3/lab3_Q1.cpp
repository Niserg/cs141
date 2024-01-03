#include <iostream>

using namespace std;

int main()
{
    float x, y;

    cout<<"\nProgram to find maximum between two numbers.";
    cout<<"\nEnter the first number:";
    cin>>x;
    cout<<"\nEnter the second number:";
    cin>>y;

    if(x>y)   cout<<"\nThe greater number is:"<<x;
    else if(y>x) cout<<"\nThe greater number is:"<<y;
    else cout<<"\nThe numbers are equal";

    return 0;
}
