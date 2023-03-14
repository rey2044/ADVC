#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[3][3],B[3][3];
	printf("\nEnter A 3 X 3 Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Matrix Ele :");
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter B 3 X 3 Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Matrix Ele :");
			scanf("%d",&B[i][j]);
		}
	}
	printf("\n\n\n Sum of Matrix  ( A + B )\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}	
}
