/***********************************************************
      Calculate Percentage of Student Marks
https://www.sitesbay.com/cpp-program/index
***********************************************************/

#include<iostream.h>
#include<conio.h>

void main()
{
int no, i;
float marks[10], per=0, total=0;
clrscr();
cout<<"Enter number of subject: ";
cin>>no;
cout<<"Enter marks of" <<no <<"subject";
for(i=0; i<no; i++)
{
cin>>marks[i];
}
for(i=0; i<no; i++)
{
total=total+marks[i];
}
per=total/no;
cout<<"Percentage: "<<per;
getch();
}