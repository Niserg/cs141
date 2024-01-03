#include<iostream>

using namespace std;

void perfect_print(int,int);

int main()
{
 int ll, ul;

 cout<<"\nProgram to print all perfect numbers between given interval using functions.";
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

 perfect_print(ll,ul);

 return 0;
}



void perfect_print(int ll, int ul)
{
 int j, i, sum_divisors;
 
 for(j=ll; j<=ul; ++j)
  {
     sum_divisors=0;

     for(i=1; i<j; ++i)
      {
         if(j%i==0) sum_divisors+=i;
      }

     if(sum_divisors==j) cout<<"\n\t"<<j<<" is a perfect number!!\n";

  }

} 
