#include<stdio.h>
#include<conio.h>
void rev2(char c[50], int l, int k)
{
	int i,j;
	char temp;
	j = k - l;
	if ((k - l>1) && (l!=0))
	for (i = 0; i <j/ 2; i++)
	{
		temp = c[l+1];
		c[l+1] = c[k-1];
		c[k-1] = temp;
		k--;
		l++;
	}
	if (l == 0)
	{

		for (i = 0; i < j / 2; i++)
		{
			temp = c[l];
			c[l] = c[k - 1];
			c[k - 1] = temp;
			k--; l++;
		}
	}
}
void rev(char c[50])
{
	int i, j, k, l = 0, m, s = 0;
	char temp;
	for (j = 0; c[j] != '\0'; j++){}
	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] == ' ')||(c[i+1]=='\0'))
		{
			k = i;
			if (c[i + 1] == '\0')
				k = i + 1;
			if (l == 0)
				rev2(c, l, k);
			else
			{
				rev2(c, l, k);
			}
				l = k;
		}
	}
		m = j-1;
		for (i = 0; i < j / 2; i++)
		{
			temp = c[i];
			c[i] = c[m];
			c[m] = temp;
			m--;
		}
		puts(c);
}
void main()
{
	char c[50];
	gets(c);
	rev(c);
	getch();
}