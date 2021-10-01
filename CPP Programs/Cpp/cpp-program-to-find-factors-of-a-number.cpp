#include<iostream.h>
#include<conio.h>

void main()
{
    int n, i;
    clrscr();
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: " << endl;  
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << endl;
    }

getch();
}