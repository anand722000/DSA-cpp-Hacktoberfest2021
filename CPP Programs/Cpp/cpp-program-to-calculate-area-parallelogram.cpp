//https://www.sitesbay.com/cpp-program/index

#include<iostream.h>
#include<conio.h>

void main()
{
  float base, height, area;
  clrscr();
    cout<<"Enter the base and height parallelogram\n";
    cin>>base>>height;
     
    // Area of parallelogram = base X height 
    area = base * height;
    cout<<"Area of parallelogram : "<<area;      
getch();
}