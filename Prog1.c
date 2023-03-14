#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[3][3];
	clrscr();
	printf("\nEnter 3 X 3 Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Matrix Ele :");
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n\n\n Matrix Data >>> : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d	",A[i][j]);
		}
		printf("\n");
	}
	getch();
}
