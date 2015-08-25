#include<stdio.h>
#include<conio.h>
void pos(char c[30])
{
	int i=0, n,x;
	char *p;
	scanf("%d", &n);
	x = i-n-1;
	for (i = 0; c[i] != '\0';i++)
	{
			x = x + 1;
	}
	if ((x < 0) || (n<0))
		printf("\ninvalid");
	else
		printf("%c", c[x]);
}
void main()
{
	char c[30];
	gets(c);
	pos(c);
	getch();
}