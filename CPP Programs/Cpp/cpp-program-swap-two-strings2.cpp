#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{   int i;
    char str1[30],str2[30],temp[30];
    clrscr();
    cout<<"Enter String String 1 : ";
    cin>>str1;
    cout<<"Enter String String 2 : ";
    cin>>str2;
    for(i=0;(temp[i]=str1[i])!=0;i++);
    for(i=0;(str1[i]=str2[i])!=0;i++);
    for(i=0;(str2[i]=temp[i])!=0;i++);
    cout<<"After Swapping Strings Are: "<<endl;
    cout<<"String 1 : "<<str1;
    cout<<endl<<"String 2 : "<<str2;
    getch();
}