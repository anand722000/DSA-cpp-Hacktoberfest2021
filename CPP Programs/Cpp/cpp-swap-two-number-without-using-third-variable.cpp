#include<iostream.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();
cout<<"Enter value of a: ";
cin>>a;
cout<<"Enter value of b: ";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swap a: "<<a<<"b: "<<b;
getch();
}