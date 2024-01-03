#include<iostream>
#include<math.h>

using namespace std;

void Armstrong_check(int a)
{
 int n1, dig, count=0, sum_of_powers=0;
 
 n1=a;
 while(a)                            // to count number of digits in the number
 {
  count++;
  a/=10;
 }
 a=n1;                               // again assigning n its original value 

 for(int i=1; i<=count; ++i)
 {
  dig=a%10;
  a/=10;
  sum_of_powers+=pow(dig,count);
 }

 if(sum_of_powers==n1) cout<<"\nIt is an Armstrong number.\n";
 else cout<<"\nIt is not an Armstrong number.\n";

}


void perfect_check(int P)
{
 int i, sum_devisors=0;

 for(i=1; i<P; ++i)
 {
  if(P%i==0) sum_devisors+=i;
 }

 if(sum_devisors==P) cout<<"\nIt is a perfect number!!\n";
 else cout<<"\nIt is not a perfect number.\n";

}


void prime_check(int p)
{
 int flag=0;

 for(int i=2; i<=p/2; ++i)
  { 
   if(p%i==0) { flag=1; break;}
  }
  if(flag) cout<<"\nIt is not a prime.\n";
  else cout<<"\nIt is a prime.\n";
  
}

int main()
{
 int n;
 cout<<"\nProgram to check whether a number is prime, Armstrong or perfect number using functions.";
 cout<<"\nEnter a number :";
 cin>>n;
 if(n<0) n*=-1;

 prime_check(n);
 Armstrong_check(n);
 perfect_check(n);

 return 0;
}

