#include<iostream>

using namespace std;

int main()
{
 int n, rev=0, count=0;

 cout<<"\nProgram to enter any number and print its reverse.";
 cout<<"\nEnter the number :";
 cin>>n;
 if(n<0) n=n*(-1);
  
 while(n)
 {
  rev=rev*10 + (n%10);
  n=n/10;
 }
 
 cout<<"\nReverse of the number is :"<<rev<<endl;
 return 0;
}
 
