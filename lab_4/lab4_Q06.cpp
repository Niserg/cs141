#include<iostream>

using namespace std;

void primefinder(int L, int U)
{
 int i, j, flag;
 
 for(i=L; i<=U; ++i)
 {
  flag=1;
  if(i==0) continue;
  for(j=2; j<=i/2; ++j)
  if(i%j==0) {flag=0; break;}
  
  if(flag) cout<<"\n"<<i<<" is a prime.";
  
 }
}
 

int main()
{
 int ll, ul;

 cout<<"\nProgram to find all prime numbers between given interval using functions.";
 do{
    cout<<"\nEnter the lower limit :";
    cin>>ll;
    if(ll<0) cout<<"\nShould be non negative.\n";
   }while(ll<0);

 do{
    cout<<"\nEnter the upper limit :";
    cin>>ul;
    if(ll<0) cout<<"\nShould be positive.\n";
   }while(ul<1);
 cout<<"\nBetween "<<ll<<" and "<<ul;
 primefinder(ll,ul);
 cout<<"\n";

 return 0;
}
