#include<iostream.h>
#include<conio.h>

void main()
 {
   int a[10],b[10],c[20],i;
   clrscr();
   cout<<"Enter Elements in 1st Array: ";
   for(i=0;i<10;i++)
   {
   cin>>a[i];
   }
   cout<<"Enter Elements in 2nd Array: ";
   for(i=0;i<10;i++)
   {
   cin>>b[i];
   }
   cout<<"\nElements of Array After Merge: ";
   for(i=0;i<10;i++)
   {
    c[i]=a[i];
    c[i+10]=b[i];
   }
   for(i=0;i<20;i++)
   {
   cout<<c[i];
   }
  getch();
 }