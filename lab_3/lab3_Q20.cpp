#include<iostream>

using namespace std;

int main()
{
 float bsal, gsal, hra=0, da=0;

 cout<<"\nProgram to input basic salary of an employee and calculate its Gross salary.";
 cout<<"\n Please enter your basic salary.\n";
 cin>>bsal;
 if(bsal<0) bsal*=-1;
 
 if(bsal<=10000)          { hra=0.20*bsal;   da=0.80*bsal;}
 else if(bsal<=20000)     { hra=0.25*bsal;   da=0.90*bsal;}
 else if(bsal>20000)      { hra=0.30*bsal;   da=0.95*bsal;}

 gsal=bsal+hra+da;
 cout<<"\nYour gross salary is :"<<gsal;
 cout<<endl;
 return 0;
}
