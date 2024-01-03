
#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
 char ch;
  
 cout<<"\nProgram to check whether a character is uppercase or lowercase alphabet.";
 cout<<"\nEnter any alphabet :";
 cin>>ch;

 if(isupper(ch))
 cout<<"\nIt is an uppercase alphabet.";

 else if(islower(ch))
 cout<<"\nIt is a lowercase alphabet.";
 
 else cout<<"Not an alphabet.";

 cout<<endl;
 return 0;
}

