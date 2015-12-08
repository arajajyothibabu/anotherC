#include<stdio.h>
#include<conio.h>
void main()
{
	char country[15]="United kingdom";
	printf("%18s\n",country);
	printf("%5s\n",country);
	printf("%6s\n",country);
	printf("%-15.8s\n",country);
	printf("%15.0s\n",country);
	printf("%.3s\n",country);
	printf("%s\n",country);
	getch();
}