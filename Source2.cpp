#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fun(char []);
void main()
{
	char *a;
	a=(char *)malloc(5*sizeof(char));
	printf("enter the value:");
	scanf("%s",a);
	if(fun(a))
	printf("it is divisible by 11");
	else
		printf("it is not");
	getch();
}
int fun(char *a)
{
	int i,s1=0,s2=0,t;
	for(i=0;a[i]!='\0';i++)
	{
		if(i%2==0) {
			s1+=a[i]-48;
			printf("%d",s1);
		}
		else 
			{
				s2+=a[i]-48;
				printf("%d",s2);
		}
	}
	t=s1-s2;
	if(t%11==0) return 1;
	else return 0;
}