#include<stdio.h>
#include<conio.h>
void main()
{
	int i,d=0;
	char string[]="123456789qwe";
	for(i=0;i<=11;i++)
	{
		d=i+1;
		printf("%.*s\n",d,string);
	}
	printf("\n");
	for(i=11;i>0;i--)
	{
		d=i+1;
		printf("%.*s\n",d,string);
	}
		getch();
}