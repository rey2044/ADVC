#include<stdio.h>
#include<conio.h>
struct    Stud
{
	int sid;
	char sn[25];
	float m1,m2,m3;
}S;
void main()
{
	clrscr();
	printf("\n Enter SID  : ");
	scanf("%d",&S.sid);
	printf("\n Enter Name : ");
	scanf("%s",S.sn);
	printf("\n Enter Mark M1, M2, M3 : ");
	scanf("%f%f%f",&S.m1,&S.m2,&S.m3);
	
	printf("\n SID  : %d",S.sid);
	printf("\n Name : %s",S.sn);
	printf("\n Mark M1 %f",S.m1);
	printf("\n Mark M2 %f",S.m2);
	printf("\n Mark M3 %f",S.m3);
	getch();
}
