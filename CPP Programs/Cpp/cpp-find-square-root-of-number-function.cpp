#include<iostream.h>
#include<conio.h>
#include<math.h>

int square(int); 
void main()
{
int num;
clrscr();
cout<<"Enter any Num: ";
cin>>num;
cout<<"\n Square of "<<num<<" is: "<<square(num));
getch(); 
}
int square(int num)
{
int ans;
ans=pow(num,0.5);
return(ans); 
getch();
}