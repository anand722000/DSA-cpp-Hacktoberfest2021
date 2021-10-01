#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
 {
 char str1[20],str2[20],i,j,flag=0;
 clrscr();
 cout<<"Enter first string: ";
 gets(str1);
 cout<<"Enter Second string: ";
 gets(str2);
 i=0;
 j=0;
  while(str1[i]!='\0')
  {
   i++;
  }
  while(str2[j]!='\0')
  {
   j++;
  }
 if(i!=j)
 {
 flag=0;
 }
 else
 {
 for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
 {
 if(str1[i]==str2[j])
 {
 flag=1;
 }
 }
 }
 if(flag==0)
 {
 cout<<"Strings are not equal";
 }
 else
 {
 cout<<"Strings are equal";
 }
 getch();
}