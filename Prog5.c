#include<stdio.h>
#include<conio.h>
void main()
{
	char s[5][25];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter String %d : ",i+1);
		scanf("%s",s[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n String %d :  %s  Len : %d",i+1,s[i],strlen(s[i]));
	}
	getch();
}
