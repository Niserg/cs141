#include<iostream>
#include<stdio.h>

using namespace std;

void strcpy_my_ver( char* st1, char* st2)
{
 int i =0;
 while(st2[i]!='\0')
   st1[i++] = st2[i++];
 st1[i] = '\0';
}


int strlen_my_ver( char* st)
{
 int i =0;
 while(st[i]!='\0')
   i++;
 return i;  
}


void strcat_my_ver( char* st1, char* st2)
{
 int i = strlen_my_ver( st1);
 for(; st2[i]!='\0'; ++i)
   st1[i] = st2[i];
 st1[i] = '\0';
}



int strcmp_my_ver( char* st1, char* st2)
{
 int n1, n2;
 n1 = strlen_my_ver(st1);
 n2 = strlen_my_ver(st2);
  if(n1==n2) 
    return 0;
  else if(n1>n2)
    return 1;
  else return -1;
}

char* strchr_my_ver(char* st, char ch)
{
 char *ptr;
 for( ptr =st; *ptr!='\0'; ++ptr)
    if(*ptr==ch) return ptr;
 return NULL; 
}


char* strstr_my_ver( char st[], char* substr )
{
 char *s2;
 int i, j, len;
 len = strlen_my_ver(substr);
 for( i=0; st[i]!='\0'; ++i)
 {
  for(s2 = substr, j=i; *s2!='\0'; ++s2, ++j)
       if(st[j]!=*s2) break;
  if((j-i)==len) return &st[i];   
 } 
 return NULL;
}
 
	
int main()
{
 char *ptr, ch, strch, st1[100], st2[100], substr[50];
 int choice, l1, l2, len, cmp, strno;
do{ 
   cout <<"\nEnter the length of string 1 :";    cin >>l1;
   cout <<"\nEnter the string 1 :"; 
   cin.getline(st1,l1);
   cout <<"\nEnter the length of string 2 :";    cin >>l2;
   cout <<"\nEnter the string 2 :";
   cin.getline(st2,l2);
   cout <<"\nProgram to implement user versions for the following functions:";
   cout <<"\n1.\tStrcpy\n2.\tStrcat\n3.\tStrlen\n4.\tStrcmp\n5.\tStrchr\n6.\tStrstr\t";
   cout <<"\nEnter your choice :";
   choice = getchar();   
   switch(choice)
   {
    case 1 : cout <<"\n Copying string 2 to string 1...\tCalling function strcpy_my_version() ";
             strcpy_my_ver(st1, st2);
             cout <<"\nNow string one is :"; cout.write(st1,l2);
             cout <<"\nNow string two is :"; cout.write(st2,l2);
             break;
    case 2 : cout <<"\n Concatenating string 2 to string 1...\tCalling function strcat_my_version() ";
             strcat_my_ver(st1, st2);
             cout <<"\nNow string one is :"; cout.write(st1,l2);
             cout <<"\nNow string two is :"; cout.write(st2,l2);
             break;
    case 3 : cout <<"\nThe length of string 1 is :"<<strlen_my_ver(st1);
             cout <<"\nThe length of string 2 is :"<<strlen_my_ver(st2);
             break;
    case 4 : cout <<"\n Comparing string 2 to string 1...\tCalling function strcmp_my_version() ";
             cmp = strcmp_my_ver(st1, st2);
             if(cmp==0) cout<<"\nThey are equal.";
             else if(cmp>0) cout<<"\nString 1 is bigger.";
             else cout<<"\nString 2 is bigger.";
             break;
    case 5 : cout <<"\nWhich string do you want to search ( enter 1 or 2) :"; 
             cin >> strno;
             switch(strno)
             {
              case 1 :  cout <<"\nEnter a character you want to find  :"; cin >>strch;
                        ptr = strchr_my_ver(st1,strch);
                        if(ptr!=NULL) cout <<"\nThe character is in string "<<strno<<" at "<<ptr-st1<<" position.\n";
                        else cout<<"\nNOT found.";
                        break;
              case 2 :  cout <<"\nEnter a character you want to find  :"; cin >>strch;
                        ptr = strchr_my_ver(st2,strch);
                        if(ptr!=NULL) cout <<"\nThe character is in string "<<strno<<" at "<<ptr-st2<<" position.\n";
                        else cout<<"\nNOT found.";
                        break;
              default : cout <<"\nWrong choice !!";
                        break; 
             }
    case 6 : cout <<"\nWhich string do you want to search :";
             cin >> strno;
             switch(strno)
             {
              case 1 :  cout <<"\nEnter a substring you want to find  :"; cin >>substr;
                        len = strlen_my_ver(substr);
                        ptr = strstr_my_ver(st1,substr);
                        if(ptr!=NULL){cout <<"\nThe substring is in string "<<strno<<" at "<<ptr-st1<<" position.\nsubstring from original string :.";
                        cout.write(ptr,len);}
                        else cout<<"\nNOT found.";
                        break;
              case 2 :  cout <<"\nEnter a substring you want to find  :"; cin >>substr;
                        len = strlen_my_ver(substr);
                        ptr = strstr_my_ver(st2,substr);
                        if(ptr!=NULL){cout <<"\nThe substring is in string "<<strno<<" at "<<ptr-st1<<" position.\nsubstring from original string :.";                        cout.write(ptr,len);}
                        else cout<<"\nNOT found.";
                        break;
              default : cout <<"\nWrong choice !!";
                        break;
             }
     
    default : cout <<"\nWRONG choice.";
              break;
   }
   cout <<"\nWanna do again? (y or n):";  
   ch = getchar();
  }while(ch=='y'||ch=='Y');
   
 return 0;
}

