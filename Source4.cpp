#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fib(int ,int ,int);
void main()
{
	int a=0,b=1,n,c;
	printf("enter the nth no:");
	scanf("%d",&n);
	c=fib(a,b,n);
	printf("%d",c);
	getch();
}
int fib(int a,int b,int n)
{
	int i=1,d=0;
	while(i<=n)
	{
		d=a+b;
		a=b;
		b=d;
		i++;
	}
	return d;
}