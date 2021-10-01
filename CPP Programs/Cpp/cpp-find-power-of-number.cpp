#include<iostream.h>
#include<conio.h>

 void main()
  {
   int b,p,i,pow=1;
   clrscr();
   cout<<"Enter base and power: ";
   cin>>b>>p;
   for(i=p;i>0;i--)
   {
   pow=pow*b;
   }
   cout<<"power is: "<<pow;

  getch();
  }