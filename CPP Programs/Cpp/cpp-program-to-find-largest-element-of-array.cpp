#include<iostream.h>
#include<conio.h>

void main()
{

 int input[100], count, i, max;
       
    cout<<"Enter Number of Elements in Array\n";
    cin>>count;
     
    cout<<"Enter "<<count<<" numbers \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin>>input[i];
    }
     
    max = input[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
	if(input[i] > max){
            max = input[i];
        }
    }
 
    cout<<"Maximum Element of Array\n"<<max;           
 getch();
         
}