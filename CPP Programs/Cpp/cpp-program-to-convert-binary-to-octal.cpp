//http://www.sitesbay.com

#include<iostream.h>
#include<conio.h>

void main()
{
    long int binarynum, octalnum = 0, j = 1, remainder;
    clrscr();
    cout<<"Enter any Binary Number: ";
    cin>>binarynum;
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    cout<<"Equivalent octal value: " <<octalnum;
    getch();
}