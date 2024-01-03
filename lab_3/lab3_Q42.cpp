#include<iostream>

using namespace std;

int main()
{
 float n, res=1;
 int p;

 cout<<"\nProgram to find power of any number using for loop.";
 cout<<"\nEnter the number :";
 cin>>n;
 cout<<"\nEnter the power to which you want to evaluate (integer only) :";
 cin>>p;

 for(int i=1; i<=p; ++i)
 {
  res*=n;
 }
 cout<<"\nThe result of "<<n<<"^"<<p<<" is :"<<res<<endl;
 return 0;
}
 
