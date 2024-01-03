#include<iostream>

using namespace std;
void normal_method(int[], int);
void pointer_method(int[], int);

int main()
{
 int i, n;
 cout <<"\nProgram to create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.";
 cout <<"\nEnter array size :";
 cin >> n;
 int ar[n];
 cout <<"\nEnter the array elements :";
 for(i=0; i<n; ++i)
 {
  cout <<"\nar[ "<<i<<" ] :";
  cin >> ar[i];
 }
 normal_method(ar,n);
 pointer_method(ar,n);

 return 0;
}



 
void normal_method(int ar[], int N)
{
 cout << "\nUsing normal index method to print array.";
 for(int j=0; j<N; ++j)
  cout <<"\nar[ "<<j<<" ] :"<<ar[j];
}

void pointer_method(int ar[], int N)
{
 cout << "\nUsing pointer method to access array elements to print them.";
 int *ptr;
 for(ptr=ar; ptr<ar+N; ++ptr)
  cout <<"\n"<<*ptr;
}

