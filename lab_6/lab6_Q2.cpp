#include<iostream>

using namespace std;

int main()
{
 int a, b, *p;
 cout <<"\nProgram to declare two variables a,b and a pointer variable p.";
 cout << "\nEnter the value of integer a :";
 cin >> a;
 p = &a;
 b = *p;
 cout <<"\nWe point p to a. And store the value pointed by p in b. Print the values of a, b and *p.";
 cout << "\n a = "<<a;
 cout << "\n b = "<<b;
 cout << "\n *p = "<<*p;
 cout << "\nWe assign values a=2 and b = 3. Print the values of a, b and *p.";
 a =2, b=3;
 cout << "\n a = "<<a;
 cout << "\n b = "<<b;
 cout << "\n *p = "<<*p;
 cout << "\nNow we point p to b and print the values of a, b and *p.";
 p = &b;
 cout << "\n a = "<<a;
 cout << "\n b = "<<b;
 cout << "\n *p = "<<*p;
 cout <<endl;
 return 0;
}

