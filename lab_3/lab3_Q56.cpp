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

 
int main()
{
 int i, n, n1, dig;
 float sum_fact;
 
 cout<<"\nProgram to print all Strong numbers between 1 to n.";
 cout<<"\nEnter some value for n :";
 cin>>n;
 
 for(i=1; i<=n; ++i)
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
 
 return 0;

}
