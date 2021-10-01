#include<iostream.h>
#include<conio.h>
#define 1000

void main()
{
        char binnum[MAX], hexa[MAX];
        int temp;
        long int i=0,j=0;
        clrscr();
        cout<<"Enter any Binary Number: ";
        cin>>binnum;
        while(binnum[i])
        {
          binnum[i] = binnum[i] -48;
          ++i;
        }
        --i;
        while(i-2>=0)
        {
          temp =  binnum[i-3] *8 + binnum[i-2] *4 +  binnum[i-1] *2 + binnum[i] ;
          if(temp > 9)
          hexa[j++] = temp + 55;
           else
            hexa[j++] = temp + 48;
            i=i-4;
        }
        if(i ==1)
          hexa[j] = binnum[i-1] *2 + binnum[i] + 48 ;
        else if(i==0)
          hexa[j] =  binnum[i] + 48 ;
        else
         --j;
        cout<<"Equivalent Hexadecimal Number is: \n";
        while(j>=0)
        {
         cout<<hexa[j--];
        }
getch();
}