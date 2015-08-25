#include<stdio.h>
#include<conio.h>
void permu(char a[50], char b[50])
{
	int c[50];
	int i, j,l=0,k=0,x=0;
	for (i = 0; i < 50; i++)
		c[i] = 0;
	for (i = 0; a[i] != '\0'; i++)
		l = l + 1;
	for (i = 0; b[i] != '\0'; i++)
		k = k + 1;
	if (l == k)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			++c[a[i] - 'a'];
		}
		for (i = 0; b[i] != '\0'; i++)
		{
			--c[b[i] - 'a'];
		}
		for (i = 0; i < 50; i++)
		{
			if (c[i] != 0)
			{
				printf("false");
				break;
			}
			x = x + 1;
		}
		if (x==50)
			printf("true");
	}
	else
		printf("false");
}
void main()
{
	char a[50], b[50];
	gets(a);
	gets(b);
	permu(a, b);
	getch();
}