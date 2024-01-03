#include<iostream>

using namespace std;

int main()
{ 
 int dig, n, rev=0, count=0, pos;

 cout<<"\nProgram to enter any number and print it in words.";
 cout<<"\nEnter a number (less than 10 crore) :";
 cin>>n;
 
 while(n)
 {
  rev=rev*10 + (n%10);       // to get reverse of the number
  n=n/10;
  count++;                  // as well as to count number of digits
 }

 pos=count;
 
 for(int i=0; i<count; i++)
 {
   dig=rev%10;
   rev =rev/10;
   
  
   switch(dig)
   { case 1 : cout<<" One ";
              break;
     case 2 : cout<<" Two ";
              break;
     case 3 : cout<<" Three ";
              break;
     case 4 : cout<<" Four ";
              break;
     case 5 : cout<<" Five ";
              break;
     case 6 : cout<<" Six ";
              break;
     case 7 : cout<<" Seven ";
              break;
     case 8 : cout<<" Eight ";
              break;
     case 9 : cout<<" Nine ";
              break;
     case 0 : cout<<" Zero ";
              break;
   }
 
   
   switch(pos)
   { 
    case 9 : break;
    case 8 : cout<<" Crore ";
             break;
    case 7 : break;
    case 6 : cout<<" Lakh ";
             break;
    case 5 : break;
    case 4 : cout<<" Thousand ";
             break;
    case 3 : cout<<" Hundred ";
             break;
    case 2 : cout<<" Tens ";
             break;
    case 1 : break;
   }
  
   pos--;
  
 } 

cout<<endl;
return 0;
}
