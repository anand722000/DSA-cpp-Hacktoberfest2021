// http://www.sitesbay.com

#include<iostream.h>
#include<conio.h>

void main()
{
int no,rem[20],i=0,j;
clrscr();
cout<<"Enter any Decimal Number: ";
cin>>no;
while(no>0)
{
rem[i]=no%8;
i++;
no=no/8;
}
cout<<"Binary Number is: ";
for(j = i - 1; j > = 0 ; j--)
{
cout<<rem[j];
}
getch();
}