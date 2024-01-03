#include<iostream>

using namespace std;

int max_ar(int ar[], int len)
{
 int ele_max, i=0;
 ele_max = ar[0];
  for(; i<len; ++i)
     if(ar[i]>ele_max) ele_max = ar[i];
 return ele_max;
}

int min_ar(int ar[], int len)
{
 int ele_min, i=0;
 ele_min = ar[0];
  for(; i<len; ++i)
     if(ar[i]<ele_min) ele_min = ar[i];
 return ele_min; 
}


int main()
{
 int l1, l2, tot_len, i =0, max_ele =0, min_ele =0;
 int ar1[20], ar2[20], ar[40];
 for(; i<40; ++i)
 {
  if(i<20) ar1[i] = ar2[i] = ar[i] =0;
  else ar[i] =0;
 }

 cout << "\nProgram to merge 2 arrays (just one after another into another array), maximum of 2 arrays [maximum element of all the elements in both the arrays], minimum of 2 arrays [similar to maximum].\n";
 cout << "\nEnter the size of array one :";  cin >> l1;
 cout << "\nEnter the size of array two :";  cin >> l2;
 tot_len = l1 + l2;
  
 cout << "\nEnter the elements of array one :";
 for( i=0; i<l1; ++i)
  { 
   cout << "\nARRAY_1 [ "<< i <<" ] :";
   cin >> ar1[i];
  }
 for( i=0; i<l2; ++i)
  {
   cout << "\nARRAY_2 [ "<< i <<" ] :";
   cin >> ar2[i];
  }
 for( i=0; i<l1; ++i)
    ar[i] = ar1[i];
 for( i=l1; i<tot_len; ++i)
    ar[i] = ar2[i];
 for(i=0; i<tot_len; ++i)
    cout<< " "<<ar[i];
 
 max_ele = max_ar(ar,tot_len);
 min_ele = min_ar(ar,tot_len);
 cout << "\nThe largest element in the combined array is :"<< max_ele << endl;
 cout << "\nThe smallest element in the combined array is :"<<min_ele << endl;
 return 0;
}
