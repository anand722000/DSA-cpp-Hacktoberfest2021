//https://www.sitesbay.com/cpp-program/index

#include<iostream.h>
#include<conio.h>
#define PI 3.141

void main()
{
 float radius, circumference;
 clrscr();
 cout<<"Enter radius of circle\n";
 cin>>radius;
 // Circumference of Circle = 2 X PI x Radius
 circumference = 2*PI*radius;
 cout<<"Circumference of circle : "<<circumference;
      
getch();
}