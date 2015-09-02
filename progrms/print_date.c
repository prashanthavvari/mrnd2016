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
	char te[] = { "ten     twenty  thirty  fourty  fifty   sixty  seventy  eighty   ninty  " };
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
	if ((c[l] == '0')&&(c[l+1]!='0'))
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
	else if (((c[l] != '1')) && (c[l + 1] == '0'))
	{
		s = (int)c[l] - 49;
		ten(s);
	}
}

void dat(char c[20])
{
	int i, l = 0, k = 0, p = 0,t=0,xa=0;
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
			days(c, l, k);
			printf("-");
		}
		if (((k - l) == 3) && (p == 2))
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
			printf("-");
		}
		else
			xa = 1;
		if (((k - l) == 5) && (p == 3))
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
					printf(" hundered ");
				}
				if ((c[l + 3] == '0') && (c[l+4]=='0'))
				{ }
				else
				{
					printf("and ");
					days(c, l + 3, k);
				}
		}
		if ((p > 2) && (k - l) != 5)
			printf("invalid year");
		l = k;
	}
	if (p != 3)printf("invalid format");
}
int check(char s[30])
{
	int a[10], d=0,e,f,g,i,b=0,q=0,x=0;
	for (i = 0; i < 8; i++)
		a[i] = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			a[b] = (int)s[i] - 48;
			b++;
		}
		else
			x = x + 1;
	}
	e = a[0]*10 + a[1];
	f = a[2]*10 + a[3];
	g = a[4] * 1000 + a[5] * 100 + a[6] * 10 + a[7];
	switch (f)
	{
	case 1:if (e > 31) s = 1; break;	// e gives date f gives month g gives year
	case 2:if (e > 28) s = 1;; break;
	case 3:if (e > 31) s = 1; break;
	case 4:if (e > 30) s = 1; break;
	case 5:if (e > 31) s = 1; break;
	case 6:if (e > 30) s = 1; break;
	case 7:if (e > 31) s = 1; break;
	case 8:if (e > 31)s = 1; break;
	case 9:if (e > 30)s = 1; break;
	case 10:if (e > 31) s = 1; break;
	case 11:if (e > 30) s = 1; break;
	case 12:if (e > 31) s = 1; break;
	default:s = 1;
	};
 if ((((g % 4 == 0) && (g % 100 != 0)) || (g % 400 == 0)) && (e == 29)) s = 0;
	if ((g != 0) && (s != 1)&&(x<=2)&&(e!=0)&&(f!=0))
		return(0);
	else
		return(1);
	}
void main()
{
	char c[20];
	int i,k=0,l=0,s=0,t=0,p=0;
	printf("format\n");
	printf("DD-MM-YYYY\n");
	gets(c);
	p=check(c);
	if (p == 1)
		printf("\ninvalid");
	else
	{
			for (i = 0; c[i] != '\0'; i++)
			{
			if (c[i] == '-')
			{
			k = i;
			t = t+1;
			p = l;
			}
			if ((!(k - p == 2))&&(t==1))
			{
			printf("invalid");
			s = 1;
			break;
			}
			if (!(k - p == 3) && (t == 2))
			{
			printf("invalid");
			s = 2;
			break;
			}
			l = k;
			}
			if (s==0)
			dat(c);
	}
	getch();
}
