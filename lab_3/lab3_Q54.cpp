#include<iostream>

using namespace std;

int main()
{
 int n, i, j, sum_divisors;

 cout<<"\nProgram to print all Perfect numbers between 1 to n.";
 cout<<"\nGive a value for n :";
 cin>>n;
 if(n<0) n*=-1;

 for(j=1; j<=n; ++j)
  {  
     sum_divisors=0;
     
     for(i=1; i<j; ++i)
      {
         if(j%i==0) sum_divisors+=i;
      }

     if(sum_divisors==j) cout<<"\n\t"<<j<<" is a perfect number!!\n";
     
  }

 return 0;

}
 
 
