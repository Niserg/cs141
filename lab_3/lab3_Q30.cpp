#include<iostream>

using namespace std;

int main()
{
 int n;
 
 cout<<"\nProgram to print multiplication table of any number.";
 cout<<"\nEnter a number whose multiplication table you want :";
 cin>>n;
 cout<<"\nPrinting its table upto 10 :\n";

 for(int i=1; i<11; ++i)
 { 
  cout<<n*i<<endl;
 }
 
 return 0;
}
