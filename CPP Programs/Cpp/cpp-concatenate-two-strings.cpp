#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
char *ch1="john";
char *ch2="porter";
char *ptr;
clrscr();
cout<<"1 st String: "<<ch1;
cout<<"\n2 nd String: "<<ch2;
strcat(ch1,ch2);
cout<<"\nCombined string is: "<<ch1;
getch();
}