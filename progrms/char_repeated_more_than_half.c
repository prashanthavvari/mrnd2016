#include<stdio.h>
#include<conio.h>
void count(char c[50])
{
	int i, j = 0, k=0,l=0,n,h=0;
	for (i = 0; c[i] != '\0'; i++)
		k = k + 1;
	if (k > 1)
	{
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < k; j++)
			{
				if (c[i] == c[j])
				{
					l = l + 1;
				}
				if (l>k / 2)
				{
					n = i;
					h = n;
					break;
				}
			}
			l = 0;
		}
		if (h == 0)
			printf("\ndoes not exist");
		else
			printf("%c", c[n]);
	}
	else
		printf("%c", c[0]);
}
void main()
{
	char c[50];
	gets(c);
	count(c);
	getch();
}