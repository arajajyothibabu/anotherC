#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char *s1,*s2;
	int i,j,l1=0,l2=0;
	s1=(char *)malloc(sizeof(char)*10);
	s2=(char *)malloc(sizeof(char)*10);
	puts("enter string1");
	gets(s1);
	puts("enter string2");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		l1+=1;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		l2+=1;
	}
	for(i=0;i<l2;i++)
	s1[l1+i]=s2[i];
	s1[l1+l2]='\0';
	puts(s1);
	getch();
}