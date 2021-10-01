#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

void main()
{
    clrscr();
    int i, j = 0, k = 0;
    char str[100], str1[10][20], word[20];
    cout<<"Enter Any String: ";
    gets(str);

    for (i=0; str[i]!='\0'; i++)
    {
	if (str[i]==' ')
	{
	    str1[k][j] = '\0';
	    k++;
	    j=0;
	}
	else
	{
	    str1[k][j]=str[i];
	    j++;
	}
    }
    str1[k][j] = '\0';
    cout<<"Enter any word to delete: ";
    cin>>word;

    /* Here Comparing string with the given word */

    for (i=0; i<k+1; i++)
    {
	if (strcmp(str1[i], word) == 0)
	{
	    for (j=i; j<k+1; j++)
			{
				strcpy(str1[j], str1[j + 1]);
				k--;
			}
	}

    }
    cout<<"New String After deleting entered word: ";
    for (i=0; i<k+1; i++)
    {
		cout<<str1[i]<<" ";
    }
    getch();
}
