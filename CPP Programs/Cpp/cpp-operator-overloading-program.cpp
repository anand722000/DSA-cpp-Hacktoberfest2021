/*********************************************************
     Operator OverLoading Program in C++

  https://www.sitesbay.com/cpp-program/index
**********************************************************/

#include<iostream.h>
#include<conio.h>

class temp
{
   private:
      int count;
   public:
       temp():count(10)
       { }

       void operator ++()
       {
	count=count+1;
       }
       void Display()
       {
       cout<<"Count: "<<count;
       }
  };
void main()
 {
   clrscr();
   temp t;
   ++t;        /* operator function void operator ++() is called */
   t.Display();
   getch();
 }