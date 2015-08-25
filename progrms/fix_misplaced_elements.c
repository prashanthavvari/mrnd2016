#include<stdio.h>
#include<conio.h>
void set(int a[30], int n)
{
	int x, y, i, j,l=0,p=0,m=0,v=0,temp;
	for (i = 0; i < n; i++)
	{
		if ((a[i + 1] < a[i]) && (i + 1 < n))
		{
			l = 1;
			x = i + 1;
			y = a[x];
			break;
		}
	}
	for (p = i + 1; p < n; p++)
	{
		if ((!((a[p]<a[p + 1]) && (a[i]>a[p + 1]))) && (p+1<n))
		{
			v = 1;
			m = p;
			break;
		}
	}
	if (v != 0)
	{
		x = i+1;
		y = a[x];
		l = 1;
	}
	if (v == 1)
	{
		temp = a[i];
		for (j = i; j < m; j++)
			a[j] = a[j + 1];
		a[m] = temp;
	}
	if ((l == 1) && (v!=1))
	{
		
		for (i = 0; i < n; i++)
		{
			if ((y < a[i]))
			{
				j = i;
				break;
			}
		}
		for (i = x; i > j; i--)
		{
			a[i] = a[i - 1];
		}
		a[j] = y;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}

}
void main()
{
	int a[30], i, n, j;
	printf("enter size\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	if (n>0)
	set(a, n);
	getch();
}

