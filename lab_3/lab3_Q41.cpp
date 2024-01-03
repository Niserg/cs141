#include<iostream>
 
using namespace std;

int main()
{
 int i;
 char ch;

 cout<<"\nProgram to print all ASCII character with their values.";
 cout<<"\nThere are a total of 256 ASCII characters. We list them :";
 cout<<"\n\t\tCharacter\t\t\tASCII CODE";
 
 for(i=0;i<=256;++i)
 {
  ch=i;
  cout<<"\n\t\t"<<ch<<"\t\t\t"<<i;
 }
 return 0;
}
 
