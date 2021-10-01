/***************   Print table of any number in c++    *************

***  http://www.tutorial4us.com/cpp-program/table-of-any-number  ***/

#include<iostream.h>
#include<conio.h>

void main()
{
int i,no,table=1;
clrscr();
cout<<"Enter any number : ";
cin>>no;
clrscr();
cout<<"Table of "<<no;
for(i=1;i< =10;i++)
{
table=no*i;
cout<<" \n"<<table;
cout<<"\n";
}
getch();
}