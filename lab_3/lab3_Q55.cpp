#include<iostream>

using namespace std;

float fact(int nm)
{
 float factorial=1;
  for(int i=1; i<=nm; ++i)
    {  
      factorial*=i;
    }
 return factorial;
}

 
int main()
{
 int n, n1, dig, sum_fact;

 cout<<"\nProgram to check whether a number is Strong number or not.";
 cout<<"\nEnter a number :";
 cin>>n;
 n1=n;
 
 while(n) 
 {
  dig=n%10;
  sum_fact+=fact(dig);
  n/=10;
 }
 if(sum_fact==n1) cout<<"\nIt is s Strong number.\n";
 else cout<<"It is not a Strong number.\n";

 return 0;
}
 
