#include<iostream>

using namespace std;

int main()
{
 int i, j, n, flag;


 cout<<"\nProgram to enter any number and print its prime factors.";
 cout<<"\nEnter a number :";
 cin>>n;
 if(n<0) n*=-1;

 for(i=2; i<=n/2; ++i)
 {
     flag=1;
   if(n%i==0)                            // if i divides n
   {                                    // check if its prime                     
     for(j=2; j<=i/2; ++j)              
        if(i%j==0)
                  { flag=0;  break;}

     if(flag) 
          if(n%i==0) cout<<"\n"<<i<<" is its prime factor.";
   }


 }

 cout<<endl;
 return 0;
}
