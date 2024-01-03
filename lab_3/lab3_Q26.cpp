#include<iostream>

using namespace std;
int main()
{
 int i=1;

 cout<<"\nProgram to print all odd number between 1 to 100.";

 while(i<100)
 {
  if(i%2==1) cout<<endl<<i;
  i++;
 }

 cout<<"\nJob Done.";
 return 0;
}

