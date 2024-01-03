#include<iostream>

using namespace std;


void max_min(int n1, int n2)
{
 if(n2<n1) {cout<<"\nthe minimum between the two is :"<<n2;
            cout<<"\nthe maximum between the two is :"<<n1;}
 else if(n2>n1)
      {
       cout<<"\nthe minimum between the two is :"<<n1;
       cout<<"\nthe maximum between the two is :"<<n2;
      }
 else cout<<"\nThey are equal.";
 
}


int main()
{
 int n1, n2;
 
 cout<<"\nProgram to find maximum and minimum between two numbers using functions.";
 cout<<"\nEnter the numbers :\n";
 cout<<"\nFirst :";
 cin>>n1;
 cout<<"\nSecond :";
 cin>>n2;
 max_min(n1,n2);
 cout<<endl;
 return 0;
}

