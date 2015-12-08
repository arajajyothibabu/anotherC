#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char *s,ch;
	int i,j,n,c=0;
	puts("enter the range");
	scanf("%d",&n);
	s=(char *)malloc(sizeof(char)*n);
	puts("enter the string:");
    //scanf("%s",s);
	gets(s);
	/*for(i=0;i<n;i++)
	{
		ch=getchar();
		s[i]=ch;
	}*/
	for(i=0,j=(n-1);i<=n/2&&j>=n/2;i++,j--)
	{
		if(s[i]!=s[j]) 
			c++;
	}

	printf("%d",c);
	 if(c==0)    
	printf("it is a palindrome");
		else
			printf("no");
	getch();
}
