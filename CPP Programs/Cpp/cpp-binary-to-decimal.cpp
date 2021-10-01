//Convert Binary to Decimal in C

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	long int bin_number, dec_number=0, i=1, rem;
	cout<<"Please Enter any Binary Number: ";
	cin>>bin_number;
	while(bin_number!=0)
	{
		rem=bin_number%10;
		dec_number=dec_number+rem*i;
		i=i*2;
		bin_number=bin_number/10;
	}
	cout<<"Equivalent Decimal value:"<<dec_number;
	getch();
}