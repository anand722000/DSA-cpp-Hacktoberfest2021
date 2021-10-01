/***********************************************
          Find Compound Interest in C++
      www.sitesbay.com/cpp-program/index
***********************************************/


#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
   float p,r,i,t,ci,a;
   clrscr();

   cout<<"Enter Principal Amount: ";
   cin>>p;
   cout<<"Enter Interest Rate: ";
   cin>>r;
   cout<<"Enter time period in years: ";
   cin>>t;

   i=1+(r/100);

   // ci=pow(i,t);
   ci=1;
   for(a=1;a<=t;a++)
   ci=ci*i;

   ci=p*ci-p;

   cout<<"Compound interest is: "<<ci;

   getch();
}