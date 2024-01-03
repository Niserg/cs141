
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 int n2000, n500, n200, n100, n50, n20, n10, n5, n1;
 
 int t, amt;

 cout<<"\nProgram to count total number of notes in given amount.";
 cout<<"\nEnter the amount (in Rupees) you have :";
 cin>>amt;
 t=amt;
 
 n2000=amt/2000;
 amt=amt%2000;                  
 
 n500=amt/500;
 amt=amt%500;
 
 n200=amt/200;
 amt=amt%200;
  
 n100=amt/100;
 amt=amt%100;
 
 n50=amt/50;
 amt=amt%50;

 n20=amt/20;
 amt=amt%20;

 n10=amt/10;
 amt=amt%10;

 n5=amt/5;
 amt=amt%5;

 n1=amt;

 cout<<"\nYou have total amount of "<<t<<" rupees in following denominations :\n";
 cout<<n2000<<" notes of two thousand.\n";
 cout<<n500<<" notes of five hundred.\n"<<n200<<" notes of two hundred.\n";
 cout<<n100<<" notes of one hundred.\n"<<n50<<" notes of fifty.\n";
 cout<<n20<<" notes of twenty.\n"<<n10<<" notes of ten.\n";
 cout<<n5<<" notes of five.\n"<<n1<<" notes of one.\n";

 return 0;

}

 
