#include<iostream>

using namespace std;
 
int main()
{
 int n, i, sum_devisors=0; 
 cout<<"\nProgram to check whether a number is Perfect number or not.";
 cout<<"\nEnter a number :";
 cin>>n;
 if(n<0) n*=-1;
 
 for(i=1; i<n; ++i)
 {
  if(n%i==0) sum_devisors+=i;
 }
 
 if(sum_devisors==n) cout<<"\nIt is a perfect number!!\n";
 else cout<<"\nIt is not a perfect number.\n";

 return 0;
}
 
