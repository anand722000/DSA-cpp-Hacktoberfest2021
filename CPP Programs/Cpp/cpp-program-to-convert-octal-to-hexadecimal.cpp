// https://www.sitesbay.com/cpp-program/index

#include<iostream.h>
#include<math.h>
#include<conio.h>

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, temp_Octal, binary, place;
    char hex[65] = "";
    int rem;

    place = 1;
    binary = 0;
    clrscr();    

    cout<<"Please Enter any Octal Number: ";
    cin>>octal;
    temp_Octal = octal;

    // First Convert Octal to Binary
     
    while(temp_Octal > 0)
    {
        rem = temp_Octal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        temp_Octal /= 10;

        place *= 1000;
    }
    
    // Convert Binary to Hexadecimal
    
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);

    cout<<" Equivalent Hexadecimal number: "<< hex;

  getch();
}