
#include<iostream>

using namespace std;

int main()
{
 int mn; 
  
 cout<<"\nProgram to input month number and print number of days in that month.\n";
 cout<<"\nEnter a month number( that is for example 3 for March, 7 for July etc.) :";
 cin>>mn;
 
 switch(mn)
 { 
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12: cout<<"\nThe month has 31 days.";
           break;
  case 4:
  case 6:
  
  case 11:
  case 9: cout<<"\nThe month has 30 days.";
          break;
  case 2: cout<<"The month has 28 days in ordinary years and 29 in leap years.";
          break;
  default:cout<<"\nEnter a valid number (ie. between 1 and 12).";
 }
 
 return 0;
} 
