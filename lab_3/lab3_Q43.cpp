#include<iostream>

using namespace std;

int main()
{
 int i, n;
 
 cout<<"\nProgram to enter any number and print all factors of the number.";
 cout<<"\nEnter the number :";
 cin>>n;
 if(n<0) n*=-1;
 
 for(i=2; i<=n/2; ++i)
 {
  if(n%i==0) cout<<'\n'<<i<<" is a factor of "<<n;
 }
 cout<<endl;
 return 0;
}
