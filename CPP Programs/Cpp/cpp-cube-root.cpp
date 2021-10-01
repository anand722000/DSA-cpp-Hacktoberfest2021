#include<iostream.h>
#include<conio.h>
#include<math.h>

void main() 
{ 
int num, ans; 
clrscr(); 
cout<<"Enter any number"; 
cin>>num; 
ans=pow(num, 1.0/3.0);
ans++;
cout<<"\n\Cube of "<<num<<" is: "<<ans; 
getch(); 
}