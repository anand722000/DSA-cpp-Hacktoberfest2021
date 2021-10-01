#include<iostream.h>
#include<conio.h>
long int fact(int);   //function declaration
void main()
{
	clrscr();
	int n, r;
	long int ncr, npr;
	cout<<"Enter Any Value for n: ";
	cin>>n;
	cout<<"Enter Any Value for r : ";
	cin>>r;
	npr=fact(n)/fact(n-r);    // function calling
	ncr=npr/fact(r);          //function calling
	cout<<"NPR value = "<<npr<<"\n";
	cout<<"NCR value = "<<ncr<<"\n";
	getch();
}
long int fact(int x)          //defining the function
{
	int i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}