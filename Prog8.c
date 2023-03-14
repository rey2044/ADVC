#include<stdio.h>
#include<conio.h>
struct EMP
{
	int eid;
	char en[25];
	float esal;
};
void main()
{
	struct EMP E;
	clrscr();
	printf("\n Enter EID  : ");
	scanf("%d",&E.eid);
	printf("\n Enter Emp Name : ");
	scanf("%s",E.en);
	printf("\n Enter Salary : ");
	scanf("%f",&E.esal);
	
	printf("\n EID  : %d",E.eid);
	printf("\n Name : %s",E.en);
	printf("\n Salary : %f",E.esal);
	getch();
}
