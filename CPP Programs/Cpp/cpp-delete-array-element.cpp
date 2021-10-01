#include<iostream.h>
#include<conio.h>

void main()
  {
   int i,a[5],no,pos;
   clrscr();
   cout<<"Enter data in array: ";
   for(i=0;i<5;i++)
   {
    cin>>a[i];
   }
   cout<<"\n\nStored Data in array:  ";
   for(i=0;i<5;i++)
   {
    cout<<a[i];
   }
   cout<<"\n\nEnter poss. of element to delete: ";
   cin>>pos;
   if(pos>5)
   {
   cout<<"\n\nThis value is out of range: ";
   }
   else
   {
   --pos;
   for(i=pos;i<=4;i++)
   {
    a[i]=a[i+1];
   }
   cout<<"\n\nNew data in array: ";
   for(i=0;i<4;i++)
   {
    cout<<a[i];
  }
  }
   getch();
 }