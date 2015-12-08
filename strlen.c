#include<stdio.h>
void main()
{
	char s[10];
	int i,count=0;;
	puts("enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		count+=1;
	}
	printf("%d",count);
	getche();
}