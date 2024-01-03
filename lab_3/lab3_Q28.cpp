#include<iostream>
 
using namespace std;

int main()
{
 int n, i=1; 
 float sum=0;
 
 cout<< "\nProgram to find sum of all even numbers between 1 to n.";
 cout<< "\nEnter a value of n :";
 cin>> n;

 while(i<=n)
 {
  if(i%2==0) sum+=i;
  i++;
 }
 cout<<"\nThe sum of all even integers from 1 to n is :"<<sum<<endl;

 return 0;

}

