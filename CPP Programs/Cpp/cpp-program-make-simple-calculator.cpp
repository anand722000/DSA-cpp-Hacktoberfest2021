#include<iostream.h>
#include<conio.h>

void main()
{
char choice;
int a,b,res=0;
clrscr();
cout<<"Enter First value: ";
cin>>a;
cout<<"\n Enter Operator: ";
choice=getch();
cout<<choice;
cout<<"\n Enter Second value: ";
cin>>b;

switch(choice)
{
case '+':
  res=a+b;
  cout<<"Sum: "<<res;
break;
case '-':
  res=a-b;
  cout<<"Difference: "<<res;
break;
case '*':
  res=a*b;
  cout<<"Product: "<<res;
break;
case '/':
  res=a/b;
  cout<<"Quotient: "<<res;
break;
default:
  cout<<"Enter Valid Operator!!";
}
getch();
}