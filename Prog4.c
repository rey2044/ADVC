#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,C[2][2]={0},A[2][2],B[2][2];
	clrscr();
	printf("\nEnter A 2 X 2 Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter Matrix Ele :");
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter B 2 X 2 Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter Matrix Ele :");
			scanf("%d",&B[i][j]);
		}
	}

	printf("\n\nMultiplication of Matrix A X B\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
				C[i][j] = C[i][j]   +  (A[i][k] * B[k][j]);
		}
	}
   for(i=0;i<2;i++)
   {
 	for(j=0;j<2;j++)
	{
	          printf("%3d  ",C[i][j]);
	}
	printf("\n");
   }
   getch();
}
