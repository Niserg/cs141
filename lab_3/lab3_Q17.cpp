#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 float a, b, c, r1, r2, D;
  
 cout<<"\nProgram to find all roots of a quadratic equation.";
 cout<<"\nEnter the coefficients a, b, c of the quadratic equation (a*x^2 + b*x + c) to be solved.";
 do{
    cout<<"\na = ";  cin>>a;
    if(a==0) cout<<"\nPlease enter non zero value of a."; 
   }while(a==0);

 cout<<"\nb = ";  cin>>b;
 cout<<"\nc = ";  cin>>c;

 D=b*b-4*a*c;

 if(D<0) cout<<"\nThe equation has imaginary roots.\n";

 else
 {
  if(D==0) 
    {cout<<"\nRoots of the equation are real and equal.";
     r1=-b/(2*a);
     cout<<"\nThe root is :"<<r1;
    }
  else
  {
   cout<<"\nRoots of the equation are real and unequal.";
   
   r1=(-b+sqrt(D))/(2*a);
   r2=(-b-sqrt(D))/(2*a);

   cout<<"\nRoots are :\n\t\t"<<r1<<"\n\t\t"<<r2<<'\n';
  }
 }

 return 0;
}



 
