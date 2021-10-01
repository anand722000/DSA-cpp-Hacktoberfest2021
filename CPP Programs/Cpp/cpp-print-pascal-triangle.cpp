#include<conio.h>
#include<iostream.h>
void main()
{
  int i,j,n;
  char c;
  clrscr();
  cout<<"Eneter the no of lines to be printed: ";
  cin>>n;
  c='A';
  for(i=0;i<n;i++)
   {
   for(j=0;j<=i;j++)
   { 
   if(c=='Z')
   break;
  cout<<c;
  c++;
   }
  cout<<endl;
  }
  getch();
}