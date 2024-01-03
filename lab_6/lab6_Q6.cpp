#include<iostream>

using namespace std;

int main()
{
 char sttr[30];
 char *ptr;
 int i, n;
 cout <<"\nProgram to show string repeatedly by shifting top character of string from right to left.";
 cout << "\nEnter the characters of the string ( without spaces):";
 cin >> sttr;
 for( i=0; sttr[i]!='\0'; ++i);
 n = i;
 --n;
 for( i=n; i>=0; --i)
 {
  cout << endl;
  for( ptr=&sttr[i]; *ptr!='\0'; ++ptr)
      cout<<" "<<*ptr ;
  cout << endl;
 }

 return 0;
}

