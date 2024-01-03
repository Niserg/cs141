#include<iostream>
#include<math.h>

using namespace std;

int main()
{ 
 int n, n1, j, count, dig, sum_of_powers;

 cout<<"\nProgram to print all Armstrong numbers between 1 to n.";
 cout<<"\nEnter a number :";
 cin>>n;
 if(n<0) n*=-1;
 
 for(j=1; j<=n; ++j)
  {   
      count=0;
      sum_of_powers=0;
      n1=j;
         while(n1)
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

 return 0;
}






 
 
 
