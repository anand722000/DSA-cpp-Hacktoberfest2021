#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	cout<<"Enter a character in uppercase : ";
	cin>>ch;
	ch=ch+32;
	cout<<"character in lowercase = "<<ch;
	getch();
}