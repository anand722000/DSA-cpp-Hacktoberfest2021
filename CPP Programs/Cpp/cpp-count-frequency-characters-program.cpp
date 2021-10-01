#include<iostream.h>
#include<stdio.h>
#include<conio.h>

 void main()
 {
   int i,count=0;
   char ch[20],c;
   clrscr();
   cout<<"Enter Any String: ";
   gets(ch);
   cout<<"Enter any Character form string: ";
   cin>>c;
   for(i=0;ch[i]!='\0';i++)
   {
   if(ch[i]==c)
   count++;
   }
   if(count==0)
   {
   cout<<"Given character not found";
   }
   else
   {
   cout<<"Repetition of " <<c<<" "<<count<<" times";
   }
   getch();
 }