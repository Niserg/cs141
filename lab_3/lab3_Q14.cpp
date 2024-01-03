
#include<iostream>

using namespace std;

int main()
{
 float a1, a2, a3, sum;

 cout<<"\nProgram to input angles of a triangle and check whether triangle is valid or not.";
 cout<<"\nEnter the three angles\n";
 cout<<"\nAngle one :";
 cin>>a1;
 cout<<"\nAngle two :";
 cin>>a2;
 cout<<"\nAngle three :";
 cin>>a3;
 
 sum=a1+a2+a3;
 if(sum==180) cout<<"\nThe triangle is valid as per the angle sum property of triangles.\n";
 else cout<<"\nIt is an invalid triangle as it does not satisflies the angle sum property.\n";

 return 0;

}
 

