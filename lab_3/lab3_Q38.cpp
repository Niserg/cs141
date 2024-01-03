#include<iostream>

using namespace std;

int main()
{
 unsigned int n, n1, rev=0;
 
 cout<<"\nProgram to enter any number and check whether the number is palindrome or not.";
 cout<<"\nEnter the number to be checked :";
 cin>>n;
 n1=n;

 while(n)  
 {
  rev=rev*10 + (n%10);
  n=n/10;
 }
 
 if(rev==n1)
 cout<<"\nThe number is a palindrome."<<endl;
 else 
 cout<<"\nThe number is not a palindrome."<<endl;

 return 0;
}
