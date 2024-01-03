#include<iostream>

using namespace std;

int main()
{
 int n, i;
 
 cout<<"\nProgram to print all natural numbers in reverse (from n to 1). - using while loop.";
 cout<<"\nEnter a value for n (must be integer) :";
 cin>>n;
 i=n; 
 
 while(i!=0)
 {
  cout<<endl<<i;
  --i;
 }

 cout<<"\nJOB DONE!!.";
 return 0;
}
