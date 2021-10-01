#include<iostream.h>
#include<conio.h>

void Reverse_Array(int array[],int size);

void main()
{

int i,a[10],size;
clrscr();
cout<<"Enter array size of Array ( Max:10 ): ";
cin>>size;
cout<<"\nEnter any "<<size<<" elements: \n";

for(i=0; i<size; i++)
{
 cin>>a[i];
}

cout<<"\nStored Data in Array: \n\n";

for(i=0;i<size;i++)
{
cout<<" "<<a[i]<<" ";
}
// Calling Reverse Array Values Function
Reverse_Array(a,size);
cout << "\n\nReversed Array Elements are: \n\n";
 for(i=0;i<size;i++)
 {
  cout<<" "<<a[i]<<" ";
 }
cout<<"\n";
getch();
}

//------Reverse Array Function---------------

void Reverse_Array(int array[],int size)
{
int temp;
size--;
for (int i=0;size>=i;size--,i++)
{
temp=array[i];
array[i]=array[size];
array[size]=temp;
}
}