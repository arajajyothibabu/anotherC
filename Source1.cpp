#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int max(int ,int);
void main()
{
int a,b,c;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
c=max(a,b);
printf("%d",c);
getch();
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}