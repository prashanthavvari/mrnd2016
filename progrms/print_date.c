#include<stdio.h>
#include<conio.h>
void ones(int s)
{
	int p;
	char d[] = { "one   two   three four  five  six   seven eight nine" };
	for (p = s * 6; p < s * 6 + 5; p++)
	{
		if (d[p] != ' ')
			printf("%c", d[p]);
	}
}
void tens(int s)
{
	int p;
	char ele[] = { "eleven    twelve    thirteen  fourteen  fifteen   sixteen   seventeen eighteen  ninteen" };
	for (p = s * 10; p < s * 10 + 9; p++)
		if (ele[p] != ' ')
			printf("%c", ele[p]);
}
void ten(int s)
{
	int p;
	char te[] = { "ten     twenty  thirty  fourty  fifty   sixty  seventy eighty   ninty  " };
	for (p = s * 8; p < s * 8 + 7; p++)
		if (te[p] != ' ')
			printf("%c", te[p]);
}
void mon(int s)
{
	int p;
	char mn[] = { "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec" };
	if (s * 4 > 44)
	printf("invalid month");
	else
	{
		for (p = s * 4; p < s * 4 + 3; p++)
			if (mn[p] != ' ')
				printf("%c", mn[p]);
	}
}
void days(char c[20], int l, int k)
{
	int s = 0;
	if (c[l] == '0')
	{
		s = (int)c[l + 1] - 49;
		ones(s);
	}
	else if (c[l] == '1')
	{
		if (c[l + 1] != '0')
		{
			s = (int)c[l + 1] - 49;
			tens(s);
		}
		else
		{
			s = (int)c[l + 1] - 48;
			ten(s);
		}
	}
	else if ((c[l] != '1') && (c[l + 1] != '0'))
	{
		s = (int)c[l] - 49;
		ten(s);
		s = (int)c[l + 1] - 49;
		ones(s);
	}
}

void dat(char c[20])
{
	int i, l = 0, k = 0, p = 0,t=0;
	int s = 0;
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '-')
		{
			k = i;
			p = p + 1;
		}
		if (c[i + 1] == '\0')
		{
			k = i + 1;
			p = p + 1;
		}
		if (((k - l) == 2) && (p == 1))
		{
			if ((c[l] <= '3') && (c[l] >= '0'))
				if ((c[l] == '3') && (c[l + 1] >= 2))
				 printf("invalid");
				else
					days(c, l, k);
			else printf("invalid");
				printf("-");
		}
		if (((k - l) == 3) && (p == 2))
		{
			if ((c[l + 1] <= '1') && (c[l + 1] >= '0'))
			{
				if (c[l + 1] == '0')
				{
					s = (int)c[l + 2] - 49;
					mon(s);
				}
				else if (c[l + 1] == '1')
				{
					s = (int)c[l + 2] - 49 + 10;
					mon(s);
				}
			}
			else
				printf("invalid");
			printf("-");
		}
		if (((k - l) == 5) && (p == 3))
		{
			if ((c[l + 1] >= '0') && (c[l + 1] <= '9'))
			{
				if (c[l + 1] != '0')
				{
					s = (int)c[l + 1] - 49;
					ones(s);
					printf("thousand ");
				}
				if (c[l + 2] != '0')
				{
					s = (int)c[l + 2] - 49;
					ones(s);
					printf(" hundered and ");
				}
				days(c, l + 3, k);
			}
			else printf("invalid");
		}
		if ((p > 2) && (k - l) != 5)
			printf("invalid year");
		l = k;
	}
	if (p != 3)printf("invalid format");
}
void main()
{
	char c[20];
	int i,k=0,l=0,s=0,t=0,p=0;
	printf("format\n");
	printf("DD-MM-YYYY\n");
	gets(c);
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '-')
		{
			k = i;
			t = 1;
			p = l;
		}
		if ((!(k - p >= 2))&&(t==1))
		{
			printf("invalid");
			s = 1;
			break;
		}
		l = k;
	}
	if (s!=1)
	dat(c);
	getch();
}