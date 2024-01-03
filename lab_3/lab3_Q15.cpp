
#include<iostream>

using namespace std;

int main()
{
 float s1, s2, s3, s12, s23, s31;
 
 cout<<"\nProgram to input all sides of a triangle and check whether triangle is valid or not.";
 cout<<"\nEnter the three side :";
 cout<<"\nside one :";
 cin>>s1;
 cout<<"\nside two :";
 cin>>s2;
 cout<<"\nside three :";
 cin>>s3;
 
 if(s1<0||s2<0||s3<0) 
 {cout<<"\nNegative value of side."<<"\nNot a triangle.";
  return 0;
 }

 s12=s1+s2;
 s23=s2+s3;
 s31=s1+s3;

 if((s12>s3)&&(s23>s1)&&(s31>s2)) cout<<"\nThe triangle is valid.";

 cout<<endl;

 return 0;
}

