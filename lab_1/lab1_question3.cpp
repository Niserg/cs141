#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int ch;

    cout << "Program to perform all arithmatic operations on two integer numbers" << endl;
    cout<<"\nwhat do you want to do (enter your choice 1 to 4):";
    cout<<"\n1.addition"<<"\n2.substraction"<<"\n3.multiplication"<<"\n4.devision";
    cout<<endl;
    cin>>ch;
    switch(ch)
    {
     case 1 : cout<<"\nEnter the numbers to be added:";
              cin>>x>>y;
              cout<<"\nAddition is :"<<x+y;
              break;

     case 2 : cout<<"\nEnter the numbers to be substracted (first to be substracted from second):";
              cin>>x>>y;
              cout<<"\nThe substraction is :"<<y-x;
              break;

     case 3 : cout<<"\nEnter the numbers to be multiplied:";
              cin>>x>>y;
              cout<<"\nThe product is :"<<float(x*y);
              break;

     case 4 : cout<<"\nEnter the numbers to be devided( first to be devided by second):";
              cin>>x>>y;
              if(y!=0)cout<<"\nThe devision is :"<<float(x/y);
              else cout<<"\nsorry cannot operate upon.";
              break;

     default : cout<<"\nSorry wrong choice";
               break;
    }
    return 0;
}
