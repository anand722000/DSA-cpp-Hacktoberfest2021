/*  */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
int len, i, j;
clrscr();
cout<<"Please Enter any string : ";
gets(str);
len=strlen(str);
for(i=0; i<len; i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O' ||
str[i]=='U')
{
for(j=i; j<len; j++)
{
str[j]=str[j+1];
}
len--;
}
}
cout<<"After Deleting the vowels, the String is:"<<str;
getch();
}
