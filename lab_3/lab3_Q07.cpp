

#include<iostream>

using namespace std;

int main()
{
 char ch;
 int n;
 
 cout<<"\nProgram to check whether a character is alphabet or not.";
 cout<<"\nEnter the character :";
 cin>>ch;
 n=ch;

 if((n>=65&&n<=90)||(n>=97&&n<=122))                           /*The ASCII code of alphabets from 'a' to 'z' is from 97 to 122
                                                                 The ASCII code of alphabets from 'A' to 'Z' is from 65 to 90 */
  cout<<"\nIt is an alphabet.\n"; 
 else cout<<"\nIt is a character other than alphabet.\n";
 
 return 0;
}


  
