#include <iostream>

using namespace std;

int main()
{
    float n;

    cout<<"\nProgram to check whether a number is negative, positive or zero.";
    cout<<"\nEnter any number:";
    cin>>n;
    if(n>0) cout<<"\nThe number is positive.";
    else if(n<0) cout<<"\nThe number is negative.";
    else cout<<"\nThe number is zero.";

    return 0;

}
