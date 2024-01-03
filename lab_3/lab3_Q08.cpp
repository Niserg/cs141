
#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
 char ch;
 
 cout<<"\nProgram to input any alphabet and check whether it is vowel or consonant.";
 cout<<"\nEnter any alphabet :";
 cin>>ch;
 if(isalpha(ch)!=0)
 {
  switch(ch)
  {
   case'a':
   case'A': 
   case'e':
   case'E':
   case'i':
   case'I':
   case'o':
   case'O':
   case'u':
   case'U': cout<<"\nIT IS A VOWEL.";
            break;
   default: cout<<"\nIT IS A CONSONANT.";
  }
 }
 else cout<<"\nYou have entered a character other than alphabet.";

 
return 0;
}


 

