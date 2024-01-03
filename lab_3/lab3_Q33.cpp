#include<iostream>

using namespace std;

int main()
{
 int fs, ls, n, sum;

 cout<<"\nProgram to find sum of first and last digit of any number.";
 cout<<"\nEnter the number ( should NOT have more than 9 digits) :";
 cin>>n;
  
 ls=n%10;
 do
 {
  n=n/10;
 }while((n/10)>=1);
 
 fs=n; 
 sum = ls + fs;
 cout<<"\nThe sum of the first and the last digits is :"<<sum<<endl;

 return 0;
}

 
