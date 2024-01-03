#include<iostream>

using namespace std;

int main()
{
 int n, i;
 float fact=1;

 cout<<"\nProgram to enter any number and calculate its factorial.";
 cout<<"\nEnter any number :";
 cin>>n;
 if(n<0) n*=-1;
 
 for(i=1; i<=n; i++)
 { 
  fact*=i;
 }
 cout<<"\nThe factorial of "<<n<<" is :"<<fact<<endl;
 return 0;
}
