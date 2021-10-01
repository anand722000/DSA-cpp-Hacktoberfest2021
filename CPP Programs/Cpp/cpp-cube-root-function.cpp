#include<iostream.h>
#include<conio.h>
#include<math.h>

int cube(int); 
void main() 
{ 
int num; 
clrscr(); 
cout<<"Enter any number: ";
cin>>num; 
cout<<"\n\Cube of "<<num<<" is: "<<cube(num); 
getch(); 
} 
int cube(int num) 
{ 
int ans; 
ans=pow(num, 1.0/3.0);
ans++; 
return(ans); 
getch();
}