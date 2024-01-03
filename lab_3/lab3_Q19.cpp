#include<iostream>

using namespace std;
int main()
{
 float phmk, chmk, bmk, mtmk, csmk, tot, per;
 char grade;
 tot=0;

 cout<<"\nInput marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer (out of 100) and calculate percentage and grade.";
 cout<<"\nEnter subjectwise marks :";
 cout<<"\nPhysics :";                cin>>phmk;  tot+=phmk;
 cout<<"\nChemistry :";              cin>>chmk;  tot+=chmk;
 cout<<"\nBiology :";                cin>>bmk;   tot+=bmk;
 cout<<"\nMathematics :";            cin>>mtmk;  tot+=mtmk;
 cout<<"\nComputer Science :";       cin>>csmk;  tot+=csmk;

 per=tot/5;                                                  // as percentage = (total marks / maximum marks) *100
 
 if(per>=90) grade='A';
 else if(per>=80) grade='B';
 else if(per>=70) grade='C';
 else if(per>=60) grade='D';
 else if(per>=40) grade='E';
 else             grade='F';

 cout<<"\nThe student has scored "<<per<<" percentage and secured "<<grade<<" grade.";

 return 0;
}
