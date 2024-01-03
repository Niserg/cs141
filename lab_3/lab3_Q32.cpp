#include<iostream>

using namespace std;

int main()
{
 
 int fs, ls, n; 

 cout<<"\nProgram to find first and last digit of any number.";
 cout<<"\nEnter the number (should have NOT more than 9 digits) :";
 cin>>n;
 
 ls=n%10;                                    // last digit is ls
 
 do
 {                                           // to get the first digit fs
  n/=10;
 }while((n/10)>=1);

 fs=n;

 cout<<"\nThe first digit of the number is :"<<fs<<" and last digit is :"<<ls<<endl;

 return 0;
}
 
