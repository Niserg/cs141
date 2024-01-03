#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float n;
    float x, y;

    cout<<"\Program to check whether a number is divisible by 5 and 11 or not.";
    cout<<"\nEnter any number to check the devisibility.";
    cin>>n;

    x=fmod(n,5);                                 // fmod(a,b) takes two arguements a and b and returns the remainder of devision of
                                                 // a by b.
    y=fmod(n,11);

    if((x==0)&&(y==0))
    cout<<"\nYes, the number is devisible by 5 and 11.";
    else cout<<"\nNO the number is not devisible by 5 and 11.";

    return 0;
}
