#include<iostream.h>
#include<conio.h>

void main()
{
 float cel, far;
  clrscr();
  cout<<"Enter temp. in Celsius: ";
  cin>>cel;
   far = cel * 9/5 + 32;
  cout<<"Temp. in Fahrenheit: "<<far;
 getch();
}