#include<iostream.h>
#include<conio.h>

void main()
{
int no,rem[20],i=0,j;
clrscr();
cout<<"Enter any num : ";
cin>>no;
while(no>0)
{
rem[i]=no%2;
i++;
no=no/2;
}
cout<<"Binary Number is :";
for(j=i-1;j>=0;j--)
{
cout<<rem[j];
}
getch();
}