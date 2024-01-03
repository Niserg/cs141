#include<iostream>

using namespace std;

int main()
{
 int yr;

 cout << "\nProgram to check whether a year is leap year or not.";
 cout << "\nEnter a year :";
 cin >> yr;
 
 if(yr%4!=0)
 cout<<"\nIt is an ORDINARY year.";

 else if((yr%100==0)&&(yr%400!=0))
 cout<<"\nIt is an ORDINARY year.";
 else 
 cout<<"\nIt is a LEAP year.";

 return 0;

}
 
