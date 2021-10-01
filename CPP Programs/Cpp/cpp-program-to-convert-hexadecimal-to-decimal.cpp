//https://www.sitesbay.com/cpp-program/index

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main ()
{
    char num[20];
    int i, r, len, hex = 0;
    clrscr();
    cout << "Enter any Hexadecimal Number : ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout << "\nEquivalent Decimal Value " << num << " is : " << hex;
    getch();
}