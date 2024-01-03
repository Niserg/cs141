#include<iostream>

using namespace std;

void cube(int c)
{ 
 int cube=c*c*c;
 cout<<"\nCube of the number is :"<<cube<<endl;
}


int main()
{
 int n;
 cout<<"\nProgram to find cube of any number using function.";
 cout<<"\nEnter a number :"; 
 cin>>n;
 cube(n);
 return 0;
}
