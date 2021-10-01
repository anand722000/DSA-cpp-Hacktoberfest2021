#include<iostream.h>
#include<conio.h>

void main()
{
int no,a=0;
clrscr();
cout<<"Enter any num : ";
cin>>no;
if(no<0)
{
no=no * -1;
}
else if(no==0)
{
no=1;
}
while(no>0)
{
no=no/10;
a++;
}
cout<<"\n no. of digits in given number is: "<<a;
getch();
}