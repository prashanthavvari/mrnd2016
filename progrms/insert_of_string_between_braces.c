#include<stdio.h>
#include<conio.h>
int satisfy(char sc[50],int j, int k)
{
	int l,i,m=0;
	char s;
	l = k;
	for (i = 0; i < j; i++)
	{
		if ((sc[i] == '(') || (sc[i] == '<') || (sc[i] == '{') || (sc[i] == '['))
		{
			if (sc[i] == '(')
				s = sc[l - 1] - 1;
			else
				s = sc[l - 1] - 2;
		}
		else
			s = sc[l - 1];
		if (sc[i] == s)
			m = m + 1;
		l--;
	}
	return(m);
}
int check(char c[50],int len)
{
	int i, j=0, k;
	if (((c[0] >= 'a') && (c[0] <= 'z')) || ((c[0] >= '0') && (c[0] <= '9')) || ((c[0] >= 'A') && (c[0] <= 'Z')))
	   {
		if (!(((c[len - 1] >= 'a') && (c[len - 1] <= 'z')) || ((c[len - 1] >= '0') && (c[len - 1] <= '9')) || ((c[len - 1] >= 'A') && (c[len - 1] <= 'Z'))))
		
			return(0);
		}
		else
		{
			for (i = 0; c[i] != '\0'; i++)
			{
				if (((c[i] >= 'a') && (c[i] <= 'z')) || ((c[i] >= '0') && (c[i] <= '9')) || ((c[i] >= 'A') && (c[i] <= 'Z')))
				{
					j = i;
					break;
				}
			}
			if (!(((c[j - 1] >= 'a') && (c[j - 1] <= 'z')) || ((c[j - 1] >= '0') && (c[j - 1] <= '9'))))
				k = satisfy(c, j, len);
			if (k == j)
				return(1);
			else
				return(0);
		}
}
void ins(char c[50], char sc[20])
{
	int i, j = 0, k = 0, l, m = 0, x, p,n,g;
	char s;
	for (i = 0; c[i] != '\0'; i++)
		j = j + 1;
	for (i = 0; sc[i] != '\0'; i++)
		k = k + 1;
	if (k % 2 != 0)
		printf("insertion not possible");
	m=satisfy(sc,k/2, k);
	g=check(c, j);
	if ((m == k / 2) && (g == 1))
	{
		x = j + k;
		l = k;
		for (i = x; i >= x - k / 2; i--)
		{
			sc[i] = sc[l];
			l--;
		}
		p = 0;
		x = j + k;
		for (i = k / 2; i < x - k / 2; i++)
		{
			sc[i] = c[p];
			p++;
		}
		for (i = 0; i < x; i++)
			printf("%c", sc[i]);
	}
	else
		printf("not possible");
	
}
void main()
{
	char c[50], sc[20];
	printf("enter string\n");
	gets(c);
	printf("enter <<>>\n");
	gets(sc);
	ins(c, sc);
	getch();
}