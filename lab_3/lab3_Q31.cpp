#include<iostream>

using namespace std;

int main()
{
 int n, count=0;

 cout<<"\nProgram to count number of digits in any number.";
 cout<<"\nEnter any number :";
 cin>>n;
 
 while(n>0)
 {
  n/=10;                              
  count++;                    
 }

 cout<<"\nThe number of digits in your number is/are :"<<count<<endl;
 
 return 0;
}

