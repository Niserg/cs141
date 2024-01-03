#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 int n, n1, dig, sum_of_powers=0, count=0;

 cout<<"\nProgram to check whether a number is Armstrong number or not.";
 cout<<"\nEnter a number :";
 cin>>n;
 if(n<0) n*=-1;
 n1=n;
 
 while(n)                             // to count number of digits
 {
  count++;
  n/=10;
 }
 n=n1;                               // again assigning n its original value 

 for(int i=1; i<=count; ++i)
 {  
  dig=n%10;
  n/=10;
  sum_of_powers+=pow(dig,count);
 }
  
 if(sum_of_powers==n1) cout<<"\nIt is an Armstrong number.\n";
 else cout<<"\nIt is not an Armstrong number.\n";

 return 0;
}
  
 
