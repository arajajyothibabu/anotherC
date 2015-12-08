#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fun(int );
void main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	if(fun(a))
	printf("it is divisible by 11");
	else
		printf("it is not");
	getch();
}
int fun(int a)
{
	int i=1,s1=0,s2=0,t;
	while(a!=0)
	{
		if(i%2==0){
			s1+=a%10;
		a=a/10;
		}
		else
		{
			s2+=a%10;
			a=a/10;
		}
		i++;
	}
	t=s1-s2;
	if(t%11==0) return 1;
	else return 0;
}