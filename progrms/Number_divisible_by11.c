#include<stdio.h>
#include<conio.h>
int div(int x)
{
	int i=0, j=0, k=0,s=0;
	while (x > 0)
	{
		s = x % 10;
		if (i % 2 == 0)
		{
			j = j + s;
		}
		else
		{
			k = k + s;
		}
		x = x / 10;
		i++;
	}
	s = j - k;
	if (s < 0)
		s = 0 - s;
	if (s == 0 || s == 11)
	{
		return(1);
	}
	else if (s>11)
		return(div(s));
	else if (s < 0)
		return(0);	
}
void main()
{
	int x,l;
	printf("\n enter number");
	scanf("%d", &x);
	l=div(x);
	if (l == 1)
		printf("divisible by 11");
	else
		printf("\n not divisible by 11");
	getch();
}

