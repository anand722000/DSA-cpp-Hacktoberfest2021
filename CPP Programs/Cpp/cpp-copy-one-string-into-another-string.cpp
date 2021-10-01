#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
  char s1[10], s2[10];
  clrscr();
  cout<<"Enter string s1: ";
  cin>>s1;
  strcpy(s2, s1);
  cout<<"String s2: "<<s2;
getch();
}