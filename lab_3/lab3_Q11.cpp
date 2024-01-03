

#include<iostream>

using namespace std;

int main()
{
 int day;
 
 cout<<"\nProgram to input week day number and print week day.";
 cout<<"\nEnter a week day (from 1 to 7) :";
 cin>>day;
 
 switch(day)
 {
  case 1 : cout<<"\nIt is Monday.";
           break;
  case 2 : cout<<"\nIt is Tuesday.";
           break;
  case 3 : cout<<"\nIt is Wednesday.";
           break;
  case 4 : cout<<"\nIt is Thursday.";
           break;
  case 5 : cout<<"\nIt is Friday.";
           break;
  case 6 : cout<<"\nIt is Saturday.";
           break;
  case 7 : cout<<"\nIt is Sunday.";
           break;
  default: cerr<<"\nWrong entry.";
           break;
 }
 
 return 0;
}


