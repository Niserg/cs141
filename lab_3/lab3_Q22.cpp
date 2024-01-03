#include<iostream>

using namespace std;

int main()
{
 int n, i=1;

 cout<<"\nProgram to print all natural numbers from 1 to n. - using while loop.";
 cout<<"\nEnter a value of n :";
 cin>>n;
 if(n>999999) {cout<<"\nNot allowed! Choose a smaller value.";  return 0;}
  
 while(i!=n+1)
 {
  cout<<endl<<i;
  i++;
 }
 cout<<"\nJob dane!!";
 
 return 0;
}
