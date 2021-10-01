//http://www.sitesbay.com/

#include<iostream.h>
#include<conio.h>
//using namespace std;

int main()
{
int i, count, sum, inputArray[500];
float average;
clrscr();

cout << "Enter number of elements\n";
cin >> count;

cout << "Enter " << count << " elements\n";
// Read "count" elements from user
for(i = 0; i < count; i++) {
cin >> inputArray[i];
}

sum = 0;
// Find sum of all array elements
for(i = 0; i < count; i++) {
sum += inputArray[i];
}

average = (float)sum / count;
cout << "Average = " << average;

getch();
}