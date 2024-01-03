#include<iostream>

using namespace std;

int main()
{
 int i, n1, n2, small, gcd=1;
 float lcm;

 cout<<"\nProgram to find LCM of two numbers.";
 cout<<"\nEnter the first number :";
 cin>>n1;
 cout<<"\nEnter the second number :";
 cin>>n2;

 if(n1<0) n1*=-1;
 if(n2<0) n2*=-1;
 
 if(n1<n2) small=n1;
 else small=n2;
 
 for(i=2; i<=small; ++i)
 {
  if((n1%i==0)&&(n2%i==0))
  gcd=i;
 }
 lcm=n1*n2/gcd;
 cout<<"\nThe LCM of the numbers is :"<<lcm<<endl;

 return 0;
}
