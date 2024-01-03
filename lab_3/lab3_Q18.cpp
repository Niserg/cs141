#include<iostream>

using namespace std;

int main()
{
 float cp, sp, nt, per;

 cout<<"\nProgram to calculate profit or loss.";
 cout<<"\nEnter your cost price :";
 cin>>cp;
 cout<<"\nEnter your selling price :";
 cin>>sp;
 if(sp<0||cp<0) { cout<<"\nDon't enter negative values.";  return 0;}

 nt=sp-cp;
 per=(nt*100)/cp;
 if(nt>0) 
   cout<<"\nYou made a profit "<<per<<" % of the cost price.";
 else 
   {
    per*=(-1);
    cout<<"\nYou incurred a loss of "<<per<<" % of the cost price.";
   }
 return 0;
}

 
