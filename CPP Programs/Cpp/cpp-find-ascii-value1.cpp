#include<iostream.h>
#include<ctype.h>
#include<conio.h>

int main(void)
{
   int number, result;
   clrscr();
   cout<<"Enter any Character/Symbol/Digits: ";
   number = getch();
   result = toascii(number);
   cout<<"Ascii value: "<<result;
   getch();
}