#include<iostream.h>
#include<conio.h>
void main()
{
 int num;
 int f,rem,sum=0,temp,a=0;
 clrscr();
 cout<<"Enter any number: ";
 cin>>num;
 temp=num;
 while(temp != 0)
 {
 temp=temp/10;
 a=a+1;
 }
 f=num;
 while(f!=0)
 {
 rem=f%10;
 sum = sum + power(rem,a);
 f=f/10;
 }

 if( sum == num )
 cout<<"\n Armstrong number ";
 else
 cout<<"\n Not a Armstrong number";
 getch();
}

int power(int c, int d)
{
    int pow=1;
    int i=1;
    while(i<=d)
    {
      pow=pow*c;
      i++;
     }
     return pow;
}