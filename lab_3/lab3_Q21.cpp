#include<iostream>

using namespace std;

int main()
{
 float chrg=0;
 int ecu;

 cout<<"\nProgram to input electricity unit comsumption and calculate total electricity bill.";
 cout<<"\nEnter your electricity consumption in units :";
 cin>>ecu;
 if(ecu<=50&&ecu>0) chrg=0.50*ecu;
 else
 {
  if(ecu>50)
    chrg+=0.50*50;

  if(ecu>=150)
    chrg+=0.75*(ecu-50);

  if(ecu>=250)
    chrg+=1.20*(ecu-150);

  if(ecu>250)
    chrg+=1.50*(ecu-250);
 }
 chrg=1.20*chrg; 

 cout<<"\nThe total electricity charge for the given consumption is Rupees "<<chrg<<'\n';
 
 return 0;
}
