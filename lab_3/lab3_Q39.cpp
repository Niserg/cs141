#include<iostream>

using namespace std;

int main()
{
 int n, dig, cn0, cn1, cn2, cn3, cn4, cn5, cn6, cn7, cn8, cn9; 
 cn0=cn1=cn2=cn3=cn4=cn5=cn6=cn7=cn8=cn9=0;

 cout<<"\nProgram to find frequency of each digit in a given integer.";
 cout<<"\nEnter the number :";
 cin>>n;

 while(n)
 {
  dig=n%10;
  n/=10;
  switch(dig)
  {
   case 0 : cn0++;
            break;
   case 1 : cn1++;
            break;
   case 2 : cn2++;
            break;
   case 3 : cn3++;
            break;
   case 4 : cn4++;
            break;
   case 5 : cn5++;
            break;
   case 6 : cn6++;
            break;
   case 7 : cn7++;
            break;
   case 8 : cn8++;
            break;
   case 9 : cn9++;
            break;
   default: cerr<<"\nAN ERROR OCCURRED.";
            break;
  }
 }
 cout<<"\nThe number entered by you has occurrence of digits as :\n";
 cout<<"\n\t\tdigit"<<"\t\t\tfrequency";
 cout<<"\n\t\t9\t\t\t"<<cn9;
 cout<<"\n\t\t8\t\t\t"<<cn8;
 cout<<"\n\t\t7\t\t\t"<<cn7;
 cout<<"\n\t\t6\t\t\t"<<cn6;
 cout<<"\n\t\t5\t\t\t"<<cn5;
 cout<<"\n\t\t4\t\t\t"<<cn4;
 cout<<"\n\t\t3\t\t\t"<<cn3;
 cout<<"\n\t\t2\t\t\t"<<cn2;
 cout<<"\n\t\t1\t\t\t"<<cn1;
 cout<<"\n\t\t0\t\t\t"<<cn0<<endl<<endl;

 return 0;
}
