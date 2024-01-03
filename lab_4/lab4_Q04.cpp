#include<iostream>

using namespace std;

void even_odd(int n)
{
 if(n%2==0) cout<<"\nThe number is even.\n";
 else cout<<"\nThe number is odd.\n";
}


int main()
{
 int n;

 cout<<"\nProgram to check whether a number is even or odd using function.";
 cout<<"\nEnter a number :";
 cin>>n;
 even_odd(n);
 return 0;
}
 
