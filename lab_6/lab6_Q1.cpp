# include <iostream>

using namespace std;

int main()
{
 int x,c, *pnt_x;
 char ch, *pnt_ch;
 float fl, *pnt_fl;
 bool b, *pnt_b;
 double db, pnt_db;
 cout<<"\nklmkm";
 cout << &ch;
  
 cout << "\nProgram to declare variables of all predefined sizes and declare corresponding pointers\n";
 cout <<"\nsize of integer is :"<< sizeof(x);
 cout <<"\n\t\t\t\tsize of pointer to integer is :"<< sizeof(pnt_x);
 cout <<"\nsize of character is :"<< sizeof(ch); 
 cout <<"\n\t\t\t\tsize of pointer to character is :"<< sizeof(pnt_ch);
 cout <<"\nsize of floating point is :"<< sizeof(fl);
 cout <<"\n\t\t\t\tsize of pointer to floating point is :"<< sizeof(pnt_fl);
 cout <<"\nsize of bool is :"<< sizeof(b);
 cout <<"\n\t\t\t\tsize of pointer to bool is :"<< sizeof(pnt_b);
 cout <<"\nsize of double is :"<< sizeof(db);
 cout <<"\n\t\t\t\tsize of pointer to double is :"<< sizeof(pnt_db);
 cout << "\n\n";
 
 

 return 0;
}
