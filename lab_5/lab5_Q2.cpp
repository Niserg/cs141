#include <iostream>

using namespace std;
 
void sortfunc( int ar[], int length)
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
 
void large_small(int ar[], int length)
{
 cout << "\nThe largest element in the array is :"<< ar[length-1];
 cout << "\nThe smallest element in the array is :"<< ar[0];
}

float find_avg(int ar[], int length)
{
 int i;
 float mean =0, sum =0;
 for(i =0; i<length; i++)
    sum += ar[i];
 mean = sum/length;
 return mean;
}

float median(int ar[], int length)
{
 if(length%2!=0)
  { 
   float med = ar[((length+1)/2)-1];
   return med;
  }
 else 
  {
   float med = (ar[length/2-1] + ar[(length-1)/2])/2;
   return med;
  }
   
}

int high_freq(int ar[], int length)
{
 int i, j, mode =0, count, old_count=1;
 for(i=0; i<length; i=i+count)
  {
    count =1;
    for(j=i+1; j<length-1; ++j)
         {
          if(ar[j]==ar[i]) count++;
          else break;
         }
    if(count > old_count) 
        {
         old_count = count;
         mode = ar[i];
         cout<<"\n"<<"count"<<count<<"\n"<<"old_count"<<old_count<<"\n"<<"mode"<<mode<<"\n";
        }
  }
 return mode;
   
}

int main()
{
 int ar[50], len, i, mode; 
 float mean, med;
 for(i=0;i<50;++i) ar[i] = 0;

 cout << "\nProgram to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array.\n";
 cout << "\nEnter length of the array :";
 cin  >> len;
 cout << "\nEnter the array :";
 for( i=0; i<len; ++i)
 { 
  cout << "\nARRAY[ "<< i << " ] :";
  cin >> ar[i];
 }
 sortfunc(ar,len);
 large_small(ar,len);
 med = median(ar,len);
 mean = find_avg(ar,len);
 mode = high_freq(ar,len);
 high_freq(ar,len);
 cout << "\nThe mean is :"<< mean << endl;
 cout << "\nThe median is :"<< med << endl;
 if(mode)
 cout << "\nThe number having highest frequency is :"<< mode << endl;
 else cout << "\nThe number having highes frequency is : None."<< endl;

 return 0;
}
