#include<iostream>

using namespace std;

int main()
{
 int n, i=0;
 float sum=0;

 cout<<"\nProgram to find sum of all natural numbers between 1 to n.";
 cout<<"\nEnter a value for n :";
 cin>>n;
 
 while(i<=n)
 { 
  sum+=i;
  ++i;
 }
 cout<<"\nThe sum of al natural numbers upto "<<n<<" is :"<<sum;
 
 return 0;
}
  
 

