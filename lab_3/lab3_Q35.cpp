#include<iostream>

using namespace std;

int main()
{
 int n, dig, sum=0;

 cout<<"\nProgram to calculate sum of digits of any number.";
 cout<<"\nEnter the number (should NOT have more than 9 digits) :";
 cin>>n;
 
 while(n)
 {
  dig=n%10;
  sum+=dig;
  n/=10;
 }
 
 cout<<"\nThe sum of the digits of the number is :"<<sum<<endl;
 return 0;

}
