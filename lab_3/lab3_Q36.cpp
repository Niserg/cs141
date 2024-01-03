#include<iostream>

using namespace std;

int main()
{
 int n, dig, prod=1;

 cout<<"\nProgram to calculate product of digits of any number..";
 cout<<"\nEnter the number (should NOT have more than 9 digits) :";
 cin>>n;

 while(n)
 {
  dig=n%10;
  prod*=dig;
  n/=10;
 }

 cout<<"\nThe products of the digits of the number is :"<<prod<<endl;
 return 0;
}
