#include<iostream>
 
using namespace std;

float fact(int nm)
{
 float factorial=1;
  for(int i=1; i<=nm; ++i)
    {
      factorial*=i;
    }
 return factorial;
}


void strongnumber(int ll, int ul)
{
 int i, n1, dig;
 float sum_fact;

 for(i=ll; i<=ul; ++i)
  {
     sum_fact=0;
     n1=i;

     while(n1)
      {
        dig=n1%10;

        sum_fact+=fact(dig);
        n1/=10;
      }
   if(sum_fact==i) cout<<"\n"<<i<<" is Strong number.\n";
 }
}



int main()
{
 int ll, ul;
 cout<<"\nProgram to print all strong numbers between given interval using functions.";

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
 strongnumber(ll,ul);

 return 0;
}
 

 
