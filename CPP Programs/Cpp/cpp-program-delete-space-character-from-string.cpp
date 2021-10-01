#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
{
    char input[100], output[100];
    int i, j;
     
    cout << "Enter any string \n";
    cin.getline(input, 500);
     
    for(i = 0, j = 0; input[i] != '\0'; i++)
{
        if(input[i] != ' '){
        // If current character is not a space character, 
        // copy it to output String
	    output[j++] = input[i];
	}
    }
    output[j] = '\0';

    cout << "Input String are: " << input << endl;
    cout << "String without spaces : " << output;

    getch();
}