#include<stdio.h>
#include<conio.h>
void Test();		// Function  Definition
void main()
{
	clrscr();
	Test();		 // Calling of Fn
}
void Test()		 // BODY of UD Function
{
	printf("\n Test....");
	Test();		 // Calling of Fn (Recursion)
}
