#include <iostream>

using namespace std;

void array_sort(int ar[], int length)
{
 int i, j, min, tmp, pos;
 cout << "\nSorting the array.\n";
 for(i =0; i<length-1; ++i)
 {
   min = ar[i];
   for(j =i+1; j<length; ++j)
      if(ar[j]<min) { min = ar[j]; pos =j;}
   if(min!=ar[i])
   {
    tmp = ar[i];
    ar[i] = min;
    ar[pos] = tmp;
   }
   for(int k=0; k<length; ++k) cout<<"    "<<ar[k];
   cout<<"\n";
 }
} 

int kth_min(int ar[], int length, int ks)
{
 int i, j, count, kthmin=0, ctr =0;
 for( i=0; i<length; i+=count)
  { ctr++;
    if(ctr==ks) break;
    count =1;
    for( j=i+1; j<length; ++j)
    {
      if(ar[j]==ar[i]) count++;
      else break;
    }
  }
  kthmin = ar[i];
  return kthmin;
}

int kth_max(int ar[], int length, int kl)
{
 int i, j, count, kthmax=0, ctr =0;
 for( i=length-1; i>0; i-=count)
  { ctr++;
    if(ctr==kl) break;
    count =1;
    for( j=i-1; j>=0; --j)
    {
      if(ar[j]==ar[i]) count++;
      else break;
    }
  }
  kthmax = ar[i];
  return kthmax;
}

int main()
{
 int len, i, k1, k2, largest=0, smallest=0;
 cout << "\nProgram for kth largest, kth smallest element of an array.";
 cout << "\nEnter the length of array :";
 cin  >> len;
 int ar[len];
 cout << "\nEnter the elements of the array :";
 for(i =0; i<len; ++i)
 {
   cout << "\nARRAY[ "<< i <<" ] :";
   cin  >> ar[i];
 }
 array_sort(ar,len);
  
 cout << "\nTo find k th largest number enter k :";    cin >> k1;
 cout << "\nTo find k th smallest number enter k :";   cin >> k2; 
 largest = kth_max(ar,len,k1);
 smallest = kth_min(ar,len,k2);
 cout << "\nThe "<< k1 <<" th largest element in the array is :"<< largest << endl;
 cout << "\nThe "<< k2 <<" th smallest element in the array is :"<< smallest << endl;
 return 0;
}
