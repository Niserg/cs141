#include <iostream>

using namespace std;

float sumfunc( int ar[], int length)
{
 float sum =0;
 for( int i =0; i<length; ++i)
 sum = sum + ar[i];
 return sum;
}

int main()
{
 int ar[25], len =0, i =0;
 float sum_elements;
 for( ; i<20; ++i) ar[i] = 0;

 cout << "\nPogram to find sum of all elements of an array.";
 cout << "\nEnter length :";
 cin >> len;
 cout << "\nEnter the integer array :";
 for( i=0; i<len; ++i)
 {
  cout << "\n ARRAY[ "<< i <<" ] :";
  cin >> ar[i];
 }
 sum_elements = sumfunc(ar,len);
 cout << "\nSummation of all elements of the array is :"<< sum_elements << endl;
 return 0;
}
