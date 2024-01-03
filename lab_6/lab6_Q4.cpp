#include<iostream>

using namespace std;

void normal_method(char ar[])
{
 cout << "\nUsing normal index method to print array.";
 for(int j=0; ar[j]!='\0'; ++j)
  cout <<"\nar[ "<<j<<" ] :"<<ar[j];
}

void pointer_method(char ar[])
{
 cout << "\nUsing pointer method to access array elements to print them.";
 char *ptr;
 for( ptr=ar; *ptr!='\0'; ++ptr)
  cout <<"\n"<<*ptr;
}

int main()
{
 char ar[20];
 cout << "\nProgram to create a string to store name.Then print string character by character using the normal index method and the pointer method.";
 cout <<"\nEnter your name :";
 cin.getline(ar,20);
 
 normal_method(ar);
 pointer_method(ar);

 return 0;
}

