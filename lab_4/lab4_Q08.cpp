#include<iostream>
#include<math.h>

using namespace std;

void Armstrong_print(int ll, int ul)
{
 int j, n1, count, dig;
 float sum_of_powers;
 
 for(j=ll; j<=ul; ++j)
  {
      count=0;
      sum_of_powers=0;
      n1=j;
         while(n1)                        // counting the number of digits
         {
          count++;
          n1/=10;
         }
      n1=j;

      while(n1)
        {
           dig=n1%10;
           sum_of_powers+=pow(dig,count);
           n1/=10;
        }
       if(sum_of_powers==j) cout<<"\n"<<j<<" is an Armstrong number.\n";
  }

}


int main()
{
 int ll, ul;
 
 cout<<"\nProgram to print all Armstrong numbers between given interval using functions.";
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

 Armstrong_print(ll,ul);
 
 return 0;
}
 

