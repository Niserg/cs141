
#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
 char ch;
  
 cout<<"\nProgram to input any character and check whether it is alphabet, digit or special character.";
 cout<<"\nEnter any character :";
 cin>>ch;

 if(isalpha(ch))
 cout<<"\nIt is an alphabet.";
 
 else if(isdigit(ch)) 
 cout<<"\nIt is a digit.";

 else cout<<"\nIt is a special character.";
 
 cout<<endl;
 return 0;
}
 
