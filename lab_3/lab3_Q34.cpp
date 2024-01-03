#include<iostream>
#include<math.h>

using namespace std;

int main()
{ 
 int fs, ls, n, n1, order_of_mag,  count=0;

 cout<<"\nProgram to swap first and last digits of any number.";
 cout<<"\nEnter a number (should NOT have more than 9 digits) :";
 cin>>n;
 n1=n;

 ls=n%10;                                    // last digit is ls
 
 do
 {                                           // to get the first digit fs
  n/=10;
  count++;                                   // count : counts one less than the number of digits in n 
 }while((n/10)>=1);

 fs=n;                                       // first digit is fs
 order_of_mag=pow(10,count);

 n=n1%order_of_mag;                         /* changing the use of variable n.   Now used to store number :  *****ls 
                                                 if the initial number was : fs*****ls                                */
 n=n-ls+fs;
 n= n + ls*(pow(10,count));
 cout<<"\nThe number given by you was :"<<n1;
 cout<<"\nIt, after swapping the first and last digits is :"<<n;

 return 0;
}


