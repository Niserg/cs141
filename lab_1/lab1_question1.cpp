#include <iostream>

using namespace std;

int main()
{
    int i;
    char ch;
    float fl;


    cout << "Hello"<<endl;
    cout<<"Program to take input and show output of all basic data types in c++"
    <<endl;
    cout<<"Enter a character:";
    cin>>ch;
    cout<<endl<<"Enter an integer:";
    cin>>i;
    cout<<endl<<"Enter a floating point that is any real number with decimal points:";
    cin>>fl;

    cout<<'\n\n'<<"Now we show output:";
    cout<<"\nA floating point :"<<fl;
    cout<<"\nA character :"<<ch;
    cout<<"\nAn integer :"<<i;

    return 0;
}
