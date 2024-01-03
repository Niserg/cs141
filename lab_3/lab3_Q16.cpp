
#include<iostream>
#include<stdlib.h>                                     //for exit function

using namespace std;

int main()
{
 float as1, as2, as3, asum, as12, as23, as31;
 int choice, flag;

 cout<<"\nProgram to check whether the triangle is equilateral, isosceles or scalene triangle.";
 cout<<"\nThrough what parameters do you want to check the triangle?";
 cout<<"\nEnter 1 to check by angles.";
 cout<<"\nEnter 2 to check by sides.\n";
 cin>>choice;

 switch(choice)
 {
  case 1 : do{
              flag=1;

              cout<<"\nEnter value of the three angles (in degrees).";
              cout<<"\nAngle one :";   cin>>as1;
              cout<<"\nAngle two :";   cin>>as2;
              cout<<"\nAngle three :"; cin>>as3;
              asum=as1+as2+as3;
              if(asum!=180) { cout<<"\nWrong entries.\nAngles must add up to 180 degree."; flag=0; }
              
             }while(!flag);
             
              if((as1==as2)&&(as2==as3))
                  cout<<"\nThe triangle is equilateral.";
              else if((as1==as2)||(as2==as3)||(as3==as1))
                       cout<<"\nThe triangle is isosceles.";

                   else cout<<"\nThe triangle is scalen.";

              
            break;

  case 2 : do{
              flag=1;
              cout<<"\nEnter values of the three sides.";
              cout<<"\nSide one :";   cin>>as1;
              cout<<"\nSide two :";   cin>>as2;
              cout<<"\nSide three :"; cin>>as3;

              as12=as1+as2;
              as23=as2+as3;
              as31=as3+as1;

              if((as12>as3) && (as23>as1) && (as31>as2));
              else { cout<<"\nEnter valid values for the sides.";  flag=0;}
      
             }while(!flag);

                                
              if((as1==as2)&&(as2==as3))
                  cout<<"\nThe triangle is equilateral.";
              else if((as1==as2)||(as2==as3)||(as3==as1))
                     cout<<"\nThe triangle is isosceles.";

                   else cout<<"\nThe triangle is scalen.";

           break;
           
  default : cerr<<"\nWRONG CHOICE.";
            exit(0);
 }

 cout<<endl; 
 return 0;
}






