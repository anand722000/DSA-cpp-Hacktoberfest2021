// C++ program to print Floyd's triangle

#include<conio.h>
#include<iostream.h>

void main() 
{
    int i, j, rows, counter;
    clrscr();  
    cout << "Enter the number of rows of Floyd's triangle\n";
    cin >> rows;
  
    // Print Floyd's triangle
    for (counter = 1, i = 1; i <= rows; i++) {
     // Print ith row 
        for (j = 1; j <= i; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }
      
 getch();
}