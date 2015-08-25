#include<stdio.h>
#include<conio.h>
void cmp(char a[30], char b[30])
{
	int i, n=0, s=0, l = 0, c = 0, m=0,v,r;
	for (i = 0; a[i] != '\0'; i++)
		n = n + 1;
	for (i = 0; b[i] != '\0'; i++)
		s = s + 1;
		for (i = 0; i < n; i++)
		{
			if (a[i] != '0')
			{
				l = i;
				r = l;
				break;
			}
		}
		for (i = 0; i < s; i++)
		{
			if (b[i] != '0')
			{
				c = i;
				v = c;
				break;
			}
		}
		if (n - l>s - c)
			puts(a);
		else if (n - l < s - c)
			puts(b);
		else if (n - l == s - c)
		{
			for (i = l; i < n; i++)
			{
				if (a[l] < b[c])
				{
					puts(b);
					break;
				}
				else if (a[l] > b[c])
				{
					puts(a);
					break;
				}
				else if (a[l] == b[c])
					m = m + 1;
				l++;
				c++;
			}
			if (m == (s - v))
				printf("equal");
		}
}
int main()
{
	char a[30], b[30];
	gets(a);
	gets(b);
	cmp(a, b);
	getch();
}