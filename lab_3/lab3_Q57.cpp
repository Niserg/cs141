#include<iostream>

using namespace std;

int main()
{
 int n1, n2, n, i, m;
 
 cout<<"\nProgram to print Fibonacci series up to n terms.";
 cout<<"\nEnter a value for n :"; 
 cin>>m;
 n1=0;
 n2=1;
 
 cout<<"\nFibonacci series :\n\t"<<n1<<"\n\t"<<n2<<endl;

 for(i=2; i<m; ++i)
 {
  n=n1+n2;
    
  cout<<'\t'<<n<<endl;

  n1=n2;
  n2=n;
}
 return 0;
}
