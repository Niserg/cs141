#include<iostream>

using namespace std;

int main()
{
 int i=1;

 cout<<"\nProgram to print all even numbers between 1 to 100. - using while loop.";
 
 while(i<100)                        // i<100 and not i<=100 because "between" 1 and 100
 {
  if(i%2==0) cout<<endl<<i;
  i++;
 }
  
 cout<<"\nJob Done.";
 return 0;
}

