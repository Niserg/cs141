#include<iostream>

using namespace std;

int main()
{
 int n, i, flag=0;
 
 cout<<"\nProgram to check whether a number is Prime number or not.";
 cout<<"\nEnter the number to be checked :";
 cin>>n;
 
 for(i=2; i<=n/2; ++i)
 { 
  if(n%i==0) 
    {
      flag=1; break;
    }
 }
 if(flag) cout<<"\nIt is not a prime number.";
 else cout<<"\nIt is a prime number.";
 cout<<endl;

 return 0;
}
